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

#include "rotatetunnelaccesstokenrequest.h"
#include "rotatetunnelaccesstokenrequest_p.h"
#include "rotatetunnelaccesstokenresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::RotateTunnelAccessTokenRequest
 * \brief The RotateTunnelAccessTokenRequest class provides an interface for IoTSecureTunneling RotateTunnelAccessToken requests.
 *
 * \inmodule QtAwsIoTSecureTunneling
 *
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
 *
 * \sa IoTSecureTunnelingClient::rotateTunnelAccessToken
 */

/*!
 * Constructs a copy of \a other.
 */
RotateTunnelAccessTokenRequest::RotateTunnelAccessTokenRequest(const RotateTunnelAccessTokenRequest &other)
    : IoTSecureTunnelingRequest(new RotateTunnelAccessTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RotateTunnelAccessTokenRequest object.
 */
RotateTunnelAccessTokenRequest::RotateTunnelAccessTokenRequest()
    : IoTSecureTunnelingRequest(new RotateTunnelAccessTokenRequestPrivate(IoTSecureTunnelingRequest::RotateTunnelAccessTokenAction, this))
{

}

/*!
 * \reimp
 */
bool RotateTunnelAccessTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RotateTunnelAccessTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RotateTunnelAccessTokenRequest::response(QNetworkReply * const reply) const
{
    return new RotateTunnelAccessTokenResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::RotateTunnelAccessTokenRequestPrivate
 * \brief The RotateTunnelAccessTokenRequestPrivate class provides private implementation for RotateTunnelAccessTokenRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a RotateTunnelAccessTokenRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
RotateTunnelAccessTokenRequestPrivate::RotateTunnelAccessTokenRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, RotateTunnelAccessTokenRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RotateTunnelAccessTokenRequest
 * class' copy constructor.
 */
RotateTunnelAccessTokenRequestPrivate::RotateTunnelAccessTokenRequestPrivate(
    const RotateTunnelAccessTokenRequestPrivate &other, RotateTunnelAccessTokenRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
