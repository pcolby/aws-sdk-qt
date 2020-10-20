/*
    Copyright 2013-2020 Paul Colby

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

#include "getcheckeriprangesrequest.h"
#include "getcheckeriprangesrequest_p.h"
#include "getcheckeriprangesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::GetCheckerIpRangesRequest
 * \brief The GetCheckerIpRangesRequest class provides an interface for Route53 GetCheckerIpRanges requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::getCheckerIpRanges
 */

/*!
 * Constructs a copy of \a other.
 */
GetCheckerIpRangesRequest::GetCheckerIpRangesRequest(const GetCheckerIpRangesRequest &other)
    : Route53Request(new GetCheckerIpRangesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCheckerIpRangesRequest object.
 */
GetCheckerIpRangesRequest::GetCheckerIpRangesRequest()
    : Route53Request(new GetCheckerIpRangesRequestPrivate(Route53Request::GetCheckerIpRangesAction, this))
{

}

/*!
 * \reimp
 */
bool GetCheckerIpRangesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCheckerIpRangesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCheckerIpRangesRequest::response(QNetworkReply * const reply) const
{
    return new GetCheckerIpRangesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::GetCheckerIpRangesRequestPrivate
 * \brief The GetCheckerIpRangesRequestPrivate class provides private implementation for GetCheckerIpRangesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a GetCheckerIpRangesRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
GetCheckerIpRangesRequestPrivate::GetCheckerIpRangesRequestPrivate(
    const Route53Request::Action action, GetCheckerIpRangesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCheckerIpRangesRequest
 * class' copy constructor.
 */
GetCheckerIpRangesRequestPrivate::GetCheckerIpRangesRequestPrivate(
    const GetCheckerIpRangesRequestPrivate &other, GetCheckerIpRangesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
