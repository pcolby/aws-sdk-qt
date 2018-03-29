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

#include "deletelaunchconfigurationrequest.h"
#include "deletelaunchconfigurationrequest_p.h"
#include "deletelaunchconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DeleteLaunchConfigurationRequest
 *
 * @brief  Implements AutoScaling DeleteLaunchConfiguration requests.
 *
 * @see    AutoScalingClient::deleteLaunchConfiguration
 */

/**
 * @brief  Constructs a new DeleteLaunchConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest(const DeleteLaunchConfigurationRequest &other)
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLaunchConfigurationRequest object.
 */
DeleteLaunchConfigurationRequest::DeleteLaunchConfigurationRequest()
    : AutoScalingRequest(new DeleteLaunchConfigurationRequestPrivate(AutoScalingRequest::DeleteLaunchConfigurationAction, this))
{

}

bool DeleteLaunchConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLaunchConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLaunchConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * DeleteLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLaunchConfigurationRequestPrivate
 *
 * @brief  Private implementation for DeleteLaunchConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchConfigurationRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public DeleteLaunchConfigurationRequest instance.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLaunchConfigurationRequest * const q)
    : DeleteLaunchConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLaunchConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLaunchConfigurationRequest instance.
 */
DeleteLaunchConfigurationRequestPrivate::DeleteLaunchConfigurationRequestPrivate(
    const DeleteLaunchConfigurationRequestPrivate &other, DeleteLaunchConfigurationRequest * const q)
    : DeleteLaunchConfigurationPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
