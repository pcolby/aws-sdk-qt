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

#include "disassociatefleetrequest.h"
#include "disassociatefleetrequest_p.h"
#include "disassociatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  DisassociateFleetRequest
 *
 * @brief  Implements AppStream DisassociateFleet requests.
 *
 * @see    AppStreamClient::disassociateFleet
 */

/**
 * @brief  Constructs a new DisassociateFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateFleetRequest::DisassociateFleetRequest(const DisassociateFleetRequest &other)
    : AppStreamRequest(new DisassociateFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateFleetRequest object.
 */
DisassociateFleetRequest::DisassociateFleetRequest()
    : AppStreamRequest(new DisassociateFleetRequestPrivate(AppStreamRequest::DisassociateFleetAction, this))
{

}

bool DisassociateFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateFleetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * DisassociateFleetRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateFleetRequestPrivate
 *
 * @brief  Private implementation for DisassociateFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFleetRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public DisassociateFleetRequest instance.
 */
DisassociateFleetRequestPrivate::DisassociateFleetRequestPrivate(
    const AppStreamRequest::Action action, DisassociateFleetRequest * const q)
    : DisassociateFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateFleetRequest instance.
 */
DisassociateFleetRequestPrivate::DisassociateFleetRequestPrivate(
    const DisassociateFleetRequestPrivate &other, DisassociateFleetRequest * const q)
    : DisassociateFleetPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
