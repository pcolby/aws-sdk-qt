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

#include "describelabelingjobrequest.h"
#include "describelabelingjobrequest_p.h"
#include "describelabelingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeLabelingJobRequest
 * \brief The DescribeLabelingJobRequest class provides an interface for SageMaker DescribeLabelingJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeLabelingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLabelingJobRequest::DescribeLabelingJobRequest(const DescribeLabelingJobRequest &other)
    : SageMakerRequest(new DescribeLabelingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLabelingJobRequest object.
 */
DescribeLabelingJobRequest::DescribeLabelingJobRequest()
    : SageMakerRequest(new DescribeLabelingJobRequestPrivate(SageMakerRequest::DescribeLabelingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLabelingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLabelingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLabelingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLabelingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeLabelingJobRequestPrivate
 * \brief The DescribeLabelingJobRequestPrivate class provides private implementation for DescribeLabelingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeLabelingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeLabelingJobRequestPrivate::DescribeLabelingJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeLabelingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLabelingJobRequest
 * class' copy constructor.
 */
DescribeLabelingJobRequestPrivate::DescribeLabelingJobRequestPrivate(
    const DescribeLabelingJobRequestPrivate &other, DescribeLabelingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
