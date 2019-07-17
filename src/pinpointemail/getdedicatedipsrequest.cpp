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

#include "getdedicatedipsrequest.h"
#include "getdedicatedipsrequest_p.h"
#include "getdedicatedipsresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetDedicatedIpsRequest
 * \brief The GetDedicatedIpsRequest class provides an interface for PinpointEmail GetDedicatedIps requests.
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
 * \sa PinpointEmailClient::getDedicatedIps
 */

/*!
 * Constructs a copy of \a other.
 */
GetDedicatedIpsRequest::GetDedicatedIpsRequest(const GetDedicatedIpsRequest &other)
    : PinpointEmailRequest(new GetDedicatedIpsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDedicatedIpsRequest object.
 */
GetDedicatedIpsRequest::GetDedicatedIpsRequest()
    : PinpointEmailRequest(new GetDedicatedIpsRequestPrivate(PinpointEmailRequest::GetDedicatedIpsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDedicatedIpsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDedicatedIpsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDedicatedIpsRequest::response(QNetworkReply * const reply) const
{
    return new GetDedicatedIpsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::GetDedicatedIpsRequestPrivate
 * \brief The GetDedicatedIpsRequestPrivate class provides private implementation for GetDedicatedIpsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetDedicatedIpsRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
GetDedicatedIpsRequestPrivate::GetDedicatedIpsRequestPrivate(
    const PinpointEmailRequest::Action action, GetDedicatedIpsRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDedicatedIpsRequest
 * class' copy constructor.
 */
GetDedicatedIpsRequestPrivate::GetDedicatedIpsRequestPrivate(
    const GetDedicatedIpsRequestPrivate &other, GetDedicatedIpsRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
