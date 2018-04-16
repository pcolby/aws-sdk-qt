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

#include "stoploggingrequest.h"
#include "stoploggingrequest_p.h"
#include "stoploggingresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/*!
 * \class QtAws::CloudTrail::StopLoggingRequest
 *
 * \brief The StopLoggingRequest class provides an interface for CloudTrail StopLogging requests.
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
 * \sa CloudTrailClient::stopLogging
 */

/*!
 * @brief  Constructs a new StopLoggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopLoggingRequest::StopLoggingRequest(const StopLoggingRequest &other)
    : CloudTrailRequest(new StopLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopLoggingRequest object.
 */
StopLoggingRequest::StopLoggingRequest()
    : CloudTrailRequest(new StopLoggingRequestPrivate(CloudTrailRequest::StopLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool StopLoggingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopLoggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopLoggingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
QtAws::Core::AwsAbstractResponse * StopLoggingRequest::response(QNetworkReply * const reply) const
{
    return new StopLoggingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopLoggingRequestPrivate
 *
 * @brief  Private implementation for StopLoggingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopLoggingRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public StopLoggingRequest instance.
 */
StopLoggingRequestPrivate::StopLoggingRequestPrivate(
    const CloudTrailRequest::Action action, StopLoggingRequest * const q)
    : CloudTrailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopLoggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopLoggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopLoggingRequest instance.
 */
StopLoggingRequestPrivate::StopLoggingRequestPrivate(
    const StopLoggingRequestPrivate &other, StopLoggingRequest * const q)
    : CloudTrailRequestPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
