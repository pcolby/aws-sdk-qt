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

#include "getblacklistreportsrequest.h"
#include "getblacklistreportsrequest_p.h"
#include "getblacklistreportsresponse.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::GetBlacklistReportsRequest
 * \brief The GetBlacklistReportsRequest class provides an interface for PinpointEmail GetBlacklistReports requests.
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
 * \sa PinpointEmailClient::getBlacklistReports
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlacklistReportsRequest::GetBlacklistReportsRequest(const GetBlacklistReportsRequest &other)
    : PinpointEmailRequest(new GetBlacklistReportsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlacklistReportsRequest object.
 */
GetBlacklistReportsRequest::GetBlacklistReportsRequest()
    : PinpointEmailRequest(new GetBlacklistReportsRequestPrivate(PinpointEmailRequest::GetBlacklistReportsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlacklistReportsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlacklistReportsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlacklistReportsRequest::response(QNetworkReply * const reply) const
{
    return new GetBlacklistReportsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointEmail::GetBlacklistReportsRequestPrivate
 * \brief The GetBlacklistReportsRequestPrivate class provides private implementation for GetBlacklistReportsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a GetBlacklistReportsRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
GetBlacklistReportsRequestPrivate::GetBlacklistReportsRequestPrivate(
    const PinpointEmailRequest::Action action, GetBlacklistReportsRequest * const q)
    : PinpointEmailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlacklistReportsRequest
 * class' copy constructor.
 */
GetBlacklistReportsRequestPrivate::GetBlacklistReportsRequestPrivate(
    const GetBlacklistReportsRequestPrivate &other, GetBlacklistReportsRequest * const q)
    : PinpointEmailRequestPrivate(other, q)
{

}

} // namespace PinpointEmail
} // namespace QtAws
