// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describenotebookinstancelifecycleconfigrequest.h"
#include "describenotebookinstancelifecycleconfigrequest_p.h"
#include "describenotebookinstancelifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigRequest
 * \brief The DescribeNotebookInstanceLifecycleConfigRequest class provides an interface for SageMaker DescribeNotebookInstanceLifecycleConfig requests.
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
 * \sa SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest(const DescribeNotebookInstanceLifecycleConfigRequest &other)
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigRequest object.
 */
DescribeNotebookInstanceLifecycleConfigRequest::DescribeNotebookInstanceLifecycleConfigRequest()
    : SageMakerRequest(new DescribeNotebookInstanceLifecycleConfigRequestPrivate(SageMakerRequest::DescribeNotebookInstanceLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeNotebookInstanceLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeNotebookInstanceLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeNotebookInstanceLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeNotebookInstanceLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigRequestPrivate
 * \brief The DescribeNotebookInstanceLifecycleConfigRequestPrivate class provides private implementation for DescribeNotebookInstanceLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeNotebookInstanceLifecycleConfigRequest
 * class' copy constructor.
 */
DescribeNotebookInstanceLifecycleConfigRequestPrivate::DescribeNotebookInstanceLifecycleConfigRequestPrivate(
    const DescribeNotebookInstanceLifecycleConfigRequestPrivate &other, DescribeNotebookInstanceLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
