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
