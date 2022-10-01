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

#include "describetunnelrequest.h"
#include "describetunnelrequest_p.h"
#include "describetunnelresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelRequest
 * \brief The DescribeTunnelRequest class provides an interface for IoTSecureTunneling DescribeTunnel requests.
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
 * \sa IoTSecureTunnelingClient::describeTunnel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTunnelRequest::DescribeTunnelRequest(const DescribeTunnelRequest &other)
    : IoTSecureTunnelingRequest(new DescribeTunnelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTunnelRequest object.
 */
DescribeTunnelRequest::DescribeTunnelRequest()
    : IoTSecureTunnelingRequest(new DescribeTunnelRequestPrivate(IoTSecureTunnelingRequest::DescribeTunnelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTunnelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTunnelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTunnelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTunnelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::DescribeTunnelRequestPrivate
 * \brief The DescribeTunnelRequestPrivate class provides private implementation for DescribeTunnelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a DescribeTunnelRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
DescribeTunnelRequestPrivate::DescribeTunnelRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, DescribeTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTunnelRequest
 * class' copy constructor.
 */
DescribeTunnelRequestPrivate::DescribeTunnelRequestPrivate(
    const DescribeTunnelRequestPrivate &other, DescribeTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
