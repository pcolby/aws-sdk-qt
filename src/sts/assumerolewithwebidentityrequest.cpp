/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "assumerolewithwebidentityrequest.h"
#include "assumerolewithwebidentityrequest_p.h"
#include "assumerolewithwebidentityresponse.h"
#include "stsrequest_p.h"

namespace QtAws {
namespace STS {

/*!
 * \class QtAws::STS::AssumeRoleWithWebIdentityRequest
 *
 * \brief The AssumeRoleWithWebIdentityRequest class encapsulates STS AssumeRoleWithWebIdentity requests.
 *
 * \ingroup STS
 *
 *  <fullname>AWS Security Token Service</fullname>
 * 
 *  The AWS Security Token Service (STS) is a web service that enables you to request temporary, limited-privilege
 *  credentials for AWS Identity and Access Management (IAM) users or for users that you authenticate (federated users).
 *  This guide provides descriptions of the STS API. For more detailed information about using this service, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security Credentials</a>.
 * 
 *  </p <note>
 * 
 *  As an alternative to using the API, you can use one of the AWS SDKs, which consist of libraries and sample code for
 *  various programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to
 *  create programmatic access to STS. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services page</a>.
 * 
 *  </p </note>
 * 
 *  For information about setting up signatures and authorization through the API, go to <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/signing_aws_api_requests.html">Signing AWS API Requests</a> in the
 *  <i>AWS General Reference</i>. For general information about the Query API, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/IAM_UsingQueryAPI.html">Making Query Requests</a> in <i>Using
 *  IAM</i>. For information about using security tokens with other AWS products, go to <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/reference_aws-services-that-work-with-iam.html">AWS Services That
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
 *  The AWS Security Token Service (STS) has a default endpoint of https://sts.amazonaws.com that maps to the US East (N.
 *  Virginia) region. Additional regions are available and are activated by default. For more information, see <a
 *  href="http://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating and
 *  Deactivating AWS STS in an AWS Region</a> in the <i>IAM User
 * 
 *  Guide</i>>
 * 
 *  For information about STS endpoints, see <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#sts_region">Regions and Endpoints</a> in the <i>AWS
 *  General
 * 
 *  Reference</i>>
 * 
 *  <b>Recording API requests</b>
 * 
 *  </p
 * 
 *  STS supports AWS CloudTrail, which is a service that records AWS calls for your AWS account and delivers log files to an
 *  Amazon S3 bucket. By using information collected by CloudTrail, you can determine what requests were successfully made
 *  to STS, who made the request, when it was made, and so on. To learn more about CloudTrail, including how to turn it on
 *  and find your log files, see the <a
 *  href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">AWS CloudTrail User
 *
 * \sa STSClient::assumeRoleWithWebIdentity
 */

/*!
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest(const AssumeRoleWithWebIdentityRequest &other)
    : STSRequest(new AssumeRoleWithWebIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequest object.
 */
AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest()
    : STSRequest(new AssumeRoleWithWebIdentityRequestPrivate(STSRequest::AssumeRoleWithWebIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool AssumeRoleWithWebIdentityRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AssumeRoleWithWebIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssumeRoleWithWebIdentityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  STSClient::send
 */
QtAws::Core::AwsAbstractResponse * AssumeRoleWithWebIdentityRequest::response(QNetworkReply * const reply) const
{
    return new AssumeRoleWithWebIdentityResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AssumeRoleWithWebIdentityRequestPrivate
 *
 * @brief  Private implementation for AssumeRoleWithWebIdentityRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequestPrivate object.
 *
 * @param  action  STS action being performed.
 * @param  q       Pointer to this object's public AssumeRoleWithWebIdentityRequest instance.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const STSRequest::Action action, AssumeRoleWithWebIdentityRequest * const q)
    : STSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AssumeRoleWithWebIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssumeRoleWithWebIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssumeRoleWithWebIdentityRequest instance.
 */
AssumeRoleWithWebIdentityRequestPrivate::AssumeRoleWithWebIdentityRequestPrivate(
    const AssumeRoleWithWebIdentityRequestPrivate &other, AssumeRoleWithWebIdentityRequest * const q)
    : STSRequestPrivate(other, q)
{

}

} // namespace STS
} // namespace QtAws
