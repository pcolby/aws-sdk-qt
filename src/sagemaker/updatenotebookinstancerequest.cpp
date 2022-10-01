// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotebookinstancerequest.h"
#include "updatenotebookinstancerequest_p.h"
#include "updatenotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceRequest
 * \brief The UpdateNotebookInstanceRequest class provides an interface for SageMaker UpdateNotebookInstance requests.
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
 * \sa SageMakerClient::updateNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest(const UpdateNotebookInstanceRequest &other)
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNotebookInstanceRequest object.
 */
UpdateNotebookInstanceRequest::UpdateNotebookInstanceRequest()
    : SageMakerRequest(new UpdateNotebookInstanceRequestPrivate(SageMakerRequest::UpdateNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceRequestPrivate
 * \brief The UpdateNotebookInstanceRequestPrivate class provides private implementation for UpdateNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNotebookInstanceRequest
 * class' copy constructor.
 */
UpdateNotebookInstanceRequestPrivate::UpdateNotebookInstanceRequestPrivate(
    const UpdateNotebookInstanceRequestPrivate &other, UpdateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
