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

#include "deleteobjecttaggingrequest.h"
#include "deleteobjecttaggingrequest_p.h"
#include "deleteobjecttaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectTaggingRequest
 *
 * \brief The DeleteObjectTaggingRequest class provides an interface for S3 DeleteObjectTagging requests.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::deleteObjectTagging
 */

/*!
 * @brief  Constructs a new DeleteObjectTaggingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest(const DeleteObjectTaggingRequest &other)
    : S3Request(new DeleteObjectTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteObjectTaggingRequest object.
 */
DeleteObjectTaggingRequest::DeleteObjectTaggingRequest()
    : S3Request(new DeleteObjectTaggingRequestPrivate(S3Request::DeleteObjectTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectTaggingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteObjectTaggingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteObjectTaggingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  S3Client::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectTaggingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteObjectTaggingRequestPrivate
 *
 * @brief  Private implementation for DeleteObjectTaggingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteObjectTaggingRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public DeleteObjectTaggingRequest instance.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const S3Request::Action action, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteObjectTaggingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectTaggingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteObjectTaggingRequest instance.
 */
DeleteObjectTaggingRequestPrivate::DeleteObjectTaggingRequestPrivate(
    const DeleteObjectTaggingRequestPrivate &other, DeleteObjectTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
