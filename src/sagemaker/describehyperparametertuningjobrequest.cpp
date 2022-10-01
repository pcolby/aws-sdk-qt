// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
