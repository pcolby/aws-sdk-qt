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

#include "deletebucketpolicyrequest.h"
#include "deletebucketpolicyrequest_p.h"
#include "deletebucketpolicyresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketPolicyRequest
 *
 * \brief The DeleteBucketPolicyRequest class provides an interface for S3 DeleteBucketPolicy requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteBucketPolicy
 */

/*!
 * @brief  Constructs a new DeleteBucketPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest(const DeleteBucketPolicyRequest &other)
    : S3Request(new DeleteBucketPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteBucketPolicyRequest object.
 */
DeleteBucketPolicyRequest::DeleteBucketPolicyRequest()
    : S3Request(new DeleteBucketPolicyRequestPrivate(S3Request::DeleteBucketPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketPolicyRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteBucketPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketPolicyResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketPolicyResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteBucketPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketPolicyRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketPolicyRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketPolicyRequest instance.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const S3Request::Action action, DeleteBucketPolicyRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketPolicyRequest instance.
 */
DeleteBucketPolicyRequestPrivate::DeleteBucketPolicyRequestPrivate(
    const DeleteBucketPolicyRequestPrivate &other, DeleteBucketPolicyRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
