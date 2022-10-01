// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotebookinstancerequest.h"
#include "deletenotebookinstancerequest_p.h"
#include "deletenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceRequest
 * \brief The DeleteNotebookInstanceRequest class provides an interface for SageMaker DeleteNotebookInstance requests.
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
 * \sa SageMakerClient::deleteNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNotebookInstanceRequest::DeleteNotebookInstanceRequest(const DeleteNotebookInstanceRequest &other)
    : SageMakerRequest(new DeleteNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNotebookInstanceRequest object.
 */
DeleteNotebookInstanceRequest::DeleteNotebookInstanceRequest()
    : SageMakerRequest(new DeleteNotebookInstanceRequestPrivate(SageMakerRequest::DeleteNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceRequestPrivate
 * \brief The DeleteNotebookInstanceRequestPrivate class provides private implementation for DeleteNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteNotebookInstanceRequestPrivate::DeleteNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, DeleteNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNotebookInstanceRequest
 * class' copy constructor.
 */
DeleteNotebookInstanceRequestPrivate::DeleteNotebookInstanceRequestPrivate(
    const DeleteNotebookInstanceRequestPrivate &other, DeleteNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
