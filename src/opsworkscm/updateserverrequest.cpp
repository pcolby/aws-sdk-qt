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

#include "updateserverrequest.h"
#include "updateserverrequest_p.h"
#include "updateserverresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  UpdateServerRequest
 *
 * @brief  Implements OpsWorksCM UpdateServer requests.
 *
 * @see    OpsWorksCMClient::updateServer
 */

/**
 * @brief  Constructs a new UpdateServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServerResponse::UpdateServerResponse(

/**
 * @brief  Constructs a new UpdateServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateServerRequest::UpdateServerRequest(const UpdateServerRequest &other)
    : OpsWorksCMRequest(new UpdateServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateServerRequest object.
 */
UpdateServerRequest::UpdateServerRequest()
    : OpsWorksCMRequest(new UpdateServerRequestPrivate(OpsWorksCMRequest::UpdateServerAction, this))
{

}

bool UpdateServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * UpdateServerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateServerRequestPrivate
 *
 * @brief  Private implementation for UpdateServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public UpdateServerRequest instance.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const OpsWorksCMRequest::Action action, UpdateServerRequest * const q)
    : UpdateServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateServerRequest instance.
 */
UpdateServerRequestPrivate::UpdateServerRequestPrivate(
    const UpdateServerRequestPrivate &other, UpdateServerRequest * const q)
    : UpdateServerPrivate(other, q)
{

}
