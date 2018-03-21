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

#include "deleteserverrequest.h"
#include "deleteserverrequest_p.h"
#include "deleteserverresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DeleteServerRequest
 *
 * @brief  Implements OpsWorksCM DeleteServer requests.
 *
 * @see    OpsWorksCMClient::deleteServer
 */

/**
 * @brief  Constructs a new DeleteServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServerResponse::DeleteServerResponse(

/**
 * @brief  Constructs a new DeleteServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServerRequest::DeleteServerRequest(const DeleteServerRequest &other)
    : OpsWorksCMRequest(new DeleteServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServerRequest object.
 */
DeleteServerRequest::DeleteServerRequest()
    : OpsWorksCMRequest(new DeleteServerRequestPrivate(OpsWorksCMRequest::DeleteServerAction, this))
{

}

bool DeleteServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DeleteServerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServerRequestPrivate
 *
 * @brief  Private implementation for DeleteServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DeleteServerRequest instance.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const OpsWorksCMRequest::Action action, DeleteServerRequest * const q)
    : DeleteServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServerRequest instance.
 */
DeleteServerRequestPrivate::DeleteServerRequestPrivate(
    const DeleteServerRequestPrivate &other, DeleteServerRequest * const q)
    : DeleteServerPrivate(other, q)
{

}
