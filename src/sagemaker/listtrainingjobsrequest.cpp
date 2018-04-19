/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtrainingjobsrequest.h"
#include "listtrainingjobsrequest_p.h"
#include "listtrainingjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsRequest
 * \brief The ListTrainingJobsRequest class provides an interface for SageMaker ListTrainingJobs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listTrainingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest(const ListTrainingJobsRequest &other)
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrainingJobsRequest object.
 */
ListTrainingJobsRequest::ListTrainingJobsRequest()
    : SageMakerRequest(new ListTrainingJobsRequestPrivate(SageMakerRequest::ListTrainingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrainingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrainingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrainingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTrainingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsRequestPrivate
 * \brief The ListTrainingJobsRequestPrivate class provides private implementation for ListTrainingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 *
 * Constructs a ListTrainingJobsRequestPrivate object for SageMaker \a action with,
 * public implementation \a q.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const SageMakerRequest::Action action, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrainingJobsRequest
 * class' copy constructor.
 */
ListTrainingJobsRequestPrivate::ListTrainingJobsRequestPrivate(
    const ListTrainingJobsRequestPrivate &other, ListTrainingJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
