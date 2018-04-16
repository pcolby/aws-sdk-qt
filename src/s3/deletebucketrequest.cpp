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

#include "deletebucketrequest.h"
#include "deletebucketrequest_p.h"
#include "deletebucketresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketRequest
 *
 * \brief The DeleteBucketRequest class encapsulates S3 DeleteBucket requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteBucket
 */

/*!
 * @brief  Constructs a new DeleteBucketRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketRequest::DeleteBucketRequest(const DeleteBucketRequest &other)
    : S3Request(new DeleteBucketRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteBucketRequest object.
 */
DeleteBucketRequest::DeleteBucketRequest()
    : S3Request(new DeleteBucketRequestPrivate(S3Request::DeleteBucketAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteBucketResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteBucketRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketRequest instance.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const S3Request::Action action, DeleteBucketRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketRequest instance.
 */
DeleteBucketRequestPrivate::DeleteBucketRequestPrivate(
    const DeleteBucketRequestPrivate &other, DeleteBucketRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
