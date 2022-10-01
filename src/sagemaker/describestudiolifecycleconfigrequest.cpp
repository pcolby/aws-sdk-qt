// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestudiolifecycleconfigrequest.h"
#include "describestudiolifecycleconfigrequest_p.h"
#include "describestudiolifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeStudioLifecycleConfigRequest
 * \brief The DescribeStudioLifecycleConfigRequest class provides an interface for SageMaker DescribeStudioLifecycleConfig requests.
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
 * \sa SageMakerClient::describeStudioLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeStudioLifecycleConfigRequest::DescribeStudioLifecycleConfigRequest(const DescribeStudioLifecycleConfigRequest &other)
    : SageMakerRequest(new DescribeStudioLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeStudioLifecycleConfigRequest object.
 */
DescribeStudioLifecycleConfigRequest::DescribeStudioLifecycleConfigRequest()
    : SageMakerRequest(new DescribeStudioLifecycleConfigRequestPrivate(SageMakerRequest::DescribeStudioLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStudioLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeStudioLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStudioLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStudioLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeStudioLifecycleConfigRequestPrivate
 * \brief The DescribeStudioLifecycleConfigRequestPrivate class provides private implementation for DescribeStudioLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeStudioLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeStudioLifecycleConfigRequestPrivate::DescribeStudioLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeStudioLifecycleConfigRequest
 * class' copy constructor.
 */
DescribeStudioLifecycleConfigRequestPrivate::DescribeStudioLifecycleConfigRequestPrivate(
    const DescribeStudioLifecycleConfigRequestPrivate &other, DescribeStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
