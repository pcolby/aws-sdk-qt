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

#include "disassociatenoderequest.h"
#include "disassociatenoderequest_p.h"
#include "disassociatenoderesponse.h"
#include "opsworkscmrequest_p.h"

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  DisassociateNodeRequest
 *
 * @brief  Implements OpsWorksCM DisassociateNode requests.
 *
 * @see    OpsWorksCMClient::disassociateNode
 */

/**
 * @brief  Constructs a new DisassociateNodeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateNodeRequest::DisassociateNodeRequest(const DisassociateNodeRequest &other)
    : OpsWorksCMRequest(new DisassociateNodeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateNodeRequest object.
 */
DisassociateNodeRequest::DisassociateNodeRequest()
    : OpsWorksCMRequest(new DisassociateNodeRequestPrivate(OpsWorksCMRequest::DisassociateNodeAction, this))
{

}

bool DisassociateNodeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateNodeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateNodeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksCMClient::send
 */
AwsAbstractResponse * DisassociateNodeRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateNodeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateNodeRequestPrivate
 *
 * @brief  Private implementation for DisassociateNodeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateNodeRequestPrivate object.
 *
 * @param  action  OpsWorksCM action being performed.
 * @param  q       Pointer to this object's public DisassociateNodeRequest instance.
 */
DisassociateNodeRequestPrivate::DisassociateNodeRequestPrivate(
    const OpsWorksCMRequest::Action action, DisassociateNodeRequest * const q)
    : DisassociateNodePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateNodeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateNodeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateNodeRequest instance.
 */
DisassociateNodeRequestPrivate::DisassociateNodeRequestPrivate(
    const DisassociateNodeRequestPrivate &other, DisassociateNodeRequest * const q)
    : DisassociateNodePrivate(other, q)
{

}

} // namespace OpsWorksCM
} // namespace QtAws
