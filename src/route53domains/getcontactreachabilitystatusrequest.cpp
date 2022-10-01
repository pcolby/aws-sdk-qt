// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactreachabilitystatusrequest.h"
#include "getcontactreachabilitystatusrequest_p.h"
#include "getcontactreachabilitystatusresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusRequest
 * \brief The GetContactReachabilityStatusRequest class provides an interface for Route53Domains GetContactReachabilityStatus requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getContactReachabilityStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactReachabilityStatusRequest::GetContactReachabilityStatusRequest(const GetContactReachabilityStatusRequest &other)
    : Route53DomainsRequest(new GetContactReachabilityStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactReachabilityStatusRequest object.
 */
GetContactReachabilityStatusRequest::GetContactReachabilityStatusRequest()
    : Route53DomainsRequest(new GetContactReachabilityStatusRequestPrivate(Route53DomainsRequest::GetContactReachabilityStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactReachabilityStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactReachabilityStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactReachabilityStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetContactReachabilityStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::GetContactReachabilityStatusRequestPrivate
 * \brief The GetContactReachabilityStatusRequestPrivate class provides private implementation for GetContactReachabilityStatusRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetContactReachabilityStatusRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
GetContactReachabilityStatusRequestPrivate::GetContactReachabilityStatusRequestPrivate(
    const Route53DomainsRequest::Action action, GetContactReachabilityStatusRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactReachabilityStatusRequest
 * class' copy constructor.
 */
GetContactReachabilityStatusRequestPrivate::GetContactReachabilityStatusRequestPrivate(
    const GetContactReachabilityStatusRequestPrivate &other, GetContactReachabilityStatusRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
