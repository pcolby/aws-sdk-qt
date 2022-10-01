// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkteamrequest.h"
#include "deleteworkteamrequest_p.h"
#include "deleteworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkteamRequest
 * \brief The DeleteWorkteamRequest class provides an interface for SageMaker DeleteWorkteam requests.
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
 * \sa SageMakerClient::deleteWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkteamRequest::DeleteWorkteamRequest(const DeleteWorkteamRequest &other)
    : SageMakerRequest(new DeleteWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkteamRequest object.
 */
DeleteWorkteamRequest::DeleteWorkteamRequest()
    : SageMakerRequest(new DeleteWorkteamRequestPrivate(SageMakerRequest::DeleteWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteWorkteamRequestPrivate
 * \brief The DeleteWorkteamRequestPrivate class provides private implementation for DeleteWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteWorkteamRequestPrivate::DeleteWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DeleteWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkteamRequest
 * class' copy constructor.
 */
DeleteWorkteamRequestPrivate::DeleteWorkteamRequestPrivate(
    const DeleteWorkteamRequestPrivate &other, DeleteWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
