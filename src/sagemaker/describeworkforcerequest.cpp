// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkforcerequest.h"
#include "describeworkforcerequest_p.h"
#include "describeworkforceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkforceRequest
 * \brief The DescribeWorkforceRequest class provides an interface for SageMaker DescribeWorkforce requests.
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
 * \sa SageMakerClient::describeWorkforce
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkforceRequest::DescribeWorkforceRequest(const DescribeWorkforceRequest &other)
    : SageMakerRequest(new DescribeWorkforceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkforceRequest object.
 */
DescribeWorkforceRequest::DescribeWorkforceRequest()
    : SageMakerRequest(new DescribeWorkforceRequestPrivate(SageMakerRequest::DescribeWorkforceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkforceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkforceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkforceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkforceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeWorkforceRequestPrivate
 * \brief The DescribeWorkforceRequestPrivate class provides private implementation for DescribeWorkforceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkforceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeWorkforceRequestPrivate::DescribeWorkforceRequestPrivate(
    const SageMakerRequest::Action action, DescribeWorkforceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkforceRequest
 * class' copy constructor.
 */
DescribeWorkforceRequestPrivate::DescribeWorkforceRequestPrivate(
    const DescribeWorkforceRequestPrivate &other, DescribeWorkforceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
