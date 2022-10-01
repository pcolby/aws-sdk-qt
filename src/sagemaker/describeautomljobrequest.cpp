// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautomljobrequest.h"
#include "describeautomljobrequest_p.h"
#include "describeautomljobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAutoMLJobRequest
 * \brief The DescribeAutoMLJobRequest class provides an interface for SageMaker DescribeAutoMLJob requests.
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
 * \sa SageMakerClient::describeAutoMLJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoMLJobRequest::DescribeAutoMLJobRequest(const DescribeAutoMLJobRequest &other)
    : SageMakerRequest(new DescribeAutoMLJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoMLJobRequest object.
 */
DescribeAutoMLJobRequest::DescribeAutoMLJobRequest()
    : SageMakerRequest(new DescribeAutoMLJobRequestPrivate(SageMakerRequest::DescribeAutoMLJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoMLJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoMLJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoMLJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoMLJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeAutoMLJobRequestPrivate
 * \brief The DescribeAutoMLJobRequestPrivate class provides private implementation for DescribeAutoMLJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAutoMLJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeAutoMLJobRequestPrivate::DescribeAutoMLJobRequestPrivate(
    const SageMakerRequest::Action action, DescribeAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoMLJobRequest
 * class' copy constructor.
 */
DescribeAutoMLJobRequestPrivate::DescribeAutoMLJobRequestPrivate(
    const DescribeAutoMLJobRequestPrivate &other, DescribeAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
