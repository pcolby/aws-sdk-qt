// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprocessingjobrequest.h"
#include "describeprocessingjobrequest_p.h"
#include "describeprocessingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeProcessingJobRequest
 * \brief The DescribeProcessingJobRequest class provides an interface for SageMaker DescribeProcessingJob requests.
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
 * \sa SageMakerClient::describeProcessingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProcessingJobRequest::DescribeProcessingJobRequest(const DescribeProcessingJobRequest &other)
    : SageMakerRequest(new DescribeProcessingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProcessingJobRequest object.
 */
DescribeProcessingJobRequest::DescribeProcessingJobRequest()
    : SageMakerRequest(new DescribeProcessingJobRequestPrivate(SageMakerRequest::DescribeProcessingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProcessingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProcessingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProcessingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProcessingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeProcessingJobRequestPrivate
 * \brief The DescribeProcessingJobRequestPrivate class provides private implementation for DescribeProcessingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeProcessingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeProcessingJobRequestPrivate::DescribeProcessingJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeProcessingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProcessingJobRequest
 * class' copy constructor.
 */
DescribeProcessingJobRequestPrivate::DescribeProcessingJobRequestPrivate(
    const DescribeProcessingJobRequestPrivate &other, DescribeProcessingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
