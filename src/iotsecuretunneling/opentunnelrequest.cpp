// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>IoT Secure Tunneling</fullname>
 * 
 *  IoT Secure Tunneling creates remote connections to devices deployed in the
 * 
 *  field>
 * 
 *  For more information about how IoT Secure Tunneling works, see <a
 *  href="https://docs.aws.amazon.com/iot/latest/developerguide/secure-tunneling.html">IoT Secure
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
