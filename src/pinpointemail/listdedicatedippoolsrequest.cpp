/*
    Copyright 2013-2018 Paul Colby

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

#include "listdedicatedippoolsrequest.h"
#include "listdedicatedippoolsrequest_p.h"
#include "listdedicatedippoolsresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::ListDedicatedIpPoolsRequest
 * \brief The ListDedicatedIpPoolsRequest class provides an interface for PinpointEmail ListDedicatedIpPools requests.
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
 * \sa PinpointEmailClient::listDedicatedIpPools
 */

/*!
 * Constructs a copy of \a other.
 */
ListDedicatedIpPoolsRequest::ListDedicatedIpPoolsRequest(const ListDedicatedIpPoolsRequest &other)
    : PinpointEmailRequest(new ListDedicatedIpPoolsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDedicatedIpPoolsRequest object.
 */
ListDedicatedIpPoolsRequest::ListDedicatedIpPoolsRequest()
    : PinpointEmailRequest(new ListDedicatedIpPoolsRequestPrivate(PinpointEmailRequest::ListDedicatedIpPoolsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDedicatedIpPoolsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDedicatedIpPoolsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDedicatedIpPoolsRequest::response(QNetworkReply * const reply) const
{
    return new ListDedicatedIpPoolsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::ListDedicatedIpPoolsRequestPrivate
 * \brief The ListDedicatedIpPoolsRequestPrivate class provides private implementation for ListDedicatedIpPoolsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a ListDedicatedIpPoolsRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
ListDedicatedIpPoolsRequestPrivate::ListDedicatedIpPoolsRequestPrivate(
    const PinpointEmailRequest::Action action, ListDedicatedIpPoolsRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDedicatedIpPoolsRequest
 * class' copy constructor.
 */
ListDedicatedIpPoolsRequestPrivate::ListDedicatedIpPoolsRequestPrivate(
    const ListDedicatedIpPoolsRequestPrivate &other, ListDedicatedIpPoolsRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
