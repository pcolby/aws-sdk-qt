// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinferencerecommendationsjobsrequest.h"
#include "listinferencerecommendationsjobsrequest_p.h"
#include "listinferencerecommendationsjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListInferenceRecommendationsJobsRequest
 * \brief The ListInferenceRecommendationsJobsRequest class provides an interface for SageMaker ListInferenceRecommendationsJobs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listInferenceRecommendationsJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListInferenceRecommendationsJobsRequest::ListInferenceRecommendationsJobsRequest(const ListInferenceRecommendationsJobsRequest &other)
    : SageMakerRequest(new ListInferenceRecommendationsJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInferenceRecommendationsJobsRequest object.
 */
ListInferenceRecommendationsJobsRequest::ListInferenceRecommendationsJobsRequest()
    : SageMakerRequest(new ListInferenceRecommendationsJobsRequestPrivate(SageMakerRequest::ListInferenceRecommendationsJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInferenceRecommendationsJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInferenceRecommendationsJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInferenceRecommendationsJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListInferenceRecommendationsJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListInferenceRecommendationsJobsRequestPrivate
 * \brief The ListInferenceRecommendationsJobsRequestPrivate class provides private implementation for ListInferenceRecommendationsJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListInferenceRecommendationsJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListInferenceRecommendationsJobsRequestPrivate::ListInferenceRecommendationsJobsRequestPrivate(
    const SageMakerRequest::Action action, ListInferenceRecommendationsJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInferenceRecommendationsJobsRequest
 * class' copy constructor.
 */
ListInferenceRecommendationsJobsRequestPrivate::ListInferenceRecommendationsJobsRequestPrivate(
    const ListInferenceRecommendationsJobsRequestPrivate &other, ListInferenceRecommendationsJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
