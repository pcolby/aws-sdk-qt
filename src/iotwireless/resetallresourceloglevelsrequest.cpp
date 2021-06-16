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

#include "resetallresourceloglevelsrequest.h"
#include "resetallresourceloglevelsrequest_p.h"
#include "resetallresourceloglevelsresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsRequest
 * \brief The ResetAllResourceLogLevelsRequest class provides an interface for IoTWireless ResetAllResourceLogLevels requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::resetAllResourceLogLevels
 */

/*!
 * Constructs a copy of \a other.
 */
ResetAllResourceLogLevelsRequest::ResetAllResourceLogLevelsRequest(const ResetAllResourceLogLevelsRequest &other)
    : IoTWirelessRequest(new ResetAllResourceLogLevelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResetAllResourceLogLevelsRequest object.
 */
ResetAllResourceLogLevelsRequest::ResetAllResourceLogLevelsRequest()
    : IoTWirelessRequest(new ResetAllResourceLogLevelsRequestPrivate(IoTWirelessRequest::ResetAllResourceLogLevelsAction, this))
{

}

/*!
 * \reimp
 */
bool ResetAllResourceLogLevelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResetAllResourceLogLevelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResetAllResourceLogLevelsRequest::response(QNetworkReply * const reply) const
{
    return new ResetAllResourceLogLevelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsRequestPrivate
 * \brief The ResetAllResourceLogLevelsRequestPrivate class provides private implementation for ResetAllResourceLogLevelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetAllResourceLogLevelsRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
ResetAllResourceLogLevelsRequestPrivate::ResetAllResourceLogLevelsRequestPrivate(
    const IoTWirelessRequest::Action action, ResetAllResourceLogLevelsRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResetAllResourceLogLevelsRequest
 * class' copy constructor.
 */
ResetAllResourceLogLevelsRequestPrivate::ResetAllResourceLogLevelsRequestPrivate(
    const ResetAllResourceLogLevelsRequestPrivate &other, ResetAllResourceLogLevelsRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
