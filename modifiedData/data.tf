# added from https://github.com/futurice/terraform-examples/blob/master/aws/aws_lambda_api/data.tf

data "aws_route53_zone" "this" {
  name = "${replace("${var.api_domain}", "/.*\\b(\\w+\\.\\w+)\\.?$/", "$1")}" # e.g. "foo.example.com" => "example.com"
}