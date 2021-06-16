/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getresourceloglevelrequest.h"
#include "getresourceloglevelrequest_p.h"
#include "getresourceloglevelresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelRequest
 * \brief The GetResourceLogLevelRequest class provides an interface for IoTWireless GetResourceLogLevel requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getResourceLogLevel
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourceLogLevelRequest::GetResourceLogLevelRequest(const GetResourceLogLevelRequest &other)
    : IoTWirelessRequest(new GetResourceLogLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourceLogLevelRequest object.
 */
GetResourceLogLevelRequest::GetResourceLogLevelRequest()
    : IoTWirelessRequest(new GetResourceLogLevelRequestPrivate(IoTWirelessRequest::GetResourceLogLevelAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourceLogLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourceLogLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceLogLevelRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceLogLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetResourceLogLevelRequestPrivate
 * \brief The GetResourceLogLevelRequestPrivate class provides private implementation for GetResourceLogLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetResourceLogLevelRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetResourceLogLevelRequestPrivate::GetResourceLogLevelRequestPrivate(
    const IoTWirelessRequest::Action action, GetResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourceLogLevelRequest
 * class' copy constructor.
 */
GetResourceLogLevelRequestPrivate::GetResourceLogLevelRequestPrivate(
    const GetResourceLogLevelRequestPrivate &other, GetResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
