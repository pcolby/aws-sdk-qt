// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteProjectRequest
 * \brief The DeleteProjectRequest class provides an interface for SageMaker DeleteProject requests.
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
 * \sa SageMakerClient::deleteProject
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : SageMakerRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : SageMakerRequest(new DeleteProjectRequestPrivate(SageMakerRequest::DeleteProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteProjectRequestPrivate
 * \brief The DeleteProjectRequestPrivate class provides private implementation for DeleteProjectRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteProjectRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const SageMakerRequest::Action action, DeleteProjectRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
