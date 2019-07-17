/*
    Copyright 2013-2019 Paul Colby

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

#include "listhyperparametertuningjobsrequest.h"
#include "listhyperparametertuningjobsrequest_p.h"
#include "listhyperparametertuningjobsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsRequest
 * \brief The ListHyperParameterTuningJobsRequest class provides an interface for SageMaker ListHyperParameterTuningJobs requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::listHyperParameterTuningJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHyperParameterTuningJobsRequest::ListHyperParameterTuningJobsRequest(const ListHyperParameterTuningJobsRequest &other)
    : SageMakerRequest(new ListHyperParameterTuningJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHyperParameterTuningJobsRequest object.
 */
ListHyperParameterTuningJobsRequest::ListHyperParameterTuningJobsRequest()
    : SageMakerRequest(new ListHyperParameterTuningJobsRequestPrivate(SageMakerRequest::ListHyperParameterTuningJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHyperParameterTuningJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHyperParameterTuningJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHyperParameterTuningJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListHyperParameterTuningJobsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsRequestPrivate
 * \brief The ListHyperParameterTuningJobsRequestPrivate class provides private implementation for ListHyperParameterTuningJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHyperParameterTuningJobsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListHyperParameterTuningJobsRequestPrivate::ListHyperParameterTuningJobsRequestPrivate(
    const SageMakerRequest::Action action, ListHyperParameterTuningJobsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHyperParameterTuningJobsRequest
 * class' copy constructor.
 */
ListHyperParameterTuningJobsRequestPrivate::ListHyperParameterTuningJobsRequestPrivate(
    const ListHyperParameterTuningJobsRequestPrivate &other, ListHyperParameterTuningJobsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
