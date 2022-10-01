// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserprofilerequest.h"
#include "updateuserprofilerequest_p.h"
#include "updateuserprofileresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateUserProfileRequest
 * \brief The UpdateUserProfileRequest class provides an interface for SageMaker UpdateUserProfile requests.
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
 * \sa SageMakerClient::updateUserProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest(const UpdateUserProfileRequest &other)
    : SageMakerRequest(new UpdateUserProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserProfileRequest object.
 */
UpdateUserProfileRequest::UpdateUserProfileRequest()
    : SageMakerRequest(new UpdateUserProfileRequestPrivate(SageMakerRequest::UpdateUserProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserProfileResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateUserProfileRequestPrivate
 * \brief The UpdateUserProfileRequestPrivate class provides private implementation for UpdateUserProfileRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateUserProfileRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const SageMakerRequest::Action action, UpdateUserProfileRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserProfileRequest
 * class' copy constructor.
 */
UpdateUserProfileRequestPrivate::UpdateUserProfileRequestPrivate(
    const UpdateUserProfileRequestPrivate &other, UpdateUserProfileRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
