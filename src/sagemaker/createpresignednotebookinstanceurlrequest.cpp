// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresignednotebookinstanceurlrequest.h"
#include "createpresignednotebookinstanceurlrequest_p.h"
#include "createpresignednotebookinstanceurlresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlRequest
 * \brief The CreatePresignedNotebookInstanceUrlRequest class provides an interface for SageMaker CreatePresignedNotebookInstanceUrl requests.
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
 * \sa SageMakerClient::createPresignedNotebookInstanceUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest(const CreatePresignedNotebookInstanceUrlRequest &other)
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlRequest object.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest()
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(SageMakerRequest::CreatePresignedNotebookInstanceUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePresignedNotebookInstanceUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePresignedNotebookInstanceUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresignedNotebookInstanceUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresignedNotebookInstanceUrlResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlRequestPrivate
 * \brief The CreatePresignedNotebookInstanceUrlRequestPrivate class provides private implementation for CreatePresignedNotebookInstanceUrlRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const SageMakerRequest::Action action, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePresignedNotebookInstanceUrlRequest
 * class' copy constructor.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const CreatePresignedNotebookInstanceUrlRequestPrivate &other, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
