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

#include "createserverrequest.h"
#include "createserverrequest_p.h"
#include "createserverresponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  CreateServerRequest
 *
 * @brief  Implements OpsWorksCM CreateServer requests.
 *
 * @see    OpsWorksCMClient::createServer
 */

/**
 * @brief  Constructs a new CreateServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServerResponse::CreateServerResponse(

/**
 * @brief  Constructs a new CreateServerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateServerRequest::CreateServerRequest(const CreateServerRequest &other)
    : OpsWorksCMRequest(new CreateServerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateServerRequest object.
 */
CreateServerRequest::CreateServerRequest()
    : OpsWorksCMRequest(new CreateServerRequestPrivate(OpsWorksCMRequest::CreateServerAction, this))
{

}

bool CreateServerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateServerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateServerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * CreateServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateServerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateServerRequestPrivate
 *
 * @brief  Private implementation for CreateServerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServerRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public CreateServerRequest instance.
 */
CreateServerRequestPrivate::CreateServerRequestPrivate(
    const OpsWorksCMRequest::Action action, CreateServerRequest * const q)
    : CreateServerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateServerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateServerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateServerRequest instance.
 */
CreateServerRequestPrivate::CreateServerRequestPrivate(
    const CreateServerRequestPrivate &other, CreateServerRequest * const q)
    : CreateServerPrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
