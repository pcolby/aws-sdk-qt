// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrecommendationtemplaterequest.h"
#include "createrecommendationtemplaterequest_p.h"
#include "createrecommendationtemplateresponse.h"
#include "resiliencehubrequest_p.h"

namespace QtAws {
namespace ResilienceHub {

/*!
 * \class QtAws::ResilienceHub::CreateRecommendationTemplateRequest
 * \brief The CreateRecommendationTemplateRequest class provides an interface for ResilienceHub CreateRecommendationTemplate requests.
 *
 * \inmodule QtAwsResilienceHub
 *
 *  AWS Resilience Hub helps you proactively prepare and protect your Amazon Web Services applications from disruptions.
 *  Resilience Hub offers continuous resiliency assessment and validation that integrates into your software development
 *  lifecycle. This enables you to uncover resiliency weaknesses, ensure recovery time objective (RTO) and recovery point
 *  objective (RPO) targets for your applications are met, and resolve issues before they are released into production.
 *
 * \sa ResilienceHubClient::createRecommendationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecommendationTemplateRequest::CreateRecommendationTemplateRequest(const CreateRecommendationTemplateRequest &other)
    : ResilienceHubRequest(new CreateRecommendationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecommendationTemplateRequest object.
 */
CreateRecommendationTemplateRequest::CreateRecommendationTemplateRequest()
    : ResilienceHubRequest(new CreateRecommendationTemplateRequestPrivate(ResilienceHubRequest::CreateRecommendationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecommendationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecommendationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecommendationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecommendationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ResilienceHub::CreateRecommendationTemplateRequestPrivate
 * \brief The CreateRecommendationTemplateRequestPrivate class provides private implementation for CreateRecommendationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsResilienceHub
 */

/*!
 * Constructs a CreateRecommendationTemplateRequestPrivate object for ResilienceHub \a action,
 * with public implementation \a q.
 */
CreateRecommendationTemplateRequestPrivate::CreateRecommendationTemplateRequestPrivate(
    const ResilienceHubRequest::Action action, CreateRecommendationTemplateRequest * const q)
    : ResilienceHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecommendationTemplateRequest
 * class' copy constructor.
 */
CreateRecommendationTemplateRequestPrivate::CreateRecommendationTemplateRequestPrivate(
    const CreateRecommendationTemplateRequestPrivate &other, CreateRecommendationTemplateRequest * const q)
    : ResilienceHubRequestPrivate(other, q)
{

}

} // namespace ResilienceHub
} // namespace QtAws
