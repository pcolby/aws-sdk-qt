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

#include "getappsrequest.h"
#include "getappsrequest_p.h"
#include "getappsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetAppsRequest
 *
 * @brief  Implements Pinpoint GetApps requests.
 *
 * @see    PinpointClient::getApps
 */

/**
 * @brief  Constructs a new GetAppsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAppsRequest::GetAppsRequest(const GetAppsRequest &other)
    : PinpointRequest(new GetAppsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAppsRequest object.
 */
GetAppsRequest::GetAppsRequest()
    : PinpointRequest(new GetAppsRequestPrivate(PinpointRequest::GetAppsAction, this))
{

}

bool GetAppsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAppsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAppsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppsRequest::response(QNetworkReply * const reply) const
{
    return new GetAppsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAppsRequestPrivate
 *
 * @brief  Private implementation for GetAppsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAppsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetAppsRequest instance.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const PinpointRequest::Action action, GetAppsRequest * const q)
    : GetAppsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAppsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAppsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAppsRequest instance.
 */
GetAppsRequestPrivate::GetAppsRequestPrivate(
    const GetAppsRequestPrivate &other, GetAppsRequest * const q)
    : GetAppsPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
