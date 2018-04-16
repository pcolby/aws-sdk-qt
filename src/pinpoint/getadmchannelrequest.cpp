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

#include "getadmchannelrequest.h"
#include "getadmchannelrequest_p.h"
#include "getadmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAdmChannelRequest
 *
 * \brief The GetAdmChannelRequest class provides an interface for Pinpoint GetAdmChannel requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getAdmChannel
 */

/*!
 * @brief  Constructs a new GetAdmChannelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAdmChannelRequest::GetAdmChannelRequest(const GetAdmChannelRequest &other)
    : PinpointRequest(new GetAdmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetAdmChannelRequest object.
 */
GetAdmChannelRequest::GetAdmChannelRequest()
    : PinpointRequest(new GetAdmChannelRequestPrivate(PinpointRequest::GetAdmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetAdmChannelRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetAdmChannelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAdmChannelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAdmChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetAdmChannelResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetAdmChannelRequestPrivate
 *
 * @brief  Private implementation for GetAdmChannelRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAdmChannelRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetAdmChannelRequest instance.
 */
GetAdmChannelRequestPrivate::GetAdmChannelRequestPrivate(
    const PinpointRequest::Action action, GetAdmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetAdmChannelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAdmChannelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAdmChannelRequest instance.
 */
GetAdmChannelRequestPrivate::GetAdmChannelRequestPrivate(
    const GetAdmChannelRequestPrivate &other, GetAdmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
