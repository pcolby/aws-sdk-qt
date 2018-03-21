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

#include "associatenoderequest.h"
#include "associatenoderequest_p.h"
#include "associatenoderesponse.h"
#include "opsworkscmrequest_p.h"

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  AssociateNodeRequest
 *
 * @brief  Implements OpsWorksCM AssociateNode requests.
 *
 * @see    OpsWorksCMClient::associateNode
 */

/**
 * @brief  Constructs a new AssociateNodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateNodeResponse::AssociateNodeResponse(

/**
 * @brief  Constructs a new AssociateNodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateNodeRequest::AssociateNodeRequest(const AssociateNodeRequest &other)
    : OpsWorksCMRequest(new AssociateNodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateNodeRequest object.
 */
AssociateNodeRequest::AssociateNodeRequest()
    : OpsWorksCMRequest(new AssociateNodeRequestPrivate(OpsWorksCMRequest::AssociateNodeAction, this))
{

}

bool AssociateNodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateNodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateNodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * AssociateNodeRequest::response(QNetworkReply * const reply) const
{
    return new AssociateNodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateNodeRequestPrivate
 *
 * @brief  Private implementation for AssociateNodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateNodeRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public AssociateNodeRequest instance.
 */
AssociateNodeRequestPrivate::AssociateNodeRequestPrivate(
    const OpsWorksCMRequest::Action action, AssociateNodeRequest * const q)
    : AssociateNodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateNodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateNodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateNodeRequest instance.
 */
AssociateNodeRequestPrivate::AssociateNodeRequestPrivate(
    const AssociateNodeRequestPrivate &other, AssociateNodeRequest * const q)
    : AssociateNodePrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace AWS
