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

#include "deletetrailrequest.h"
#include "deletetrailrequest_p.h"
#include "deletetrailresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::DeleteTrailRequest
 *
 * \brief The DeleteTrailRequest class encapsulates CloudTrail DeleteTrail requests.
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
 * \sa CloudTrailClient::deleteTrail
 */

/*!
 * @brief  Constructs a new DeleteTrailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTrailRequest::DeleteTrailRequest(const DeleteTrailRequest &other)
    : CloudTrailRequest(new DeleteTrailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteTrailRequest object.
 */
DeleteTrailRequest::DeleteTrailRequest()
    : CloudTrailRequest(new DeleteTrailRequestPrivate(CloudTrailRequest::DeleteTrailAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrailRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteTrailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTrailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrailRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrailResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteTrailRequestPrivate
 *
 * @brief  Private implementation for DeleteTrailRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTrailRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public DeleteTrailRequest instance.
 */
DeleteTrailRequestPrivate::DeleteTrailRequestPrivate(
    const CloudTrailRequest::Action action, DeleteTrailRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteTrailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTrailRequest instance.
 */
DeleteTrailRequestPrivate::DeleteTrailRequestPrivate(
    const DeleteTrailRequestPrivate &other, DeleteTrailRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
