/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
