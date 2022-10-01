// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomaindetailrequest.h"
#include "getdomaindetailrequest_p.h"
#include "getdomaindetailresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetDomainDetailRequest
 * \brief The GetDomainDetailRequest class provides an interface for Route53Domains GetDomainDetail requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getDomainDetail
 */

/*!
 * Constructs a copy of \a other.
 */
GetDomainDetailRequest::GetDomainDetailRequest(const GetDomainDetailRequest &other)
    : Route53DomainsRequest(new GetDomainDetailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDomainDetailRequest object.
 */
GetDomainDetailRequest::GetDomainDetailRequest()
    : Route53DomainsRequest(new GetDomainDetailRequestPrivate(Route53DomainsRequest::GetDomainDetailAction, this))
{

}

/*!
 * \reimp
 */
bool GetDomainDetailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDomainDetailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDomainDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetDomainDetailResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::GetDomainDetailRequestPrivate
 * \brief The GetDomainDetailRequestPrivate class provides private implementation for GetDomainDetailRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetDomainDetailRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
GetDomainDetailRequestPrivate::GetDomainDetailRequestPrivate(
    const Route53DomainsRequest::Action action, GetDomainDetailRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDomainDetailRequest
 * class' copy constructor.
 */
GetDomainDetailRequestPrivate::GetDomainDetailRequestPrivate(
    const GetDomainDetailRequestPrivate &other, GetDomainDetailRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
