// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
