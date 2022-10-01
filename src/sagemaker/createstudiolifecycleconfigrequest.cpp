// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiolifecycleconfigrequest.h"
#include "createstudiolifecycleconfigrequest_p.h"
#include "createstudiolifecycleconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateStudioLifecycleConfigRequest
 * \brief The CreateStudioLifecycleConfigRequest class provides an interface for SageMaker CreateStudioLifecycleConfig requests.
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
 * \sa SageMakerClient::createStudioLifecycleConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateStudioLifecycleConfigRequest::CreateStudioLifecycleConfigRequest(const CreateStudioLifecycleConfigRequest &other)
    : SageMakerRequest(new CreateStudioLifecycleConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateStudioLifecycleConfigRequest object.
 */
CreateStudioLifecycleConfigRequest::CreateStudioLifecycleConfigRequest()
    : SageMakerRequest(new CreateStudioLifecycleConfigRequestPrivate(SageMakerRequest::CreateStudioLifecycleConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateStudioLifecycleConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateStudioLifecycleConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateStudioLifecycleConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateStudioLifecycleConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateStudioLifecycleConfigRequestPrivate
 * \brief The CreateStudioLifecycleConfigRequestPrivate class provides private implementation for CreateStudioLifecycleConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateStudioLifecycleConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateStudioLifecycleConfigRequestPrivate::CreateStudioLifecycleConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateStudioLifecycleConfigRequest
 * class' copy constructor.
 */
CreateStudioLifecycleConfigRequestPrivate::CreateStudioLifecycleConfigRequestPrivate(
    const CreateStudioLifecycleConfigRequestPrivate &other, CreateStudioLifecycleConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
