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

#include "getdevicerequest.h"
#include "getdevicerequest_p.h"
#include "getdeviceresponse.h"
#include "braketrequest_p.h"

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::GetDeviceRequest
 * \brief The GetDeviceRequest class provides an interface for Braket GetDevice requests.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 *
 * \sa BraketClient::getDevice
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeviceRequest::GetDeviceRequest(const GetDeviceRequest &other)
    : BraketRequest(new GetDeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeviceRequest object.
 */
GetDeviceRequest::GetDeviceRequest()
    : BraketRequest(new GetDeviceRequestPrivate(BraketRequest::GetDeviceAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Braket::GetDeviceRequestPrivate
 * \brief The GetDeviceRequestPrivate class provides private implementation for GetDeviceRequest.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a GetDeviceRequestPrivate object for Braket \a action,
 * with public implementation \a q.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const BraketRequest::Action action, GetDeviceRequest * const q)
    : BraketRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceRequest
 * class' copy constructor.
 */
GetDeviceRequestPrivate::GetDeviceRequestPrivate(
    const GetDeviceRequestPrivate &other, GetDeviceRequest * const q)
    : BraketRequestPrivate(other, q)
{

}

} // namespace Braket
} // namespace QtAws
