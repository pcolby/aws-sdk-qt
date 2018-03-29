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

#include "stopfleetrequest.h"
#include "stopfleetrequest_p.h"
#include "stopfleetresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  StopFleetRequest
 *
 * @brief  Implements AppStream StopFleet requests.
 *
 * @see    AppStreamClient::stopFleet
 */

/**
 * @brief  Constructs a new StopFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopFleetRequest::StopFleetRequest(const StopFleetRequest &other)
    : AppStreamRequest(new StopFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopFleetRequest object.
 */
StopFleetRequest::StopFleetRequest()
    : AppStreamRequest(new StopFleetRequestPrivate(AppStreamRequest::StopFleetAction, this))
{

}

bool StopFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopFleetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * StopFleetRequest::response(QNetworkReply * const reply) const
{
    return new StopFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopFleetRequestPrivate
 *
 * @brief  Private implementation for StopFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopFleetRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public StopFleetRequest instance.
 */
StopFleetRequestPrivate::StopFleetRequestPrivate(
    const AppStreamRequest::Action action, StopFleetRequest * const q)
    : StopFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopFleetRequest instance.
 */
StopFleetRequestPrivate::StopFleetRequestPrivate(
    const StopFleetRequestPrivate &other, StopFleetRequest * const q)
    : StopFleetPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
