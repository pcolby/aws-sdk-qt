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

#include "resendcontactreachabilityemailrequest.h"
#include "resendcontactreachabilityemailrequest_p.h"
#include "resendcontactreachabilityemailresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ResendContactReachabilityEmailRequest
 * \brief The ResendContactReachabilityEmailRequest class provides an interface for Route53Domains ResendContactReachabilityEmail requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::resendContactReachabilityEmail
 */

/*!
 * Constructs a copy of \a other.
 */
ResendContactReachabilityEmailRequest::ResendContactReachabilityEmailRequest(const ResendContactReachabilityEmailRequest &other)
    : Route53DomainsRequest(new ResendContactReachabilityEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResendContactReachabilityEmailRequest object.
 */
ResendContactReachabilityEmailRequest::ResendContactReachabilityEmailRequest()
    : Route53DomainsRequest(new ResendContactReachabilityEmailRequestPrivate(Route53DomainsRequest::ResendContactReachabilityEmailAction, this))
{

}

/*!
 * \reimp
 */
bool ResendContactReachabilityEmailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResendContactReachabilityEmailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResendContactReachabilityEmailRequest::response(QNetworkReply * const reply) const
{
    return new ResendContactReachabilityEmailResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ResendContactReachabilityEmailRequestPrivate
 * \brief The ResendContactReachabilityEmailRequestPrivate class provides private implementation for ResendContactReachabilityEmailRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ResendContactReachabilityEmailRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ResendContactReachabilityEmailRequestPrivate::ResendContactReachabilityEmailRequestPrivate(
    const Route53DomainsRequest::Action action, ResendContactReachabilityEmailRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResendContactReachabilityEmailRequest
 * class' copy constructor.
 */
ResendContactReachabilityEmailRequestPrivate::ResendContactReachabilityEmailRequestPrivate(
    const ResendContactReachabilityEmailRequestPrivate &other, ResendContactReachabilityEmailRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
