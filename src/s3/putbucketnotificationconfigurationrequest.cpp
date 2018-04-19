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

#include "putbucketnotificationconfigurationrequest.h"
#include "putbucketnotificationconfigurationrequest_p.h"
#include "putbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationRequest
 * \brief The PutBucketNotificationConfigurationRequest class provides an interface for S3 PutBucketNotificationConfiguration requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketNotificationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest(const PutBucketNotificationConfigurationRequest &other)
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketNotificationConfigurationRequest object.
 */
PutBucketNotificationConfigurationRequest::PutBucketNotificationConfigurationRequest()
    : S3Request(new PutBucketNotificationConfigurationRequestPrivate(S3Request::PutBucketNotificationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketNotificationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketNotificationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketNotificationConfigurationRequestPrivate
 * \brief The PutBucketNotificationConfigurationRequestPrivate class provides private implementation for PutBucketNotificationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketNotificationConfigurationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketNotificationConfigurationRequest
 * class' copy constructor.
 */
PutBucketNotificationConfigurationRequestPrivate::PutBucketNotificationConfigurationRequestPrivate(
    const PutBucketNotificationConfigurationRequestPrivate &other, PutBucketNotificationConfigurationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
