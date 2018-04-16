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

#include "putbucketlifecyclerequest.h"
#include "putbucketlifecyclerequest_p.h"
#include "putbucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketLifecycleRequest
 *
 * \brief The PutBucketLifecycleRequest class provides an interface for S3 PutBucketLifecycle requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::putBucketLifecycle
 */

/*!
 * @brief  Constructs a new PutBucketLifecycleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketLifecycleRequest::PutBucketLifecycleRequest(const PutBucketLifecycleRequest &other)
    : S3Request(new PutBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutBucketLifecycleRequest object.
 */
PutBucketLifecycleRequest::PutBucketLifecycleRequest()
    : S3Request(new PutBucketLifecycleRequestPrivate(S3Request::PutBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutBucketLifecycleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketLifecycleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketLifecycleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutBucketLifecycleRequestPrivate
 *
 * @brief  Private implementation for PutBucketLifecycleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketLifecycleRequest instance.
 */
PutBucketLifecycleRequestPrivate::PutBucketLifecycleRequestPrivate(
    const S3Request::Action action, PutBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketLifecycleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketLifecycleRequest instance.
 */
PutBucketLifecycleRequestPrivate::PutBucketLifecycleRequestPrivate(
    const PutBucketLifecycleRequestPrivate &other, PutBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
