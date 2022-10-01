// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkteamrequest.h"
#include "updateworkteamrequest_p.h"
#include "updateworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateWorkteamRequest
 * \brief The UpdateWorkteamRequest class provides an interface for SageMaker UpdateWorkteam requests.
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
 * \sa SageMakerClient::updateWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkteamRequest::UpdateWorkteamRequest(const UpdateWorkteamRequest &other)
    : SageMakerRequest(new UpdateWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkteamRequest object.
 */
UpdateWorkteamRequest::UpdateWorkteamRequest()
    : SageMakerRequest(new UpdateWorkteamRequestPrivate(SageMakerRequest::UpdateWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateWorkteamRequestPrivate
 * \brief The UpdateWorkteamRequestPrivate class provides private implementation for UpdateWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateWorkteamRequestPrivate::UpdateWorkteamRequestPrivate(
    const SageMakerRequest::Action action, UpdateWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkteamRequest
 * class' copy constructor.
 */
UpdateWorkteamRequestPrivate::UpdateWorkteamRequestPrivate(
    const UpdateWorkteamRequestPrivate &other, UpdateWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
