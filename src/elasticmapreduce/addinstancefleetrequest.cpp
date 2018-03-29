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

#include "addinstancefleetrequest.h"
#include "addinstancefleetrequest_p.h"
#include "addinstancefleetresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  AddInstanceFleetRequest
 *
 * @brief  Implements EMR AddInstanceFleet requests.
 *
 * @see    EMRClient::addInstanceFleet
 */

/**
 * @brief  Constructs a new AddInstanceFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest(const AddInstanceFleetRequest &other)
    : EMRRequest(new AddInstanceFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddInstanceFleetRequest object.
 */
AddInstanceFleetRequest::AddInstanceFleetRequest()
    : EMRRequest(new AddInstanceFleetRequestPrivate(EMRRequest::AddInstanceFleetAction, this))
{

}

bool AddInstanceFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddInstanceFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddInstanceFleetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * AddInstanceFleetRequest::response(QNetworkReply * const reply) const
{
    return new AddInstanceFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddInstanceFleetRequestPrivate
 *
 * @brief  Private implementation for AddInstanceFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceFleetRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public AddInstanceFleetRequest instance.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const EMRRequest::Action action, AddInstanceFleetRequest * const q)
    : AddInstanceFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddInstanceFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddInstanceFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddInstanceFleetRequest instance.
 */
AddInstanceFleetRequestPrivate::AddInstanceFleetRequestPrivate(
    const AddInstanceFleetRequestPrivate &other, AddInstanceFleetRequest * const q)
    : AddInstanceFleetPrivate(other, q)
{

}

} // namespace EMR
} // namespace AWS
