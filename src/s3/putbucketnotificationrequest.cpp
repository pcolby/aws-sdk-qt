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

#include "putbucketnotificationrequest.h"
#include "putbucketnotificationrequest_p.h"
#include "putbucketnotificationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketNotificationRequest
 *
 * \brief The PutBucketNotificationRequest class encapsulates S3 PutBucketNotification requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketNotification
 */

/*!
 * @brief  Constructs a new PutBucketNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketNotificationRequest::PutBucketNotificationRequest(const PutBucketNotificationRequest &other)
    : S3Request(new PutBucketNotificationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutBucketNotificationRequest object.
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
 * @brief  Construct an PutBucketNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketNotificationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketNotificationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketNotificationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutBucketNotificationRequestPrivate
 *
 * @brief  Private implementation for PutBucketNotificationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketNotificationRequest instance.
 */
PutBucketNotificationRequestPrivate::PutBucketNotificationRequestPrivate(
    const S3Request::Action action, PutBucketNotificationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketNotificationRequest instance.
 */
PutBucketNotificationRequestPrivate::PutBucketNotificationRequestPrivate(
    const PutBucketNotificationRequestPrivate &other, PutBucketNotificationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
