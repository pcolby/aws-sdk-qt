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

#include "listunsupportedappversionresourcesrequest.h"
#include "listunsupportedappversionresourcesrequest_p.h"
#include "listunsupportedappversionresourcesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListUnsupportedAppVersionResourcesRequest
 * \brief The ListUnsupportedAppVersionResourcesRequest class provides an interface for ResilienceHub ListUnsupportedAppVersionResources requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listUnsupportedAppVersionResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListUnsupportedAppVersionResourcesRequest::ListUnsupportedAppVersionResourcesRequest(const ListUnsupportedAppVersionResourcesRequest &other)
    : ResilienceHubRequest(new ListUnsupportedAppVersionResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUnsupportedAppVersionResourcesRequest object.
 */
ListUnsupportedAppVersionResourcesRequest::ListUnsupportedAppVersionResourcesRequest()
    : ResilienceHubRequest(new ListUnsupportedAppVersionResourcesRequestPrivate(ResilienceHubRequest::ListUnsupportedAppVersionResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListUnsupportedAppVersionResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUnsupportedAppVersionResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUnsupportedAppVersionResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListUnsupportedAppVersionResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListUnsupportedAppVersionResourcesRequestPrivate
 * \brief The ListUnsupportedAppVersionResourcesRequestPrivate class provides private implementation for ListUnsupportedAppVersionResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListUnsupportedAppVersionResourcesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListUnsupportedAppVersionResourcesRequestPrivate::ListUnsupportedAppVersionResourcesRequestPrivate(
    const ResilienceHubRequest::Action action, ListUnsupportedAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUnsupportedAppVersionResourcesRequest
 * class' copy constructor.
 */
ListUnsupportedAppVersionResourcesRequestPrivate::ListUnsupportedAppVersionResourcesRequestPrivate(
    const ListUnsupportedAppVersionResourcesRequestPrivate &other, ListUnsupportedAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
