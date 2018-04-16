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

#include "getendpointrequest.h"
#include "getendpointrequest_p.h"
#include "getendpointresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEndpointRequest
 *
 * \brief The GetEndpointRequest class encapsulates Pinpoint GetEndpoint requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getEndpoint
 */

/*!
 * @brief  Constructs a new GetEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEndpointRequest::GetEndpointRequest(const GetEndpointRequest &other)
    : PinpointRequest(new GetEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetEndpointRequest object.
 */
GetEndpointRequest::GetEndpointRequest()
    : PinpointRequest(new GetEndpointRequestPrivate(PinpointRequest::GetEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetEndpointRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetEndpointRequestPrivate
 *
 * @brief  Private implementation for GetEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetEndpointRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetEndpointRequest instance.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const PinpointRequest::Action action, GetEndpointRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEndpointRequest instance.
 */
GetEndpointRequestPrivate::GetEndpointRequestPrivate(
    const GetEndpointRequestPrivate &other, GetEndpointRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
