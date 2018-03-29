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

#include "deleteadmchannelrequest.h"
#include "deleteadmchannelrequest_p.h"
#include "deleteadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  DeleteAdmChannelRequest
 *
 * @brief  Implements Pinpoint DeleteAdmChannel requests.
 *
 * @see    PinpointClient::deleteAdmChannel
 */

/**
 * @brief  Constructs a new DeleteAdmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest(const DeleteAdmChannelRequest &other)
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteAdmChannelRequest object.
 */
DeleteAdmChannelRequest::DeleteAdmChannelRequest()
    : PinpointRequest(new DeleteAdmChannelRequestPrivate(PinpointRequest::DeleteAdmChannelAction, this))
{

}

bool DeleteAdmChannelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteAdmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteAdmChannelResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * DeleteAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAdmChannelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteAdmChannelRequestPrivate
 *
 * @brief  Private implementation for DeleteAdmChannelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAdmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public DeleteAdmChannelRequest instance.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteAdmChannelRequest * const q)
    : DeleteAdmChannelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAdmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteAdmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteAdmChannelRequest instance.
 */
DeleteAdmChannelRequestPrivate::DeleteAdmChannelRequestPrivate(
    const DeleteAdmChannelRequestPrivate &other, DeleteAdmChannelRequest * const q)
    : DeleteAdmChannelPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
