// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createactionrequest.h"
#include "createactionrequest_p.h"
#include "createactionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateActionRequest
 * \brief The CreateActionRequest class provides an interface for SageMaker CreateAction requests.
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
 * \sa SageMakerClient::createAction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateActionRequest::CreateActionRequest(const CreateActionRequest &other)
    : SageMakerRequest(new CreateActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateActionRequest object.
 */
CreateActionRequest::CreateActionRequest()
    : SageMakerRequest(new CreateActionRequestPrivate(SageMakerRequest::CreateActionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateActionRequest::response(QNetworkReply * const reply) const
{
    return new CreateActionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateActionRequestPrivate
 * \brief The CreateActionRequestPrivate class provides private implementation for CreateActionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateActionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateActionRequestPrivate::CreateActionRequestPrivate(
    const SageMakerRequest::Action action, CreateActionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateActionRequest
 * class' copy constructor.
 */
CreateActionRequestPrivate::CreateActionRequestPrivate(
    const CreateActionRequestPrivate &other, CreateActionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
