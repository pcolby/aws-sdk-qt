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

#include "startdevicesyncrequest.h"
#include "startdevicesyncrequest_p.h"
#include "startdevicesyncresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  StartDeviceSyncRequest
 *
 * @brief  Implements AlexaForBusiness StartDeviceSync requests.
 *
 * @see    AlexaForBusinessClient::startDeviceSync
 */

/**
 * @brief  Constructs a new StartDeviceSyncRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartDeviceSyncRequest::StartDeviceSyncRequest(const StartDeviceSyncRequest &other)
    : AlexaForBusinessRequest(new StartDeviceSyncRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartDeviceSyncRequest object.
 */
StartDeviceSyncRequest::StartDeviceSyncRequest()
    : AlexaForBusinessRequest(new StartDeviceSyncRequestPrivate(AlexaForBusinessRequest::StartDeviceSyncAction, this))
{

}

bool StartDeviceSyncRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartDeviceSyncResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartDeviceSyncResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AlexaForBusinessClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDeviceSyncRequest::response(QNetworkReply * const reply) const
{
    return new StartDeviceSyncResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartDeviceSyncRequestPrivate
 *
 * @brief  Private implementation for StartDeviceSyncRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDeviceSyncRequestPrivate object.
 *
 * @param  action  AlexaForBusiness action being performed.
 * @param  q       Pointer to this object's public StartDeviceSyncRequest instance.
 */
StartDeviceSyncRequestPrivate::StartDeviceSyncRequestPrivate(
    const AlexaForBusinessRequest::Action action, StartDeviceSyncRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartDeviceSyncRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartDeviceSyncRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartDeviceSyncRequest instance.
 */
StartDeviceSyncRequestPrivate::StartDeviceSyncRequestPrivate(
    const StartDeviceSyncRequestPrivate &other, StartDeviceSyncRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
