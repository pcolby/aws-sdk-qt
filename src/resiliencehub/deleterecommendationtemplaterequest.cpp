// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommendationtemplaterequest.h"
#include "deleterecommendationtemplaterequest_p.h"
#include "deleterecommendationtemplateresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::DeleteRecommendationTemplateRequest
 * \brief The DeleteRecommendationTemplateRequest class provides an interface for ResilienceHub DeleteRecommendationTemplate requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::deleteRecommendationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecommendationTemplateRequest::DeleteRecommendationTemplateRequest(const DeleteRecommendationTemplateRequest &other)
    : ResilienceHubRequest(new DeleteRecommendationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecommendationTemplateRequest object.
 */
DeleteRecommendationTemplateRequest::DeleteRecommendationTemplateRequest()
    : ResilienceHubRequest(new DeleteRecommendationTemplateRequestPrivate(ResilienceHubRequest::DeleteRecommendationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecommendationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecommendationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecommendationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecommendationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::DeleteRecommendationTemplateRequestPrivate
 * \brief The DeleteRecommendationTemplateRequestPrivate class provides private implementation for DeleteRecommendationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a DeleteRecommendationTemplateRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
DeleteRecommendationTemplateRequestPrivate::DeleteRecommendationTemplateRequestPrivate(
    const ResilienceHubRequest::Action action, DeleteRecommendationTemplateRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecommendationTemplateRequest
 * class' copy constructor.
 */
DeleteRecommendationTemplateRequestPrivate::DeleteRecommendationTemplateRequestPrivate(
    const DeleteRecommendationTemplateRequestPrivate &other, DeleteRecommendationTemplateRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
