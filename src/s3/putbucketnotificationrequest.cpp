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

#include "putbucketnotificationrequest.h"
#include "putbucketnotificationrequest_p.h"
#include "putbucketnotificationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationRequest
 * \brief The PutBucketNotificationRequest class provides an interface for S3 PutBucketNotification requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketNotification
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketNotificationRequest::PutBucketNotificationRequest(const PutBucketNotificationRequest &other)
    : S3Request(new PutBucketNotificationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketNotificationRequest object.
 */
PutBucketNotificationRequest::PutBucketNotificationRequest()
    : S3Request(new PutBucketNotificationRequestPrivate(S3Request::PutBucketNotificationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketNotificationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketNotificationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketNotificationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketNotificationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketNotificationRequestPrivate
 * \brief The PutBucketNotificationRequestPrivate class provides private implementation for PutBucketNotificationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketNotificationRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketNotificationRequestPrivate::PutBucketNotificationRequestPrivate(
    const S3Request::Action action, PutBucketNotificationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketNotificationRequest
 * class' copy constructor.
 */
PutBucketNotificationRequestPrivate::PutBucketNotificationRequestPrivate(
    const PutBucketNotificationRequestPrivate &other, PutBucketNotificationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
