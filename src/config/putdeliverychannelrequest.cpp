/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putdeliverychannelrequest.h"
#include "putdeliverychannelrequest_p.h"
#include "putdeliverychannelresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  PutDeliveryChannelRequest
 *
 * @brief  Implements ConfigService PutDeliveryChannel requests.
 *
 * @see    ConfigServiceClient::putDeliveryChannel
 */

/**
 * @brief  Constructs a new PutDeliveryChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutDeliveryChannelResponse::PutDeliveryChannelResponse(

/**
 * @brief  Constructs a new PutDeliveryChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutDeliveryChannelRequest::PutDeliveryChannelRequest(const PutDeliveryChannelRequest &other)
    : ConfigServiceRequest(new PutDeliveryChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutDeliveryChannelRequest object.
 */
PutDeliveryChannelRequest::PutDeliveryChannelRequest()
    : ConfigServiceRequest(new PutDeliveryChannelRequestPrivate(ConfigServiceRequest::PutDeliveryChannelAction, this))
{

}

bool PutDeliveryChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutDeliveryChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutDeliveryChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * PutDeliveryChannelRequest::response(QNetworkReply * const reply) const
{
    return new PutDeliveryChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutDeliveryChannelRequestPrivate
 *
 * @brief  Private implementation for PutDeliveryChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutDeliveryChannelRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public PutDeliveryChannelRequest instance.
 */
PutDeliveryChannelRequestPrivate::PutDeliveryChannelRequestPrivate(
    const ConfigServiceRequest::Action action, PutDeliveryChannelRequest * const q)
    : PutDeliveryChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutDeliveryChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutDeliveryChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutDeliveryChannelRequest instance.
 */
PutDeliveryChannelRequestPrivate::PutDeliveryChannelRequestPrivate(
    const PutDeliveryChannelRequestPrivate &other, PutDeliveryChannelRequest * const q)
    : PutDeliveryChannelPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
