// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createworkforcerequest.h"
#include "createworkforcerequest_p.h"
#include "createworkforceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkforceRequest
 * \brief The CreateWorkforceRequest class provides an interface for SageMaker CreateWorkforce requests.
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
 * \sa SageMakerClient::createWorkforce
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkforceRequest::CreateWorkforceRequest(const CreateWorkforceRequest &other)
    : SageMakerRequest(new CreateWorkforceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkforceRequest object.
 */
CreateWorkforceRequest::CreateWorkforceRequest()
    : SageMakerRequest(new CreateWorkforceRequestPrivate(SageMakerRequest::CreateWorkforceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkforceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkforceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkforceRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkforceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateWorkforceRequestPrivate
 * \brief The CreateWorkforceRequestPrivate class provides private implementation for CreateWorkforceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkforceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateWorkforceRequestPrivate::CreateWorkforceRequestPrivate(
    const SageMakerRequest::Action action, CreateWorkforceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkforceRequest
 * class' copy constructor.
 */
CreateWorkforceRequestPrivate::CreateWorkforceRequestPrivate(
    const CreateWorkforceRequestPrivate &other, CreateWorkforceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
