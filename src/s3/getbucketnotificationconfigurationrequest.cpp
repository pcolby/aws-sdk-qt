/*
    Copyright 2013-2021 Paul Colby

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

#include "getbucketnotificationconfigurationrequest.h"
#include "getbucketnotificationconfigurationrequest_p.h"
#include "getbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationRequest
 * \brief The GetBucketNotificationConfigurationRequest class provides an interface for S3 GetBucketNotificationConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest(const GetBucketNotificationConfigurationRequest &other)
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketNotificationConfigurationRequest object.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest()
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(S3Request::GetBucketNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketNotificationConfigurationRequestPrivate
 * \brief The GetBucketNotificationConfigurationRequestPrivate class provides private implementation for GetBucketNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketNotificationConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketNotificationConfigurationRequest
 * class' copy constructor.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const GetBucketNotificationConfigurationRequestPrivate &other, GetBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
