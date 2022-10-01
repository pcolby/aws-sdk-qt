// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateartifactrequest.h"
#include "updateartifactrequest_p.h"
#include "updateartifactresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateArtifactRequest
 * \brief The UpdateArtifactRequest class provides an interface for SageMaker UpdateArtifact requests.
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
 * \sa SageMakerClient::updateArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateArtifactRequest::UpdateArtifactRequest(const UpdateArtifactRequest &other)
    : SageMakerRequest(new UpdateArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateArtifactRequest object.
 */
UpdateArtifactRequest::UpdateArtifactRequest()
    : SageMakerRequest(new UpdateArtifactRequestPrivate(SageMakerRequest::UpdateArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateArtifactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateArtifactRequestPrivate
 * \brief The UpdateArtifactRequestPrivate class provides private implementation for UpdateArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateArtifactRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateArtifactRequestPrivate::UpdateArtifactRequestPrivate(
    const SageMakerRequest::Action action, UpdateArtifactRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateArtifactRequest
 * class' copy constructor.
 */
UpdateArtifactRequestPrivate::UpdateArtifactRequestPrivate(
    const UpdateArtifactRequestPrivate &other, UpdateArtifactRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
