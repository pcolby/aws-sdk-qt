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

#include "getoperationdetailrequest.h"
#include "getoperationdetailrequest_p.h"
#include "getoperationdetailresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::GetOperationDetailRequest
 * \brief The GetOperationDetailRequest class provides an interface for Route53Domains GetOperationDetail requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::getOperationDetail
 */

/*!
 * Constructs a copy of \a other.
 */
GetOperationDetailRequest::GetOperationDetailRequest(const GetOperationDetailRequest &other)
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOperationDetailRequest object.
 */
GetOperationDetailRequest::GetOperationDetailRequest()
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(Route53DomainsRequest::GetOperationDetailAction, this))
{

}

/*!
 * \reimp
 */
bool GetOperationDetailRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOperationDetailResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationDetailResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::GetOperationDetailRequestPrivate
 * \brief The GetOperationDetailRequestPrivate class provides private implementation for GetOperationDetailRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a GetOperationDetailRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const Route53DomainsRequest::Action action, GetOperationDetailRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOperationDetailRequest
 * class' copy constructor.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const GetOperationDetailRequestPrivate &other, GetOperationDetailRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
