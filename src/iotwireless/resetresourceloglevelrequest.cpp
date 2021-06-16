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

#include "resetresourceloglevelrequest.h"
#include "resetresourceloglevelrequest_p.h"
#include "resetresourceloglevelresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelRequest
 * \brief The ResetResourceLogLevelRequest class provides an interface for IoTWireless ResetResourceLogLevel requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::resetResourceLogLevel
 */

/*!
 * Constructs a copy of \a other.
 */
ResetResourceLogLevelRequest::ResetResourceLogLevelRequest(const ResetResourceLogLevelRequest &other)
    : IoTWirelessRequest(new ResetResourceLogLevelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetResourceLogLevelRequest object.
 */
ResetResourceLogLevelRequest::ResetResourceLogLevelRequest()
    : IoTWirelessRequest(new ResetResourceLogLevelRequestPrivate(IoTWirelessRequest::ResetResourceLogLevelAction, this))
{

}

/*!
 * \reimp
 */
bool ResetResourceLogLevelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetResourceLogLevelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetResourceLogLevelRequest::response(QNetworkReply * const reply) const
{
    return new ResetResourceLogLevelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelRequestPrivate
 * \brief The ResetResourceLogLevelRequestPrivate class provides private implementation for ResetResourceLogLevelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetResourceLogLevelRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ResetResourceLogLevelRequestPrivate::ResetResourceLogLevelRequestPrivate(
    const IoTWirelessRequest::Action action, ResetResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetResourceLogLevelRequest
 * class' copy constructor.
 */
ResetResourceLogLevelRequestPrivate::ResetResourceLogLevelRequestPrivate(
    const ResetResourceLogLevelRequestPrivate &other, ResetResourceLogLevelRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
