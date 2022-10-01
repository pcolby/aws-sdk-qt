// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealgorithmrequest.h"
#include "describealgorithmrequest_p.h"
#include "describealgorithmresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAlgorithmRequest
 * \brief The DescribeAlgorithmRequest class provides an interface for SageMaker DescribeAlgorithm requests.
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
 * \sa SageMakerClient::describeAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest(const DescribeAlgorithmRequest &other)
    : SageMakerRequest(new DescribeAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlgorithmRequest object.
 */
DescribeAlgorithmRequest::DescribeAlgorithmRequest()
    : SageMakerRequest(new DescribeAlgorithmRequestPrivate(SageMakerRequest::DescribeAlgorithmAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlgorithmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlgorithmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlgorithmRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlgorithmResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeAlgorithmRequestPrivate
 * \brief The DescribeAlgorithmRequestPrivate class provides private implementation for DescribeAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAlgorithmRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const SageMakerRequest::Action action, DescribeAlgorithmRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlgorithmRequest
 * class' copy constructor.
 */
DescribeAlgorithmRequestPrivate::DescribeAlgorithmRequestPrivate(
    const DescribeAlgorithmRequestPrivate &other, DescribeAlgorithmRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
