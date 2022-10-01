// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateProjectRequest
 * \brief The UpdateProjectRequest class provides an interface for SageMaker UpdateProject requests.
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
 * \sa SageMakerClient::updateProject
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : SageMakerRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : SageMakerRequest(new UpdateProjectRequestPrivate(SageMakerRequest::UpdateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateProjectRequestPrivate
 * \brief The UpdateProjectRequestPrivate class provides private implementation for UpdateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateProjectRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const SageMakerRequest::Action action, UpdateProjectRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectRequest
 * class' copy constructor.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const UpdateProjectRequestPrivate &other, UpdateProjectRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
