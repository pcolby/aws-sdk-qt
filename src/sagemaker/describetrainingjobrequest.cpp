// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
