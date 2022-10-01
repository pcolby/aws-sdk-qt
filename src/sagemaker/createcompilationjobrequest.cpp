// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcompilationjobrequest.h"
#include "createcompilationjobrequest_p.h"
#include "createcompilationjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCompilationJobRequest
 * \brief The CreateCompilationJobRequest class provides an interface for SageMaker CreateCompilationJob requests.
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
 * \sa SageMakerClient::createCompilationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCompilationJobRequest::CreateCompilationJobRequest(const CreateCompilationJobRequest &other)
    : SageMakerRequest(new CreateCompilationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCompilationJobRequest object.
 */
CreateCompilationJobRequest::CreateCompilationJobRequest()
    : SageMakerRequest(new CreateCompilationJobRequestPrivate(SageMakerRequest::CreateCompilationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCompilationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCompilationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCompilationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateCompilationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateCompilationJobRequestPrivate
 * \brief The CreateCompilationJobRequestPrivate class provides private implementation for CreateCompilationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCompilationJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateCompilationJobRequestPrivate::CreateCompilationJobRequestPrivate(
    const SageMakerRequest::Action action, CreateCompilationJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCompilationJobRequest
 * class' copy constructor.
 */
CreateCompilationJobRequestPrivate::CreateCompilationJobRequestPrivate(
    const CreateCompilationJobRequestPrivate &other, CreateCompilationJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
