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

#include "opentunnelrequest.h"
#include "opentunnelrequest_p.h"
#include "opentunnelresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::OpenTunnelRequest
 * \brief The OpenTunnelRequest class provides an interface for IoTSecureTunneling OpenTunnel requests.
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
 * \sa IoTSecureTunnelingClient::openTunnel
 */

/*!
 * Constructs a copy of \a other.
 */
OpenTunnelRequest::OpenTunnelRequest(const OpenTunnelRequest &other)
    : IoTSecureTunnelingRequest(new OpenTunnelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a OpenTunnelRequest object.
 */
OpenTunnelRequest::OpenTunnelRequest()
    : IoTSecureTunnelingRequest(new OpenTunnelRequestPrivate(IoTSecureTunnelingRequest::OpenTunnelAction, this))
{

}

/*!
 * \reimp
 */
bool OpenTunnelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a OpenTunnelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * OpenTunnelRequest::response(QNetworkReply * const reply) const
{
    return new OpenTunnelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::OpenTunnelRequestPrivate
 * \brief The OpenTunnelRequestPrivate class provides private implementation for OpenTunnelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a OpenTunnelRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
OpenTunnelRequestPrivate::OpenTunnelRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, OpenTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the OpenTunnelRequest
 * class' copy constructor.
 */
OpenTunnelRequestPrivate::OpenTunnelRequestPrivate(
    const OpenTunnelRequestPrivate &other, OpenTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
