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

#include "putnotificationconfigurationrequest.h"
#include "putnotificationconfigurationrequest_p.h"
#include "putnotificationconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  PutNotificationConfigurationRequest
 *
 * @brief  Implements AutoScaling PutNotificationConfiguration requests.
 *
 * @see    AutoScalingClient::putNotificationConfiguration
 */

/**
 * @brief  Constructs a new PutNotificationConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutNotificationConfigurationRequest::PutNotificationConfigurationRequest(const PutNotificationConfigurationRequest &other)
    : AutoScalingRequest(new PutNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutNotificationConfigurationRequest object.
 */
PutNotificationConfigurationRequest::PutNotificationConfigurationRequest()
    : AutoScalingRequest(new PutNotificationConfigurationRequestPrivate(AutoScalingRequest::PutNotificationConfigurationAction, this))
{

}

bool PutNotificationConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutNotificationConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutNotificationConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * PutNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutNotificationConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutNotificationConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutNotificationConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutNotificationConfigurationRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public PutNotificationConfigurationRequest instance.
 */
PutNotificationConfigurationRequestPrivate::PutNotificationConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, PutNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutNotificationConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutNotificationConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutNotificationConfigurationRequest instance.
 */
PutNotificationConfigurationRequestPrivate::PutNotificationConfigurationRequestPrivate(
    const PutNotificationConfigurationRequestPrivate &other, PutNotificationConfigurationRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
