/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
