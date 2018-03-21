/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteimagebuilderrequest.h"
#include "deleteimagebuilderrequest_p.h"
#include "deleteimagebuilderresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  DeleteImageBuilderRequest
 *
 * @brief  Implements AppStream DeleteImageBuilder requests.
 *
 * @see    AppStreamClient::deleteImageBuilder
 */

/**
 * @brief  Constructs a new DeleteImageBuilderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteImageBuilderResponse::DeleteImageBuilderResponse(

/**
 * @brief  Constructs a new DeleteImageBuilderRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteImageBuilderRequest::DeleteImageBuilderRequest(const DeleteImageBuilderRequest &other)
    : AppStreamRequest(new DeleteImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteImageBuilderRequest object.
 */
DeleteImageBuilderRequest::DeleteImageBuilderRequest()
    : AppStreamRequest(new DeleteImageBuilderRequestPrivate(AppStreamRequest::DeleteImageBuilderAction, this))
{

}

bool DeleteImageBuilderRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteImageBuilderResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteImageBuilderResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DeleteImageBuilderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageBuilderResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteImageBuilderRequestPrivate
 *
 * @brief  Private implementation for DeleteImageBuilderRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageBuilderRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DeleteImageBuilderRequest instance.
 */
DeleteImageBuilderRequestPrivate::DeleteImageBuilderRequestPrivate(
    const AppStreamRequest::Action action, DeleteImageBuilderRequest * const q)
    : DeleteImageBuilderPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteImageBuilderRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageBuilderRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteImageBuilderRequest instance.
 */
DeleteImageBuilderRequestPrivate::DeleteImageBuilderRequestPrivate(
    const DeleteImageBuilderRequestPrivate &other, DeleteImageBuilderRequest * const q)
    : DeleteImageBuilderPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
