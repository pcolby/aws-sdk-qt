// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeedgepackagingjobrequest.h"
#include "describeedgepackagingjobrequest_p.h"
#include "describeedgepackagingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeEdgePackagingJobRequest
 * \brief The DescribeEdgePackagingJobRequest class provides an interface for SageMaker DescribeEdgePackagingJob requests.
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
 * \sa SageMakerClient::describeEdgePackagingJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEdgePackagingJobRequest::DescribeEdgePackagingJobRequest(const DescribeEdgePackagingJobRequest &other)
    : SageMakerRequest(new DescribeEdgePackagingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEdgePackagingJobRequest object.
 */
DescribeEdgePackagingJobRequest::DescribeEdgePackagingJobRequest()
    : SageMakerRequest(new DescribeEdgePackagingJobRequestPrivate(SageMakerRequest::DescribeEdgePackagingJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEdgePackagingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEdgePackagingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEdgePackagingJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEdgePackagingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeEdgePackagingJobRequestPrivate
 * \brief The DescribeEdgePackagingJobRequestPrivate class provides private implementation for DescribeEdgePackagingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeEdgePackagingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeEdgePackagingJobRequestPrivate::DescribeEdgePackagingJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeEdgePackagingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEdgePackagingJobRequest
 * class' copy constructor.
 */
DescribeEdgePackagingJobRequestPrivate::DescribeEdgePackagingJobRequestPrivate(
    const DescribeEdgePackagingJobRequestPrivate &other, DescribeEdgePackagingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
