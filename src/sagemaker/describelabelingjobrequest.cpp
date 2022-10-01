// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
