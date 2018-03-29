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

#include "deleteemailchannelrequest.h"
#include "deleteemailchannelrequest_p.h"
#include "deleteemailchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteEmailChannelRequest
 *
 * @brief  Implements Pinpoint DeleteEmailChannel requests.
 *
 * @see    PinpointClient::deleteEmailChannel
 */

/**
 * @brief  Constructs a new DeleteEmailChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest(const DeleteEmailChannelRequest &other)
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEmailChannelRequest object.
 */
DeleteEmailChannelRequest::DeleteEmailChannelRequest()
    : PinpointRequest(new DeleteEmailChannelRequestPrivate(PinpointRequest::DeleteEmailChannelAction, this))
{

}

bool DeleteEmailChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEmailChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEmailChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEmailChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteEmailChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEmailChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteEmailChannelRequest instance.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEmailChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEmailChannelRequest instance.
 */
DeleteEmailChannelRequestPrivate::DeleteEmailChannelRequestPrivate(
    const DeleteEmailChannelRequestPrivate &other, DeleteEmailChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
