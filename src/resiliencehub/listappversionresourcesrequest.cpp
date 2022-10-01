// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappversionresourcesrequest.h"
#include "listappversionresourcesrequest_p.h"
#include "listappversionresourcesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourcesRequest
 * \brief The ListAppVersionResourcesRequest class provides an interface for ResilienceHub ListAppVersionResources requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppVersionResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppVersionResourcesRequest::ListAppVersionResourcesRequest(const ListAppVersionResourcesRequest &other)
    : ResilienceHubRequest(new ListAppVersionResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppVersionResourcesRequest object.
 */
ListAppVersionResourcesRequest::ListAppVersionResourcesRequest()
    : ResilienceHubRequest(new ListAppVersionResourcesRequestPrivate(ResilienceHubRequest::ListAppVersionResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppVersionResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppVersionResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppVersionResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListAppVersionResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppVersionResourcesRequestPrivate
 * \brief The ListAppVersionResourcesRequestPrivate class provides private implementation for ListAppVersionResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppVersionResourcesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppVersionResourcesRequestPrivate::ListAppVersionResourcesRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppVersionResourcesRequest
 * class' copy constructor.
 */
ListAppVersionResourcesRequestPrivate::ListAppVersionResourcesRequestPrivate(
    const ListAppVersionResourcesRequestPrivate &other, ListAppVersionResourcesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
