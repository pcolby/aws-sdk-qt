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

#include "updateconfigurationrequest.h"
#include "updateconfigurationrequest_p.h"
#include "updateconfigurationresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/**
 * @class  UpdateConfigurationRequest
 *
 * @brief  Implements MQ UpdateConfiguration requests.
 *
 * @see    MQClient::updateConfiguration
 */

/**
 * @brief  Constructs a new UpdateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest(const UpdateConfigurationRequest &other)
    : MQRequest(new UpdateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateConfigurationRequest object.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest()
    : MQRequest(new UpdateConfigurationRequestPrivate(MQRequest::UpdateConfigurationAction, this))
{

}

bool UpdateConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateConfigurationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateConfigurationRequestPrivate
 *
 * @brief  Private implementation for UpdateConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public UpdateConfigurationRequest instance.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const MQRequest::Action action, UpdateConfigurationRequest * const q)
    : UpdateConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateConfigurationRequest instance.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const UpdateConfigurationRequestPrivate &other, UpdateConfigurationRequest * const q)
    : UpdateConfigurationPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
