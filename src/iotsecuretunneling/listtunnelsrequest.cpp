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

#include "listtunnelsrequest.h"
#include "listtunnelsrequest_p.h"
#include "listtunnelsresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsRequest
 * \brief The ListTunnelsRequest class provides an interface for IoTSecureTunneling ListTunnels requests.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>AWS IoT Secure Tunneling</fullname>
 * 
 *  AWS IoT Secure Tunnling enables you to create remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how AWS IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">AWS IoT Secure
 *
 * \sa IoTSecureTunnelingClient::listTunnels
 */

/*!
 * Constructs a copy of \a other.
 */
ListTunnelsRequest::ListTunnelsRequest(const ListTunnelsRequest &other)
    : IoTSecureTunnelingRequest(new ListTunnelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTunnelsRequest object.
 */
ListTunnelsRequest::ListTunnelsRequest()
    : IoTSecureTunnelingRequest(new ListTunnelsRequestPrivate(IoTSecureTunnelingRequest::ListTunnelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTunnelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTunnelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTunnelsRequest::response(QNetworkReply * const reply) const
{
    return new ListTunnelsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::ListTunnelsRequestPrivate
 * \brief The ListTunnelsRequestPrivate class provides private implementation for ListTunnelsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a ListTunnelsRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
ListTunnelsRequestPrivate::ListTunnelsRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, ListTunnelsRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTunnelsRequest
 * class' copy constructor.
 */
ListTunnelsRequestPrivate::ListTunnelsRequestPrivate(
    const ListTunnelsRequestPrivate &other, ListTunnelsRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
