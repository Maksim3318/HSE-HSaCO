# Build

## Docker image and container initialization
```
docker pull vkcom/kphp
docker run -ti -v *directory_path*\hw1:/tmp/dev:rw -p 8080:8080 vkcom/kphp
```

## Compilation and launch
```
kphp /tmp/dev/solution.php
./kphp_out/server -H 8080 -f 1 -u root
```

## Saving to device
```
mv /kphp_out /tmp/dev
```
