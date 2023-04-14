#!/bin/bash

# Flush out memory to disk so we have the maximum available for Java allocation
sudo sh -c "echo 1 > /proc/sys/vm/drop_caches"
sync

# Check if server is already running
ScreenWipe=$(screen -wipe 2>&1)
if screen -list | grep -q "\.minecraft"; then
    echo "Server is already running!  Type screen -r minecraft to open the console"
    exit 1
fi

# Check if network interfaces are up
NetworkChecks=0
if [ -e '/sbin/route' ]; then
    DefaultRoute=$(/sbin/route -n | awk '$4 == "UG" {print $2}')
else
    DefaultRoute=$(route -n | awk '$4 == "UG" {print $2}')
fi
while [ -z "$DefaultRoute" ]; do
    echo "Network interface not up, will try again in 1 second"
    sleep 1
    if [ -e '/sbin/route' ]; then
        DefaultRoute=$(/sbin/route -n | awk '$4 == "UG" {print $2}')
    else
        DefaultRoute=$(route -n | awk '$4 == "UG" {print $2}')
    fi
    NetworkChecks=$((NetworkChecks + 1))
    if [ $NetworkChecks -gt 20 ]; then
        echo "Waiting for network interface to come up timed out - starting server without network c>
        break
    fi
done

# Switch to server directory
cd /home/pi/Create/

# Back up server
if [ -d "world" ]; then
    if [ -n "$(which pigz)" ]; then
        echo "Backing up server (all cores) to cd Create/backups folder"
        tar -I pigz --exclude='./backups' --exclude='./cache' --exclude='./logs' --exclude='./jre' ->
    else
        echo "Backing up server (single core, pigz not found) to cd Create/backups folder"
        tar --exclude='./backups' --exclude='./cache' --exclude='./logs' --exclude='./jre' --exclude>
    fi
fi


# Rotate backups -- keep most recent 10
if [ -e "/home/pi/Create/backups" ]; then
    Rotate=$(
        pushd /home/pi/Create/backups
        ls -1tr | head -n -10 | xargs -d '\n' rm -f --
        popd
    )
fi

echo "Starting Minecraft server.  To view window type screen -r minecraft."
echo "To minimize the window and let the server run in the background, press Ctrl+A then Ctrl+D"


