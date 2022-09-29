# yaml-rules-and-terraform-violations


## Instructions

Go to each of the branches below and make a pull request to trigger the teams' webhook

Make sure that your email is configured in the teams database as an admin

Wait for their lambda pipeline to finish processing

Check `some.cpsc319.test@gmail.com` to see results


### WIP links

* Seven of Spades: https://production.d2u2qvge5tymuq.amplifyapp.com/
    * WIP instructions at https://docs.google.com/document/d/1DW6L7v7vj0CMvgI5u_s7EmKivkhmKXs78u1xUU3m6ro/edit
    * user: some.cpsc319.test@gmail.com
    * pwd: ask Arthur on Slack 

* Group 4: https://main.d1sirflqgrytx7.amplifyapp.com/
    * user: some.cpsc319.test@gmail.com <--- OURs
    * pwd: ask Arthur on Slack 

    * user: hsbcviolationviewer@gmail.com <--- team default admin account
    * pwd: ask Arthur on Slack 


## Rules

Rule directories are organized as follows


```
.
├── general
│   ├── ensure-that-athena-workgroup-is-encrypted.yaml
│   └── ensure-that-codebuild-projects-are-encrypted.yaml
├── logging
│   └── bc_aws_logging_24.yaml
├── networking
│   ├── ensure-transfer-server-is-not-exposed-publicly.yaml
│   ├── networking_1-port-security.yaml
│   ├── networking_31.yaml
│   └── networking_32.yaml
├── public
│   └── public_11.yaml
├── secrets
│   └── bc_aws_secrets_1.yaml
└── storage
    ├── bc_aws_s3_20.yaml
    ├── ensure-docdb-has-audit-logs-enabled.yaml
    ├── s3_13-enable-logging.yaml
    └── s3_7-acl-write-permissions-aws.yaml
```


## Test cases


* [simple general rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/general-t1)
* [another general rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/general-t2)
* [simple public rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/public-t1)
* [simple logging rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/logging-t1)
* [simple networking rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/networking-t1)
* [another simple networking rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/secret-t1)
* [more networking rule](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/networking-t2)
* [error cases - various malformed terraform files](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/error-cases)
* [multiple files test - varios storage rules](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/storage)
* [stress test - various randomly generated terraform files](https://github.com/CPSC-319/yaml-rules-and-terraform-violations/tree/scalability)





## For the teams

If you see a wrong file, make an issue and assign it to me `marquesarthur` and I'll fix it ASAP
