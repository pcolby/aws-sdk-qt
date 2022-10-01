// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrialcomponentrequest.h"
#include "createtrialcomponentrequest_p.h"
#include "createtrialcomponentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrialComponentRequest
 * \brief The CreateTrialComponentRequest class provides an interface for SageMaker CreateTrialComponent requests.
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
 * \sa SageMakerClient::createTrialComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrialComponentRequest::CreateTrialComponentRequest(const CreateTrialComponentRequest &other)
    : SageMakerRequest(new CreateTrialComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrialComponentRequest object.
 */
CreateTrialComponentRequest::CreateTrialComponentRequest()
    : SageMakerRequest(new CreateTrialComponentRequestPrivate(SageMakerRequest::CreateTrialComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrialComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrialComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrialComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrialComponentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateTrialComponentRequestPrivate
 * \brief The CreateTrialComponentRequestPrivate class provides private implementation for CreateTrialComponentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrialComponentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateTrialComponentRequestPrivate::CreateTrialComponentRequestPrivate(
    const SageMakerRequest::Action action, CreateTrialComponentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrialComponentRequest
 * class' copy constructor.
 */
CreateTrialComponentRequestPrivate::CreateTrialComponentRequestPrivate(
    const CreateTrialComponentRequestPrivate &other, CreateTrialComponentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
