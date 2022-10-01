// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkteamrequest.h"
#include "createworkteamrequest_p.h"
#include "createworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkteamRequest
 * \brief The CreateWorkteamRequest class provides an interface for SageMaker CreateWorkteam requests.
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
 * \sa SageMakerClient::createWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkteamRequest::CreateWorkteamRequest(const CreateWorkteamRequest &other)
    : SageMakerRequest(new CreateWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkteamRequest object.
 */
CreateWorkteamRequest::CreateWorkteamRequest()
    : SageMakerRequest(new CreateWorkteamRequestPrivate(SageMakerRequest::CreateWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateWorkteamRequestPrivate
 * \brief The CreateWorkteamRequestPrivate class provides private implementation for CreateWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateWorkteamRequestPrivate::CreateWorkteamRequestPrivate(
    const SageMakerRequest::Action action, CreateWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkteamRequest
 * class' copy constructor.
 */
CreateWorkteamRequestPrivate::CreateWorkteamRequestPrivate(
    const CreateWorkteamRequestPrivate &other, CreateWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
