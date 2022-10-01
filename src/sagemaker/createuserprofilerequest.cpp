// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserprofilerequest.h"
#include "createuserprofilerequest_p.h"
#include "createuserprofileresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateUserProfileRequest
 * \brief The CreateUserProfileRequest class provides an interface for SageMaker CreateUserProfile requests.
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
 * \sa SageMakerClient::createUserProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserProfileRequest::CreateUserProfileRequest(const CreateUserProfileRequest &other)
    : SageMakerRequest(new CreateUserProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserProfileRequest object.
 */
CreateUserProfileRequest::CreateUserProfileRequest()
    : SageMakerRequest(new CreateUserProfileRequestPrivate(SageMakerRequest::CreateUserProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserProfileResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateUserProfileRequestPrivate
 * \brief The CreateUserProfileRequestPrivate class provides private implementation for CreateUserProfileRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateUserProfileRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateUserProfileRequestPrivate::CreateUserProfileRequestPrivate(
    const SageMakerRequest::Action action, CreateUserProfileRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserProfileRequest
 * class' copy constructor.
 */
CreateUserProfileRequestPrivate::CreateUserProfileRequestPrivate(
    const CreateUserProfileRequestPrivate &other, CreateUserProfileRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
