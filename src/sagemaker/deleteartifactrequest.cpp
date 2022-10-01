// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteartifactrequest.h"
#include "deleteartifactrequest_p.h"
#include "deleteartifactresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteArtifactRequest
 * \brief The DeleteArtifactRequest class provides an interface for SageMaker DeleteArtifact requests.
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
 * \sa SageMakerClient::deleteArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteArtifactRequest::DeleteArtifactRequest(const DeleteArtifactRequest &other)
    : SageMakerRequest(new DeleteArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteArtifactRequest object.
 */
DeleteArtifactRequest::DeleteArtifactRequest()
    : SageMakerRequest(new DeleteArtifactRequestPrivate(SageMakerRequest::DeleteArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteArtifactRequestPrivate
 * \brief The DeleteArtifactRequestPrivate class provides private implementation for DeleteArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteArtifactRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteArtifactRequestPrivate::DeleteArtifactRequestPrivate(
    const SageMakerRequest::Action action, DeleteArtifactRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteArtifactRequest
 * class' copy constructor.
 */
DeleteArtifactRequestPrivate::DeleteArtifactRequestPrivate(
    const DeleteArtifactRequestPrivate &other, DeleteArtifactRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
