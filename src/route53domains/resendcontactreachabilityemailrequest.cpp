// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
