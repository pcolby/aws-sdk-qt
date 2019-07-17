/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcalleridentityrequest.h"
#include "getcalleridentityrequest_p.h"
#include "getcalleridentityresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::GetCallerIdentityRequest
 * \brief The GetCallerIdentityRequest class provides an interface for STS GetCallerIdentity requests.
 *
 * \inmodule QtAwsSTS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  The AWS Security Token Service (STS) is a web service that enables you to request temporary, limited-privilege
 *  credentials for AWS Identity and Access Management (IAM) users or for users that you authenticate (federated users).
 *  This guide provides descriptions of the STS API. For more detailed information about using this service, go to <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a>.
 * 
 *  </p
 * 
 *  For information about setting up signatures and authorization through the API, go to <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the
 *  <i>AWS General Reference</i>. For general information about the Query API, go to <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in <i>Using
 *  IAM</i>. For information about using security tokens with other AWS products, go to <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS Services That
 *  Work with IAM</a> in the <i>IAM User Guide</i>.
 * 
 *  </p
 * 
 *  If you're new to AWS and need additional technical information about a specific AWS product, you can find the product's
 *  technical documentation at <a href="http://aws.amazon.com/documentation/">http://aws.amazon.com/documentation/</a>.
 * 
 *  </p
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  By default, AWS Security Token Service (STS) is available as a global service, and all AWS STS requests go to a single
 *  endpoint at <code>https://sts.amazonaws.com</code>. Global requests map to the US East (N. Virginia) region. AWS
 *  recommends using Regional AWS STS endpoints instead of the global endpoint to reduce latency, build in redundancy, and
 *  increase session token validity. For more information, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Managing AWS STS in an
 *  AWS Region</a> in the <i>IAM User
 * 
 *  Guide</i>>
 * 
 *  Most AWS Regions are enabled for operations in all AWS services by default. Those Regions are automatically activated
 *  for use with AWS STS. Some Regions, such as Asia Pacific (Hong Kong), must be manually enabled. To learn more about
 *  enabling and disabling AWS Regions, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html">Managing AWS Regions</a> in the <i>AWS General
 *  Reference</i>. When you enable these AWS Regions, they are automatically activated for use with AWS STS. You cannot
 *  activate the STS endpoint for a Region that is disabled. Tokens that are valid in all AWS Regions are longer than tokens
 *  that are valid in Regions that are enabled by default. Changing this setting might affect existing systems where you
 *  temporarily store tokens. For more information, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html#sts-regions-manage-tokens">Managing
 *  Global Endpoint Session Tokens</a> in the <i>IAM User
 * 
 *  Guide</i>>
 * 
 *  After you activate a Region for use with AWS STS, you can direct AWS STS API calls to that Region. AWS STS recommends
 *  that you provide both the Region and endpoint when you make calls to a Regional endpoint. You can provide the Region
 *  alone for manually enabled Regions, such as Asia Pacific (Hong Kong). In this case, the calls are directed to the STS
 *  Regional endpoint. However, if you provide the Region alone for Regions enabled by default, the calls are directed to
 *  the global endpoint of
 * 
 *  <code>https://sts.amazonaws.com</code>>
 * 
 *  To view the list of AWS STS endpoints and whether they are active by default, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html#id_credentials_temp_enable-regions_writing_code">Writing
 *  Code to Use AWS STS Regions</a> in the <i>IAM User
 * 
 *  Guide</i>>
 * 
 *  <b>Recording API requests</b>
 * 
 *  </p
 * 
 *  STS supports AWS CloudTrail, which is a service that records AWS calls for your AWS account and delivers log files to an
 *  Amazon S3 bucket. By using information collected by CloudTrail, you can determine what requests were successfully made
 *  to STS, who made the request, when it was made, and so
 * 
 *  on>
 * 
 *  If you activate AWS STS endpoints in Regions other than the default global endpoint, then you must also turn on
 *  CloudTrail logging in those Regions. This is necessary to record any AWS STS API calls that are made in those Regions.
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/aggregating_logs_regions_turn_on_ct.html">Turning On
 *  CloudTrail in Additional Regions</a> in the <i>AWS CloudTrail User
 * 
 *  Guide</i>>
 * 
 *  AWS Security Token Service (STS) is a global service with a single endpoint at <code>https://sts.amazonaws.com</code>.
 *  Calls to this endpoint are logged as calls to a global service. However, because this endpoint is physically located in
 *  the US East (N. Virginia) Region, your logs list <code>us-east-1</code> as the event Region. CloudTrail does not write
 *  these logs to the US East (Ohio) Region unless you choose to include global service logs in that Region. CloudTrail
 *  writes calls to all Regional endpoints to their respective Regions. For example, calls to sts.us-east-2.amazonaws.com
 *  are published to the US East (Ohio) Region and calls to sts.eu-central-1.amazonaws.com are published to the EU
 *  (Frankfurt)
 * 
 *  Region>
 * 
 *  To learn more about CloudTrail, including how to turn it on and find your log files, see the <a
 *  href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa StsClient::getCallerIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest(const GetCallerIdentityRequest &other)
    : StsRequest(new GetCallerIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCallerIdentityRequest object.
 */
GetCallerIdentityRequest::GetCallerIdentityRequest()
    : StsRequest(new GetCallerIdentityRequestPrivate(StsRequest::GetCallerIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool GetCallerIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCallerIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCallerIdentityRequest::response(QNetworkReply * const reply) const
{
    return new GetCallerIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::STS::GetCallerIdentityRequestPrivate
 * \brief The GetCallerIdentityRequestPrivate class provides private implementation for GetCallerIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSTS
 */

/*!
 * Constructs a GetCallerIdentityRequestPrivate object for Sts \a action,
 * with public implementation \a q.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const StsRequest::Action action, GetCallerIdentityRequest * const q)
    : StsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCallerIdentityRequest
 * class' copy constructor.
 */
GetCallerIdentityRequestPrivate::GetCallerIdentityRequestPrivate(
    const GetCallerIdentityRequestPrivate &other, GetCallerIdentityRequest * const q)
    : StsRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
