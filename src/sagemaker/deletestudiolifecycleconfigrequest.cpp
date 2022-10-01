// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiolifecycleconfigrequest.h"
#include "deletestudiolifecycleconfigrequest_p.h"
#include "deletestudiolifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigRequest
 * \brief The DeleteStudioLifecycleConfigRequest class provides an interface for SageMaker DeleteStudioLifecycleConfig requests.
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
 * \sa SageMakerClient::deleteStudioLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioLifecycleConfigRequest::DeleteStudioLifecycleConfigRequest(const DeleteStudioLifecycleConfigRequest &other)
    : SageMakerRequest(new DeleteStudioLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioLifecycleConfigRequest object.
 */
DeleteStudioLifecycleConfigRequest::DeleteStudioLifecycleConfigRequest()
    : SageMakerRequest(new DeleteStudioLifecycleConfigRequestPrivate(SageMakerRequest::DeleteStudioLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteStudioLifecycleConfigRequestPrivate
 * \brief The DeleteStudioLifecycleConfigRequestPrivate class provides private implementation for DeleteStudioLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteStudioLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteStudioLifecycleConfigRequestPrivate::DeleteStudioLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, DeleteStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioLifecycleConfigRequest
 * class' copy constructor.
 */
DeleteStudioLifecycleConfigRequestPrivate::DeleteStudioLifecycleConfigRequestPrivate(
    const DeleteStudioLifecycleConfigRequestPrivate &other, DeleteStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
