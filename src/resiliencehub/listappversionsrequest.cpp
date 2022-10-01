/*
    Copyright 2013-2021 Paul Colby

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

#include "listappversionsrequest.h"
#include "listappversionsrequest_p.h"
#include "listappversionsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsRequest
 * \brief The ListAppVersionsRequest class provides an interface for ResilienceHub ListAppVersions requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppVersionsRequest::ListAppVersionsRequest(const ListAppVersionsRequest &other)
    : ResilienceHubRequest(new ListAppVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppVersionsRequest object.
 */
ListAppVersionsRequest::ListAppVersionsRequest()
    : ResilienceHubRequest(new ListAppVersionsRequestPrivate(ResilienceHubRequest::ListAppVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionsRequestPrivate
 * \brief The ListAppVersionsRequestPrivate class provides private implementation for ListAppVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppVersionsRequestPrivate::ListAppVersionsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppVersionsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppVersionsRequest
 * class' copy constructor.
 */
ListAppVersionsRequestPrivate::ListAppVersionsRequestPrivate(
    const ListAppVersionsRequestPrivate &other, ListAppVersionsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
