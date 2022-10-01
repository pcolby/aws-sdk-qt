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
