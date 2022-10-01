// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontextrequest.h"
#include "createcontextrequest_p.h"
#include "createcontextresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateContextRequest
 * \brief The CreateContextRequest class provides an interface for SageMaker CreateContext requests.
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
 * \sa SageMakerClient::createContext
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContextRequest::CreateContextRequest(const CreateContextRequest &other)
    : SageMakerRequest(new CreateContextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContextRequest object.
 */
CreateContextRequest::CreateContextRequest()
    : SageMakerRequest(new CreateContextRequestPrivate(SageMakerRequest::CreateContextAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContextRequest::response(QNetworkReply * const reply) const
{
    return new CreateContextResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateContextRequestPrivate
 * \brief The CreateContextRequestPrivate class provides private implementation for CreateContextRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateContextRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateContextRequestPrivate::CreateContextRequestPrivate(
    const SageMakerRequest::Action action, CreateContextRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContextRequest
 * class' copy constructor.
 */
CreateContextRequestPrivate::CreateContextRequestPrivate(
    const CreateContextRequestPrivate &other, CreateContextRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
