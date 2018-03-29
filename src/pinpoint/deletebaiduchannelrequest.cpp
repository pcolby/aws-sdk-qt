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

#include "deletebaiduchannelrequest.h"
#include "deletebaiduchannelrequest_p.h"
#include "deletebaiduchannelresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  DeleteBaiduChannelRequest
 *
 * @brief  Implements Pinpoint DeleteBaiduChannel requests.
 *
 * @see    PinpointClient::deleteBaiduChannel
 */

/**
 * @brief  Constructs a new DeleteBaiduChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest(const DeleteBaiduChannelRequest &other)
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBaiduChannelRequest object.
 */
DeleteBaiduChannelRequest::DeleteBaiduChannelRequest()
    : PinpointRequest(new DeleteBaiduChannelRequestPrivate(PinpointRequest::DeleteBaiduChannelAction, this))
{

}

bool DeleteBaiduChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBaiduChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBaiduChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteBaiduChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBaiduChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBaiduChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteBaiduChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBaiduChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteBaiduChannelRequest instance.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteBaiduChannelRequest * const q)
    : DeleteBaiduChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBaiduChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBaiduChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBaiduChannelRequest instance.
 */
DeleteBaiduChannelRequestPrivate::DeleteBaiduChannelRequestPrivate(
    const DeleteBaiduChannelRequestPrivate &other, DeleteBaiduChannelRequest * const q)
    : DeleteBaiduChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
