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

#include "deletedeliverychannelrequest.h"
#include "deletedeliverychannelrequest_p.h"
#include "deletedeliverychannelresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteDeliveryChannelRequest
 *
 * @brief  Implements ConfigService DeleteDeliveryChannel requests.
 *
 * @see    ConfigServiceClient::deleteDeliveryChannel
 */

/**
 * @brief  Constructs a new DeleteDeliveryChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDeliveryChannelRequest::DeleteDeliveryChannelRequest(const DeleteDeliveryChannelRequest &other)
    : ConfigServiceRequest(new DeleteDeliveryChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDeliveryChannelRequest object.
 */
DeleteDeliveryChannelRequest::DeleteDeliveryChannelRequest()
    : ConfigServiceRequest(new DeleteDeliveryChannelRequestPrivate(ConfigServiceRequest::DeleteDeliveryChannelAction, this))
{

}

bool DeleteDeliveryChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDeliveryChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDeliveryChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeliveryChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeliveryChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDeliveryChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteDeliveryChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryChannelRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeleteDeliveryChannelRequest instance.
 */
DeleteDeliveryChannelRequestPrivate::DeleteDeliveryChannelRequestPrivate(
    const ConfigServiceRequest::Action action, DeleteDeliveryChannelRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeliveryChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeliveryChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDeliveryChannelRequest instance.
 */
DeleteDeliveryChannelRequestPrivate::DeleteDeliveryChannelRequestPrivate(
    const DeleteDeliveryChannelRequestPrivate &other, DeleteDeliveryChannelRequest * const q)
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
