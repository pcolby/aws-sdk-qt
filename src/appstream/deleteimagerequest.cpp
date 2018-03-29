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

#include "deleteimagerequest.h"
#include "deleteimagerequest_p.h"
#include "deleteimageresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  DeleteImageRequest
 *
 * @brief  Implements AppStream DeleteImage requests.
 *
 * @see    AppStreamClient::deleteImage
 */

/**
 * @brief  Constructs a new DeleteImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteImageRequest::DeleteImageRequest(const DeleteImageRequest &other)
    : AppStreamRequest(new DeleteImageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteImageRequest object.
 */
DeleteImageRequest::DeleteImageRequest()
    : AppStreamRequest(new DeleteImageRequestPrivate(AppStreamRequest::DeleteImageAction, this))
{

}

bool DeleteImageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteImageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteImageRequestPrivate
 *
 * @brief  Private implementation for DeleteImageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DeleteImageRequest instance.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const AppStreamRequest::Action action, DeleteImageRequest * const q)
    : DeleteImagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteImageRequest instance.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const DeleteImageRequestPrivate &other, DeleteImageRequest * const q)
    : DeleteImagePrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
