// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
