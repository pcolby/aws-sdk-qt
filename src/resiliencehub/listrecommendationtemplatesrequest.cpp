// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendationtemplatesrequest.h"
#include "listrecommendationtemplatesrequest_p.h"
#include "listrecommendationtemplatesresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::ListRecommendationTemplatesRequest
 * \brief The ListRecommendationTemplatesRequest class provides an interface for ResilienceHub ListRecommendationTemplates requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::listRecommendationTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendationTemplatesRequest::ListRecommendationTemplatesRequest(const ListRecommendationTemplatesRequest &other)
    : ResilienceHubRequest(new ListRecommendationTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendationTemplatesRequest object.
 */
ListRecommendationTemplatesRequest::ListRecommendationTemplatesRequest()
    : ResilienceHubRequest(new ListRecommendationTemplatesRequestPrivate(ResilienceHubRequest::ListRecommendationTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendationTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendationTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendationTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendationTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::ListRecommendationTemplatesRequestPrivate
 * \brief The ListRecommendationTemplatesRequestPrivate class provides private implementation for ListRecommendationTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a ListRecommendationTemplatesRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
ListRecommendationTemplatesRequestPrivate::ListRecommendationTemplatesRequestPrivate(
    const ResilienceHubRequest::Action action, ListRecommendationTemplatesRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendationTemplatesRequest
 * class' copy constructor.
 */
ListRecommendationTemplatesRequestPrivate::ListRecommendationTemplatesRequestPrivate(
    const ListRecommendationTemplatesRequestPrivate &other, ListRecommendationTemplatesRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
