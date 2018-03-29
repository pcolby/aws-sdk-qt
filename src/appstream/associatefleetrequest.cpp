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

#include "associatefleetrequest.h"
#include "associatefleetrequest_p.h"
#include "associatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  AssociateFleetRequest
 *
 * @brief  Implements AppStream AssociateFleet requests.
 *
 * @see    AppStreamClient::associateFleet
 */

/**
 * @brief  Constructs a new AssociateFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateFleetRequest::AssociateFleetRequest(const AssociateFleetRequest &other)
    : AppStreamRequest(new AssociateFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateFleetRequest object.
 */
AssociateFleetRequest::AssociateFleetRequest()
    : AppStreamRequest(new AssociateFleetRequestPrivate(AppStreamRequest::AssociateFleetAction, this))
{

}

bool AssociateFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateFleetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateFleetRequest::response(QNetworkReply * const reply) const
{
    return new AssociateFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateFleetRequestPrivate
 *
 * @brief  Private implementation for AssociateFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateFleetRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public AssociateFleetRequest instance.
 */
AssociateFleetRequestPrivate::AssociateFleetRequestPrivate(
    const AppStreamRequest::Action action, AssociateFleetRequest * const q)
    : AppStreamRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateFleetRequest instance.
 */
AssociateFleetRequestPrivate::AssociateFleetRequestPrivate(
    const AssociateFleetRequestPrivate &other, AssociateFleetRequest * const q)
    : AppStreamRequestPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
