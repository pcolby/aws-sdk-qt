// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnotebookinstancerequest.h"
#include "createnotebookinstancerequest_p.h"
#include "createnotebookinstanceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceRequest
 * \brief The CreateNotebookInstanceRequest class provides an interface for SageMaker CreateNotebookInstance requests.
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
 * \sa SageMakerClient::createNotebookInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest(const CreateNotebookInstanceRequest &other)
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNotebookInstanceRequest object.
 */
CreateNotebookInstanceRequest::CreateNotebookInstanceRequest()
    : SageMakerRequest(new CreateNotebookInstanceRequestPrivate(SageMakerRequest::CreateNotebookInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNotebookInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNotebookInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNotebookInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateNotebookInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceRequestPrivate
 * \brief The CreateNotebookInstanceRequestPrivate class provides private implementation for CreateNotebookInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const SageMakerRequest::Action action, CreateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNotebookInstanceRequest
 * class' copy constructor.
 */
CreateNotebookInstanceRequestPrivate::CreateNotebookInstanceRequestPrivate(
    const CreateNotebookInstanceRequestPrivate &other, CreateNotebookInstanceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
