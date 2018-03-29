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

#include "startfleetrequest.h"
#include "startfleetrequest_p.h"
#include "startfleetresponse.h"
#include "appstreamrequest_p.h"

namespace QtAws {
namespace AppStream {

/**
 * @class  StartFleetRequest
 *
 * @brief  Implements AppStream StartFleet requests.
 *
 * @see    AppStreamClient::startFleet
 */

/**
 * @brief  Constructs a new StartFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartFleetRequest::StartFleetRequest(const StartFleetRequest &other)
    : AppStreamRequest(new StartFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartFleetRequest object.
 */
StartFleetRequest::StartFleetRequest()
    : AppStreamRequest(new StartFleetRequestPrivate(AppStreamRequest::StartFleetAction, this))
{

}

bool StartFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartFleetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFleetRequest::response(QNetworkReply * const reply) const
{
    return new StartFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartFleetRequestPrivate
 *
 * @brief  Private implementation for StartFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartFleetRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public StartFleetRequest instance.
 */
StartFleetRequestPrivate::StartFleetRequestPrivate(
    const AppStreamRequest::Action action, StartFleetRequest * const q)
    : StartFleetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartFleetRequest instance.
 */
StartFleetRequestPrivate::StartFleetRequestPrivate(
    const StartFleetRequestPrivate &other, StartFleetRequest * const q)
    : StartFleetPrivate(other, q)
{

}

} // namespace AppStream
} // namespace QtAws
