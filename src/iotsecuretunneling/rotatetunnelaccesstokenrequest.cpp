// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
