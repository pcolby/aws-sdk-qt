// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopnotebookinstancerequest.h"
#include "stopnotebookinstancerequest_p.h"
#include "stopnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceRequest
 * \brief The StopNotebookInstanceRequest class provides an interface for SageMaker StopNotebookInstance requests.
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
 * \sa SageMakerClient::stopNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
StopNotebookInstanceRequest::StopNotebookInstanceRequest(const StopNotebookInstanceRequest &other)
    : SageMakerRequest(new StopNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopNotebookInstanceRequest object.
 */
StopNotebookInstanceRequest::StopNotebookInstanceRequest()
    : SageMakerRequest(new StopNotebookInstanceRequestPrivate(SageMakerRequest::StopNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool StopNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new StopNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceRequestPrivate
 * \brief The StopNotebookInstanceRequestPrivate class provides private implementation for StopNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopNotebookInstanceRequestPrivate::StopNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, StopNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopNotebookInstanceRequest
 * class' copy constructor.
 */
StopNotebookInstanceRequestPrivate::StopNotebookInstanceRequestPrivate(
    const StopNotebookInstanceRequestPrivate &other, StopNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
