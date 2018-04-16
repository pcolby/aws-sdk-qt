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

#include "getbucketlifecyclerequest.h"
#include "getbucketlifecyclerequest_p.h"
#include "getbucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleRequest
 *
 * \brief The GetBucketLifecycleRequest class provides an interface for S3 GetBucketLifecycle requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::getBucketLifecycle
 */

/*!
 * @brief  Constructs a new GetBucketLifecycleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketLifecycleRequest::GetBucketLifecycleRequest(const GetBucketLifecycleRequest &other)
    : S3Request(new GetBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBucketLifecycleRequest object.
 */
GetBucketLifecycleRequest::GetBucketLifecycleRequest()
    : S3Request(new GetBucketLifecycleRequestPrivate(S3Request::GetBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBucketLifecycleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketLifecycleResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLifecycleResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBucketLifecycleRequestPrivate
 *
 * @brief  Private implementation for GetBucketLifecycleRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketLifecycleRequest instance.
 */
GetBucketLifecycleRequestPrivate::GetBucketLifecycleRequestPrivate(
    const S3Request::Action action, GetBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLifecycleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketLifecycleRequest instance.
 */
GetBucketLifecycleRequestPrivate::GetBucketLifecycleRequestPrivate(
    const GetBucketLifecycleRequestPrivate &other, GetBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
