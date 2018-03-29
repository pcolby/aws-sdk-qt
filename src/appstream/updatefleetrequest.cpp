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

#include "updatefleetrequest.h"
#include "updatefleetrequest_p.h"
#include "updatefleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  UpdateFleetRequest
 *
 * @brief  Implements AppStream UpdateFleet requests.
 *
 * @see    AppStreamClient::updateFleet
 */

/**
 * @brief  Constructs a new UpdateFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateFleetRequest::UpdateFleetRequest(const UpdateFleetRequest &other)
    : AppStreamRequest(new UpdateFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateFleetRequest object.
 */
UpdateFleetRequest::UpdateFleetRequest()
    : AppStreamRequest(new UpdateFleetRequestPrivate(AppStreamRequest::UpdateFleetAction, this))
{

}

bool UpdateFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateFleetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * UpdateFleetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateFleetRequestPrivate
 *
 * @brief  Private implementation for UpdateFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public UpdateFleetRequest instance.
 */
UpdateFleetRequestPrivate::UpdateFleetRequestPrivate(
    const AppStreamRequest::Action action, UpdateFleetRequest * const q)
    : UpdateFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateFleetRequest instance.
 */
UpdateFleetRequestPrivate::UpdateFleetRequestPrivate(
    const UpdateFleetRequestPrivate &other, UpdateFleetRequest * const q)
    : UpdateFleetPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
