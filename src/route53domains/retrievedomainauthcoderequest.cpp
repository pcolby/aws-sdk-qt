// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrievedomainauthcoderequest.h"
#include "retrievedomainauthcoderequest_p.h"
#include "retrievedomainauthcoderesponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeRequest
 * \brief The RetrieveDomainAuthCodeRequest class provides an interface for Route53Domains RetrieveDomainAuthCode requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::retrieveDomainAuthCode
 */

/*!
 * Constructs a copy of \a other.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest(const RetrieveDomainAuthCodeRequest &other)
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetrieveDomainAuthCodeRequest object.
 */
RetrieveDomainAuthCodeRequest::RetrieveDomainAuthCodeRequest()
    : Route53DomainsRequest(new RetrieveDomainAuthCodeRequestPrivate(Route53DomainsRequest::RetrieveDomainAuthCodeAction, this))
{

}

/*!
 * \reimp
 */
bool RetrieveDomainAuthCodeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetrieveDomainAuthCodeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetrieveDomainAuthCodeRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveDomainAuthCodeResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RetrieveDomainAuthCodeRequestPrivate
 * \brief The RetrieveDomainAuthCodeRequestPrivate class provides private implementation for RetrieveDomainAuthCodeRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RetrieveDomainAuthCodeRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const Route53DomainsRequest::Action action, RetrieveDomainAuthCodeRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetrieveDomainAuthCodeRequest
 * class' copy constructor.
 */
RetrieveDomainAuthCodeRequestPrivate::RetrieveDomainAuthCodeRequestPrivate(
    const RetrieveDomainAuthCodeRequestPrivate &other, RetrieveDomainAuthCodeRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
