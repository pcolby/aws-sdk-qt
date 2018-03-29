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

#include "updatebaiduchannelrequest.h"
#include "updatebaiduchannelrequest_p.h"
#include "updatebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  UpdateBaiduChannelRequest
 *
 * @brief  Implements Pinpoint UpdateBaiduChannel requests.
 *
 * @see    PinpointClient::updateBaiduChannel
 */

/**
 * @brief  Constructs a new UpdateBaiduChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest(const UpdateBaiduChannelRequest &other)
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateBaiduChannelRequest object.
 */
UpdateBaiduChannelRequest::UpdateBaiduChannelRequest()
    : PinpointRequest(new UpdateBaiduChannelRequestPrivate(PinpointRequest::UpdateBaiduChannelAction, this))
{

}

bool UpdateBaiduChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateBaiduChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateBaiduChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBaiduChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateBaiduChannelRequestPrivate
 *
 * @brief  Private implementation for UpdateBaiduChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBaiduChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public UpdateBaiduChannelRequest instance.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateBaiduChannelRequest * const q)
    : UpdateBaiduChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBaiduChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateBaiduChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateBaiduChannelRequest instance.
 */
UpdateBaiduChannelRequestPrivate::UpdateBaiduChannelRequestPrivate(
    const UpdateBaiduChannelRequestPrivate &other, UpdateBaiduChannelRequest * const q)
    : UpdateBaiduChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
