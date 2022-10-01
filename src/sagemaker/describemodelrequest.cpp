// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelrequest.h"
#include "describemodelrequest_p.h"
#include "describemodelresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelRequest
 * \brief The DescribeModelRequest class provides an interface for SageMaker DescribeModel requests.
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
 * \sa SageMakerClient::describeModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelRequest::DescribeModelRequest(const DescribeModelRequest &other)
    : SageMakerRequest(new DescribeModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelRequest object.
 */
DescribeModelRequest::DescribeModelRequest()
    : SageMakerRequest(new DescribeModelRequestPrivate(SageMakerRequest::DescribeModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeModelRequestPrivate
 * \brief The DescribeModelRequestPrivate class provides private implementation for DescribeModelRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const SageMakerRequest::Action action, DescribeModelRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelRequest
 * class' copy constructor.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const DescribeModelRequestPrivate &other, DescribeModelRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
