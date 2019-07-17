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

#include "describetrainingjobrequest.h"
#include "describetrainingjobrequest_p.h"
#include "describetrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobRequest
 * \brief The DescribeTrainingJobRequest class provides an interface for SageMaker DescribeTrainingJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrainingJobRequest::DescribeTrainingJobRequest(const DescribeTrainingJobRequest &other)
    : SageMakerRequest(new DescribeTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrainingJobRequest object.
 */
DescribeTrainingJobRequest::DescribeTrainingJobRequest()
    : SageMakerRequest(new DescribeTrainingJobRequestPrivate(SageMakerRequest::DescribeTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeTrainingJobRequestPrivate
 * \brief The DescribeTrainingJobRequestPrivate class provides private implementation for DescribeTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeTrainingJobRequestPrivate::DescribeTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrainingJobRequest
 * class' copy constructor.
 */
DescribeTrainingJobRequestPrivate::DescribeTrainingJobRequestPrivate(
    const DescribeTrainingJobRequestPrivate &other, DescribeTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
