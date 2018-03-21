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

#include "deletetyperequest.h"
#include "deletetyperequest_p.h"
#include "deletetyperesponse.h"
#include "appsyncrequest_p.h"

namespace AWS {
namespace AppSync {

/**
 * @class  DeleteTypeRequest
 *
 * @brief  Implements AppSync DeleteType requests.
 *
 * @see    AppSyncClient::deleteType
 */

/**
 * @brief  Constructs a new DeleteTypeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTypeResponse::DeleteTypeResponse(

/**
 * @brief  Constructs a new DeleteTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTypeRequest::DeleteTypeRequest(const DeleteTypeRequest &other)
    : AppSyncRequest(new DeleteTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTypeRequest object.
 */
DeleteTypeRequest::DeleteTypeRequest()
    : AppSyncRequest(new DeleteTypeRequestPrivate(AppSyncRequest::DeleteTypeAction, this))
{

}

bool DeleteTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
AwsAbstractResponse * DeleteTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypeRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public DeleteTypeRequest instance.
 */
DeleteTypeRequestPrivate::DeleteTypeRequestPrivate(
    const AppSyncRequest::Action action, DeleteTypeRequest * const q)
    : DeleteTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTypeRequest instance.
 */
DeleteTypeRequestPrivate::DeleteTypeRequestPrivate(
    const DeleteTypeRequestPrivate &other, DeleteTypeRequest * const q)
    : DeleteTypePrivate(other, q)
{

}
