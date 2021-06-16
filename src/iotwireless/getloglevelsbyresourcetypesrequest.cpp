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

#include "getloglevelsbyresourcetypesrequest.h"
#include "getloglevelsbyresourcetypesrequest_p.h"
#include "getloglevelsbyresourcetypesresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesRequest
 * \brief The GetLogLevelsByResourceTypesRequest class provides an interface for IoTWireless GetLogLevelsByResourceTypes requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getLogLevelsByResourceTypes
 */

/*!
 * Constructs a copy of \a other.
 */
GetLogLevelsByResourceTypesRequest::GetLogLevelsByResourceTypesRequest(const GetLogLevelsByResourceTypesRequest &other)
    : IoTWirelessRequest(new GetLogLevelsByResourceTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLogLevelsByResourceTypesRequest object.
 */
GetLogLevelsByResourceTypesRequest::GetLogLevelsByResourceTypesRequest()
    : IoTWirelessRequest(new GetLogLevelsByResourceTypesRequestPrivate(IoTWirelessRequest::GetLogLevelsByResourceTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetLogLevelsByResourceTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLogLevelsByResourceTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLogLevelsByResourceTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetLogLevelsByResourceTypesResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesRequestPrivate
 * \brief The GetLogLevelsByResourceTypesRequestPrivate class provides private implementation for GetLogLevelsByResourceTypesRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetLogLevelsByResourceTypesRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
GetLogLevelsByResourceTypesRequestPrivate::GetLogLevelsByResourceTypesRequestPrivate(
    const IoTWirelessRequest::Action action, GetLogLevelsByResourceTypesRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLogLevelsByResourceTypesRequest
 * class' copy constructor.
 */
GetLogLevelsByResourceTypesRequestPrivate::GetLogLevelsByResourceTypesRequestPrivate(
    const GetLogLevelsByResourceTypesRequestPrivate &other, GetLogLevelsByResourceTypesRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
