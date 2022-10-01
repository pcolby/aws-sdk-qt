// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "closetunnelrequest.h"
#include "closetunnelrequest_p.h"
#include "closetunnelresponse.h"
#include "iotsecuretunnelingrequest_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelRequest
 * \brief The CloseTunnelRequest class provides an interface for IoTSecureTunneling CloseTunnel requests.
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
 * \sa IoTSecureTunnelingClient::closeTunnel
 */

/*!
 * Constructs a copy of \a other.
 */
CloseTunnelRequest::CloseTunnelRequest(const CloseTunnelRequest &other)
    : IoTSecureTunnelingRequest(new CloseTunnelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CloseTunnelRequest object.
 */
CloseTunnelRequest::CloseTunnelRequest()
    : IoTSecureTunnelingRequest(new CloseTunnelRequestPrivate(IoTSecureTunnelingRequest::CloseTunnelAction, this))
{

}

/*!
 * \reimp
 */
bool CloseTunnelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CloseTunnelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CloseTunnelRequest::response(QNetworkReply * const reply) const
{
    return new CloseTunnelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSecureTunneling::CloseTunnelRequestPrivate
 * \brief The CloseTunnelRequestPrivate class provides private implementation for CloseTunnelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSecureTunneling
 */

/*!
 * Constructs a CloseTunnelRequestPrivate object for IoTSecureTunneling \a action,
 * with public implementation \a q.
 */
CloseTunnelRequestPrivate::CloseTunnelRequestPrivate(
    const IoTSecureTunnelingRequest::Action action, CloseTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CloseTunnelRequest
 * class' copy constructor.
 */
CloseTunnelRequestPrivate::CloseTunnelRequestPrivate(
    const CloseTunnelRequestPrivate &other, CloseTunnelRequest * const q)
    : IoTSecureTunnelingRequestPrivate(other, q)
{

}

} // namespace IoTSecureTunneling
} // namespace QtAws
