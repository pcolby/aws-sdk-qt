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

#include "deleteserviceprofilerequest.h"
#include "deleteserviceprofilerequest_p.h"
#include "deleteserviceprofileresponse.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileRequest
 * \brief The DeleteServiceProfileRequest class provides an interface for IoTWireless DeleteServiceProfile requests.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteServiceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceProfileRequest::DeleteServiceProfileRequest(const DeleteServiceProfileRequest &other)
    : IoTWirelessRequest(new DeleteServiceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceProfileRequest object.
 */
DeleteServiceProfileRequest::DeleteServiceProfileRequest()
    : IoTWirelessRequest(new DeleteServiceProfileRequestPrivate(IoTWirelessRequest::DeleteServiceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::IoTWireless::DeleteServiceProfileRequestPrivate
 * \brief The DeleteServiceProfileRequestPrivate class provides private implementation for DeleteServiceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteServiceProfileRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
DeleteServiceProfileRequestPrivate::DeleteServiceProfileRequestPrivate(
    const IoTWirelessRequest::Action action, DeleteServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceProfileRequest
 * class' copy constructor.
 */
DeleteServiceProfileRequestPrivate::DeleteServiceProfileRequestPrivate(
    const DeleteServiceProfileRequestPrivate &other, DeleteServiceProfileRequest * const q)
    : IoTWirelessRequestPrivate(other, q)
{

}

} // namespace IoTWireless
} // namespace QtAws
