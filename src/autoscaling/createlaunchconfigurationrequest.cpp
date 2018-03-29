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

#include "createlaunchconfigurationrequest.h"
#include "createlaunchconfigurationrequest_p.h"
#include "createlaunchconfigurationresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  CreateLaunchConfigurationRequest
 *
 * @brief  Implements AutoScaling CreateLaunchConfiguration requests.
 *
 * @see    AutoScalingClient::createLaunchConfiguration
 */

/**
 * @brief  Constructs a new CreateLaunchConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest(const CreateLaunchConfigurationRequest &other)
    : AutoScalingRequest(new CreateLaunchConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLaunchConfigurationRequest object.
 */
CreateLaunchConfigurationRequest::CreateLaunchConfigurationRequest()
    : AutoScalingRequest(new CreateLaunchConfigurationRequestPrivate(AutoScalingRequest::CreateLaunchConfigurationAction, this))
{

}

bool CreateLaunchConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLaunchConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLaunchConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLaunchConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLaunchConfigurationRequestPrivate
 *
 * @brief  Private implementation for CreateLaunchConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchConfigurationRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public CreateLaunchConfigurationRequest instance.
 */
CreateLaunchConfigurationRequestPrivate::CreateLaunchConfigurationRequestPrivate(
    const AutoScalingRequest::Action action, CreateLaunchConfigurationRequest * const q)
    : CreateLaunchConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLaunchConfigurationRequest instance.
 */
CreateLaunchConfigurationRequestPrivate::CreateLaunchConfigurationRequestPrivate(
    const CreateLaunchConfigurationRequestPrivate &other, CreateLaunchConfigurationRequest * const q)
    : CreateLaunchConfigurationPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
