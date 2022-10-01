// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrialrequest.h"
#include "describetrialrequest_p.h"
#include "describetrialresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialRequest
 * \brief The DescribeTrialRequest class provides an interface for SageMaker DescribeTrial requests.
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
 * \sa SageMakerClient::describeTrial
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeTrialRequest::DescribeTrialRequest(const DescribeTrialRequest &other)
    : SageMakerRequest(new DescribeTrialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeTrialRequest object.
 */
DescribeTrialRequest::DescribeTrialRequest()
    : SageMakerRequest(new DescribeTrialRequestPrivate(SageMakerRequest::DescribeTrialAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeTrialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeTrialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeTrialRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrialResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeTrialRequestPrivate
 * \brief The DescribeTrialRequestPrivate class provides private implementation for DescribeTrialRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeTrialRequestPrivate::DescribeTrialRequestPrivate(
    const SageMakerRequest::Action action, DescribeTrialRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrialRequest
 * class' copy constructor.
 */
DescribeTrialRequestPrivate::DescribeTrialRequestPrivate(
    const DescribeTrialRequestPrivate &other, DescribeTrialRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
