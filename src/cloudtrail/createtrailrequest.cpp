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

#include "createtrailrequest.h"
#include "createtrailrequest_p.h"
#include "createtrailresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::CreateTrailRequest
 *
 * \brief The CreateTrailRequest class encapsulates CloudTrail CreateTrail requests.
 *
 * \ingroup CloudTrail
 *
 *  <fullname>AWS CloudTrail</fullname>
 * 
 *  This is the CloudTrail API Reference. It provides descriptions of actions, data types, common parameters, and common
 *  errors for
 * 
 *  CloudTrail>
 * 
 *  CloudTrail is a web service that records AWS API calls for your AWS account and delivers log files to an Amazon S3
 *  bucket. The recorded information includes the identity of the user, the start time of the AWS API call, the source IP
 *  address, the request parameters, and the response elements returned by the
 * 
 *  service> <note>
 * 
 *  As an alternative to the API, you can use one of the AWS SDKs, which consist of libraries and sample code for various
 *  programming languages and platforms (Java, Ruby, .NET, iOS, Android, etc.). The SDKs provide a convenient way to create
 *  programmatic access to AWSCloudTrail. For example, the SDKs take care of cryptographically signing requests, managing
 *  errors, and retrying requests automatically. For information about the AWS SDKs, including how to download and install
 *  them, see the <a href="http://aws.amazon.com/tools/">Tools for Amazon Web Services
 * 
 *  page</a>> </note>
 * 
 *  See the <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-user-guide.html">AWS CloudTrail
 *  User Guide</a> for information about the data that is included with each AWS API call listed in the log
 *
 * \sa CloudTrailClient::createTrail
 */

/*!
 * @brief  Constructs a new CreateTrailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrailRequest::CreateTrailRequest(const CreateTrailRequest &other)
    : CloudTrailRequest(new CreateTrailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateTrailRequest object.
 */
CreateTrailRequest::CreateTrailRequest()
    : CloudTrailRequest(new CreateTrailRequestPrivate(CloudTrailRequest::CreateTrailAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrailRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateTrailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrailRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrailResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateTrailRequestPrivate
 *
 * @brief  Private implementation for CreateTrailRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrailRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public CreateTrailRequest instance.
 */
CreateTrailRequestPrivate::CreateTrailRequestPrivate(
    const CloudTrailRequest::Action action, CreateTrailRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTrailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrailRequest instance.
 */
CreateTrailRequestPrivate::CreateTrailRequestPrivate(
    const CreateTrailRequestPrivate &other, CreateTrailRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
