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

#include "getapplicationsettingsrequest.h"
#include "getapplicationsettingsrequest_p.h"
#include "getapplicationsettingsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApplicationSettingsRequest
 *
 * \brief The GetApplicationSettingsRequest class provides an interface for Pinpoint GetApplicationSettings requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getApplicationSettings
 */

/*!
 * @brief  Constructs a new GetApplicationSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetApplicationSettingsRequest::GetApplicationSettingsRequest(const GetApplicationSettingsRequest &other)
    : PinpointRequest(new GetApplicationSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetApplicationSettingsRequest object.
 */
GetApplicationSettingsRequest::GetApplicationSettingsRequest()
    : PinpointRequest(new GetApplicationSettingsRequestPrivate(PinpointRequest::GetApplicationSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationSettingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetApplicationSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetApplicationSettingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationSettingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetApplicationSettingsRequestPrivate
 *
 * @brief  Private implementation for GetApplicationSettingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetApplicationSettingsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetApplicationSettingsRequest instance.
 */
GetApplicationSettingsRequestPrivate::GetApplicationSettingsRequestPrivate(
    const PinpointRequest::Action action, GetApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetApplicationSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetApplicationSettingsRequest instance.
 */
GetApplicationSettingsRequestPrivate::GetApplicationSettingsRequestPrivate(
    const GetApplicationSettingsRequestPrivate &other, GetApplicationSettingsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
