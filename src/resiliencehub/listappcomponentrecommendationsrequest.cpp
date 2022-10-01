// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappcomponentrecommendationsrequest.h"
#include "listappcomponentrecommendationsrequest_p.h"
#include "listappcomponentrecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListAppComponentRecommendationsRequest
 * \brief The ListAppComponentRecommendationsRequest class provides an interface for ResilienceHub ListAppComponentRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listAppComponentRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppComponentRecommendationsRequest::ListAppComponentRecommendationsRequest(const ListAppComponentRecommendationsRequest &other)
    : ResilienceHubRequest(new ListAppComponentRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppComponentRecommendationsRequest object.
 */
ListAppComponentRecommendationsRequest::ListAppComponentRecommendationsRequest()
    : ResilienceHubRequest(new ListAppComponentRecommendationsRequestPrivate(ResilienceHubRequest::ListAppComponentRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppComponentRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppComponentRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppComponentRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppComponentRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListAppComponentRecommendationsRequestPrivate
 * \brief The ListAppComponentRecommendationsRequestPrivate class provides private implementation for ListAppComponentRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListAppComponentRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListAppComponentRecommendationsRequestPrivate::ListAppComponentRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListAppComponentRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppComponentRecommendationsRequest
 * class' copy constructor.
 */
ListAppComponentRecommendationsRequestPrivate::ListAppComponentRecommendationsRequestPrivate(
    const ListAppComponentRecommendationsRequestPrivate &other, ListAppComponentRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
