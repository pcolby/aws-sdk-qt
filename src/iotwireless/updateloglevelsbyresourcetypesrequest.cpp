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

#include "updateloglevelsbyresourcetypesrequest.h"
#include "updateloglevelsbyresourcetypesrequest_p.h"
#include "updateloglevelsbyresourcetypesresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateLogLevelsByResourceTypesRequest
 * \brief The UpdateLogLevelsByResourceTypesRequest class provides an interface for IoTWireless UpdateLogLevelsByResourceTypes requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updateLogLevelsByResourceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLogLevelsByResourceTypesRequest::UpdateLogLevelsByResourceTypesRequest(const UpdateLogLevelsByResourceTypesRequest &other)
    : IoTWirelessRequest(new UpdateLogLevelsByResourceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLogLevelsByResourceTypesRequest object.
 */
UpdateLogLevelsByResourceTypesRequest::UpdateLogLevelsByResourceTypesRequest()
    : IoTWirelessRequest(new UpdateLogLevelsByResourceTypesRequestPrivate(IoTWirelessRequest::UpdateLogLevelsByResourceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLogLevelsByResourceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLogLevelsByResourceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLogLevelsByResourceTypesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLogLevelsByResourceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::UpdateLogLevelsByResourceTypesRequestPrivate
 * \brief The UpdateLogLevelsByResourceTypesRequestPrivate class provides private implementation for UpdateLogLevelsByResourceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateLogLevelsByResourceTypesRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
UpdateLogLevelsByResourceTypesRequestPrivate::UpdateLogLevelsByResourceTypesRequestPrivate(
    const IoTWirelessRequest::Action action, UpdateLogLevelsByResourceTypesRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLogLevelsByResourceTypesRequest
 * class' copy constructor.
 */
UpdateLogLevelsByResourceTypesRequestPrivate::UpdateLogLevelsByResourceTypesRequestPrivate(
    const UpdateLogLevelsByResourceTypesRequestPrivate &other, UpdateLogLevelsByResourceTypesRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
