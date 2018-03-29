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

#include "setv2logginglevelrequest.h"
#include "setv2logginglevelrequest_p.h"
#include "setv2logginglevelresponse.h"
#include "iotrequest_p.h"

namespace QtAws {
namespace IoT {

/**
 * @class  SetV2LoggingLevelRequest
 *
 * @brief  Implements IoT SetV2LoggingLevel requests.
 *
 * @see    IoTClient::setV2LoggingLevel
 */

/**
 * @brief  Constructs a new SetV2LoggingLevelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetV2LoggingLevelRequest::SetV2LoggingLevelRequest(const SetV2LoggingLevelRequest &other)
    : IoTRequest(new SetV2LoggingLevelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetV2LoggingLevelRequest object.
 */
SetV2LoggingLevelRequest::SetV2LoggingLevelRequest()
    : IoTRequest(new SetV2LoggingLevelRequestPrivate(IoTRequest::SetV2LoggingLevelAction, this))
{

}

bool SetV2LoggingLevelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetV2LoggingLevelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetV2LoggingLevelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IoTClient::send
 */
QtAws::Core::AwsAbstractResponse * SetV2LoggingLevelRequest::response(QNetworkReply * const reply) const
{
    return new SetV2LoggingLevelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetV2LoggingLevelRequestPrivate
 *
 * @brief  Private implementation for SetV2LoggingLevelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingLevelRequestPrivate object.
 *
 * @param  action  IoT action being performed.
 * @param  q       Pointer to this object's public SetV2LoggingLevelRequest instance.
 */
SetV2LoggingLevelRequestPrivate::SetV2LoggingLevelRequestPrivate(
    const IoTRequest::Action action, SetV2LoggingLevelRequest * const q)
    : SetV2LoggingLevelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetV2LoggingLevelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetV2LoggingLevelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetV2LoggingLevelRequest instance.
 */
SetV2LoggingLevelRequestPrivate::SetV2LoggingLevelRequestPrivate(
    const SetV2LoggingLevelRequestPrivate &other, SetV2LoggingLevelRequest * const q)
    : SetV2LoggingLevelPrivate(other, q)
{

}

} // namespace IoT
} // namespace QtAws
