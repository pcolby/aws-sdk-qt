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

#include "describeexperimentrequest.h"
#include "describeexperimentrequest_p.h"
#include "describeexperimentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeExperimentRequest
 * \brief The DescribeExperimentRequest class provides an interface for SageMaker DescribeExperiment requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExperimentRequest::DescribeExperimentRequest(const DescribeExperimentRequest &other)
    : SageMakerRequest(new DescribeExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExperimentRequest object.
 */
DescribeExperimentRequest::DescribeExperimentRequest()
    : SageMakerRequest(new DescribeExperimentRequestPrivate(SageMakerRequest::DescribeExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExperimentRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeExperimentRequestPrivate
 * \brief The DescribeExperimentRequestPrivate class provides private implementation for DescribeExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeExperimentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeExperimentRequestPrivate::DescribeExperimentRequestPrivate(
    const SageMakerRequest::Action action, DescribeExperimentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExperimentRequest
 * class' copy constructor.
 */
DescribeExperimentRequestPrivate::DescribeExperimentRequestPrivate(
    const DescribeExperimentRequestPrivate &other, DescribeExperimentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
