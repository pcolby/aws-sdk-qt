// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsoprecommendationsrequest.h"
#include "listsoprecommendationsrequest_p.h"
#include "listsoprecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsRequest
 * \brief The ListSopRecommendationsRequest class provides an interface for ResilienceHub ListSopRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listSopRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSopRecommendationsRequest::ListSopRecommendationsRequest(const ListSopRecommendationsRequest &other)
    : ResilienceHubRequest(new ListSopRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSopRecommendationsRequest object.
 */
ListSopRecommendationsRequest::ListSopRecommendationsRequest()
    : ResilienceHubRequest(new ListSopRecommendationsRequestPrivate(ResilienceHubRequest::ListSopRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSopRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSopRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSopRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSopRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListSopRecommendationsRequestPrivate
 * \brief The ListSopRecommendationsRequestPrivate class provides private implementation for ListSopRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListSopRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListSopRecommendationsRequestPrivate::ListSopRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListSopRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSopRecommendationsRequest
 * class' copy constructor.
 */
ListSopRecommendationsRequestPrivate::ListSopRecommendationsRequestPrivate(
    const ListSopRecommendationsRequestPrivate &other, ListSopRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
