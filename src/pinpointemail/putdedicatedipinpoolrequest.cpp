/*
    Copyright 2013-2019 Paul Colby

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

#include "putdedicatedipinpoolrequest.h"
#include "putdedicatedipinpoolrequest_p.h"
#include "putdedicatedipinpoolresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PutDedicatedIpInPoolRequest
 * \brief The PutDedicatedIpInPoolRequest class provides an interface for PinpointEmail PutDedicatedIpInPool requests.
 *
 * \inmodule QtAwsPinpointEmail
 *
 *  <fullname>Amazon Pinpoint Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/pinpoint">Amazon Pinpoint</a> Email
 *  API, version 1.0. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/pinpoint/latest/developerguide/welcome.html">Amazon Pinpoint Developer
 * 
 *  Guide</a>>
 * 
 *  The Amazon Pinpoint Email API is available in the US East (N. Virginia), US West (Oregon) and the EU (Ireland) Regions
 *  at the following
 * 
 *  endpoints> <ul> <li>
 * 
 *  <b>US East (N. Virginia)</b>: <code>email.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>US West (Oregon)</b>: <code>email.us-west-2.amazonaws.com</code>
 * 
 *  </p </li> <li>
 * 
 *  <b>EU (Ireland)</b>: <code>email.eu-west-1.amazonaws.com</code>
 *
 * \sa PinpointEmailClient::putDedicatedIpInPool
 */

/*!
 * Constructs a copy of \a other.
 */
PutDedicatedIpInPoolRequest::PutDedicatedIpInPoolRequest(const PutDedicatedIpInPoolRequest &other)
    : PinpointEmailRequest(new PutDedicatedIpInPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDedicatedIpInPoolRequest object.
 */
PutDedicatedIpInPoolRequest::PutDedicatedIpInPoolRequest()
    : PinpointEmailRequest(new PutDedicatedIpInPoolRequestPrivate(PinpointEmailRequest::PutDedicatedIpInPoolAction, this))
{

}

/*!
 * \reimp
 */
bool PutDedicatedIpInPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDedicatedIpInPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDedicatedIpInPoolRequest::response(QNetworkReply * const reply) const
{
    return new PutDedicatedIpInPoolResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::PutDedicatedIpInPoolRequestPrivate
 * \brief The PutDedicatedIpInPoolRequestPrivate class provides private implementation for PutDedicatedIpInPoolRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PutDedicatedIpInPoolRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
PutDedicatedIpInPoolRequestPrivate::PutDedicatedIpInPoolRequestPrivate(
    const PinpointEmailRequest::Action action, PutDedicatedIpInPoolRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDedicatedIpInPoolRequest
 * class' copy constructor.
 */
PutDedicatedIpInPoolRequestPrivate::PutDedicatedIpInPoolRequestPrivate(
    const PutDedicatedIpInPoolRequestPrivate &other, PutDedicatedIpInPoolRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
