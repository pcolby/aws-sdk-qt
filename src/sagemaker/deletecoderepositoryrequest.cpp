// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecoderepositoryrequest.h"
#include "deletecoderepositoryrequest_p.h"
#include "deletecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryRequest
 * \brief The DeleteCodeRepositoryRequest class provides an interface for SageMaker DeleteCodeRepository requests.
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
 * \sa SageMakerClient::deleteCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCodeRepositoryRequest::DeleteCodeRepositoryRequest(const DeleteCodeRepositoryRequest &other)
    : SageMakerRequest(new DeleteCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCodeRepositoryRequest object.
 */
DeleteCodeRepositoryRequest::DeleteCodeRepositoryRequest()
    : SageMakerRequest(new DeleteCodeRepositoryRequestPrivate(SageMakerRequest::DeleteCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteCodeRepositoryRequestPrivate
 * \brief The DeleteCodeRepositoryRequestPrivate class provides private implementation for DeleteCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteCodeRepositoryRequestPrivate::DeleteCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, DeleteCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCodeRepositoryRequest
 * class' copy constructor.
 */
DeleteCodeRepositoryRequestPrivate::DeleteCodeRepositoryRequestPrivate(
    const DeleteCodeRepositoryRequestPrivate &other, DeleteCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
