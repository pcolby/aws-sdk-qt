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

#include "deletebucketwebsiterequest.h"
#include "deletebucketwebsiterequest_p.h"
#include "deletebucketwebsiteresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketWebsiteRequest
 *
 * \brief The DeleteBucketWebsiteRequest class provides an interface for S3 DeleteBucketWebsite requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteBucketWebsite
 */

/*!
 * @brief  Constructs a new DeleteBucketWebsiteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBucketWebsiteRequest::DeleteBucketWebsiteRequest(const DeleteBucketWebsiteRequest &other)
    : S3Request(new DeleteBucketWebsiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteBucketWebsiteRequest object.
 */
DeleteBucketWebsiteRequest::DeleteBucketWebsiteRequest()
    : S3Request(new DeleteBucketWebsiteRequestPrivate(S3Request::DeleteBucketWebsiteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketWebsiteRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteBucketWebsiteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBucketWebsiteResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketWebsiteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketWebsiteResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteBucketWebsiteRequestPrivate
 *
 * @brief  Private implementation for DeleteBucketWebsiteRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketWebsiteRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteBucketWebsiteRequest instance.
 */
DeleteBucketWebsiteRequestPrivate::DeleteBucketWebsiteRequestPrivate(
    const S3Request::Action action, DeleteBucketWebsiteRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteBucketWebsiteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketWebsiteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBucketWebsiteRequest instance.
 */
DeleteBucketWebsiteRequestPrivate::DeleteBucketWebsiteRequestPrivate(
    const DeleteBucketWebsiteRequestPrivate &other, DeleteBucketWebsiteRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
