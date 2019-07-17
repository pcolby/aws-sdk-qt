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

#include "describehyperparametertuningjobrequest.h"
#include "describehyperparametertuningjobrequest_p.h"
#include "describehyperparametertuningjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobRequest
 * \brief The DescribeHyperParameterTuningJobRequest class provides an interface for SageMaker DescribeHyperParameterTuningJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeHyperParameterTuningJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeHyperParameterTuningJobRequest::DescribeHyperParameterTuningJobRequest(const DescribeHyperParameterTuningJobRequest &other)
    : SageMakerRequest(new DescribeHyperParameterTuningJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeHyperParameterTuningJobRequest object.
 */
DescribeHyperParameterTuningJobRequest::DescribeHyperParameterTuningJobRequest()
    : SageMakerRequest(new DescribeHyperParameterTuningJobRequestPrivate(SageMakerRequest::DescribeHyperParameterTuningJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeHyperParameterTuningJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeHyperParameterTuningJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeHyperParameterTuningJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHyperParameterTuningJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeHyperParameterTuningJobRequestPrivate
 * \brief The DescribeHyperParameterTuningJobRequestPrivate class provides private implementation for DescribeHyperParameterTuningJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeHyperParameterTuningJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeHyperParameterTuningJobRequestPrivate::DescribeHyperParameterTuningJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeHyperParameterTuningJobRequest
 * class' copy constructor.
 */
DescribeHyperParameterTuningJobRequestPrivate::DescribeHyperParameterTuningJobRequestPrivate(
    const DescribeHyperParameterTuningJobRequestPrivate &other, DescribeHyperParameterTuningJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
