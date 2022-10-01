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
