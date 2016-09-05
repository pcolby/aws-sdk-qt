#!/bin/bash
curl -Ls https://github.com/aws/aws-sdk-cpp/archive/master.tar.gz |
  tar xvz -C ../descriptions --strip-components=3 aws-sdk-cpp-master/code-generation/api-descriptions
