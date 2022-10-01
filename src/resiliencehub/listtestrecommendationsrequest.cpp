// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtestrecommendationsrequest.h"
#include "listtestrecommendationsrequest_p.h"
#include "listtestrecommendationsresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsRequest
 * \brief The ListTestRecommendationsRequest class provides an interface for ResilienceHub ListTestRecommendations requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listTestRecommendations
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestRecommendationsRequest::ListTestRecommendationsRequest(const ListTestRecommendationsRequest &other)
    : ResilienceHubRequest(new ListTestRecommendationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestRecommendationsRequest object.
 */
ListTestRecommendationsRequest::ListTestRecommendationsRequest()
    : ResilienceHubRequest(new ListTestRecommendationsRequestPrivate(ResilienceHubRequest::ListTestRecommendationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestRecommendationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestRecommendationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestRecommendationsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestRecommendationsResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListTestRecommendationsRequestPrivate
 * \brief The ListTestRecommendationsRequestPrivate class provides private implementation for ListTestRecommendationsRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListTestRecommendationsRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListTestRecommendationsRequestPrivate::ListTestRecommendationsRequestPrivate(
    const ResilienceHubRequest::Action action, ListTestRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestRecommendationsRequest
 * class' copy constructor.
 */
ListTestRecommendationsRequestPrivate::ListTestRecommendationsRequestPrivate(
    const ListTestRecommendationsRequestPrivate &other, ListTestRecommendationsRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
