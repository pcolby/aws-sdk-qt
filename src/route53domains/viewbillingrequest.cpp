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

#include "viewbillingrequest.h"
#include "viewbillingrequest_p.h"
#include "viewbillingresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ViewBillingRequest
 * \brief The ViewBillingRequest class provides an interface for Route53Domains ViewBilling requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::viewBilling
 */

/*!
 * Constructs a copy of \a other.
 */
ViewBillingRequest::ViewBillingRequest(const ViewBillingRequest &other)
    : Route53DomainsRequest(new ViewBillingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ViewBillingRequest object.
 */
ViewBillingRequest::ViewBillingRequest()
    : Route53DomainsRequest(new ViewBillingRequestPrivate(Route53DomainsRequest::ViewBillingAction, this))
{

}

/*!
 * \reimp
 */
bool ViewBillingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ViewBillingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ViewBillingRequest::response(QNetworkReply * const reply) const
{
    return new ViewBillingResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ViewBillingRequestPrivate
 * \brief The ViewBillingRequestPrivate class provides private implementation for ViewBillingRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ViewBillingRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ViewBillingRequestPrivate::ViewBillingRequestPrivate(
    const Route53DomainsRequest::Action action, ViewBillingRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ViewBillingRequest
 * class' copy constructor.
 */
ViewBillingRequestPrivate::ViewBillingRequestPrivate(
    const ViewBillingRequestPrivate &other, ViewBillingRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
