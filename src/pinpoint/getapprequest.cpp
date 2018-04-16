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

#include "getapprequest.h"
#include "getapprequest_p.h"
#include "getappresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAppRequest
 *
 * \brief The GetAppRequest class encapsulates Pinpoint GetApp requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getApp
 */

/*!
 * @brief  Constructs a new GetAppRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAppRequest::GetAppRequest(const GetAppRequest &other)
    : PinpointRequest(new GetAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetAppRequest object.
 */
GetAppRequest::GetAppRequest()
    : PinpointRequest(new GetAppRequestPrivate(PinpointRequest::GetAppAction, this))
{

}

/*!
 * \reimp
 */
bool GetAppRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetAppResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAppResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAppRequest::response(QNetworkReply * const reply) const
{
    return new GetAppResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetAppRequestPrivate
 *
 * @brief  Private implementation for GetAppRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAppRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetAppRequest instance.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const PinpointRequest::Action action, GetAppRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetAppRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAppRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAppRequest instance.
 */
GetAppRequestPrivate::GetAppRequestPrivate(
    const GetAppRequestPrivate &other, GetAppRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
