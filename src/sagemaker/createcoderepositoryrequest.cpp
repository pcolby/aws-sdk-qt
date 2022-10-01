// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcoderepositoryrequest.h"
#include "createcoderepositoryrequest_p.h"
#include "createcoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryRequest
 * \brief The CreateCodeRepositoryRequest class provides an interface for SageMaker CreateCodeRepository requests.
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
 * \sa SageMakerClient::createCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCodeRepositoryRequest::CreateCodeRepositoryRequest(const CreateCodeRepositoryRequest &other)
    : SageMakerRequest(new CreateCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCodeRepositoryRequest object.
 */
CreateCodeRepositoryRequest::CreateCodeRepositoryRequest()
    : SageMakerRequest(new CreateCodeRepositoryRequestPrivate(SageMakerRequest::CreateCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryRequestPrivate
 * \brief The CreateCodeRepositoryRequestPrivate class provides private implementation for CreateCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateCodeRepositoryRequestPrivate::CreateCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, CreateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCodeRepositoryRequest
 * class' copy constructor.
 */
CreateCodeRepositoryRequestPrivate::CreateCodeRepositoryRequestPrivate(
    const CreateCodeRepositoryRequestPrivate &other, CreateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
