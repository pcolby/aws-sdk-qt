// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createendpointconfigrequest.h"
#include "createendpointconfigrequest_p.h"
#include "createendpointconfigresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigRequest
 * \brief The CreateEndpointConfigRequest class provides an interface for SageMaker CreateEndpointConfig requests.
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
 * \sa SageMakerClient::createEndpointConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest(const CreateEndpointConfigRequest &other)
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEndpointConfigRequest object.
 */
CreateEndpointConfigRequest::CreateEndpointConfigRequest()
    : SageMakerRequest(new CreateEndpointConfigRequestPrivate(SageMakerRequest::CreateEndpointConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEndpointConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEndpointConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEndpointConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateEndpointConfigResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateEndpointConfigRequestPrivate
 * \brief The CreateEndpointConfigRequestPrivate class provides private implementation for CreateEndpointConfigRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateEndpointConfigRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const SageMakerRequest::Action action, CreateEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEndpointConfigRequest
 * class' copy constructor.
 */
CreateEndpointConfigRequestPrivate::CreateEndpointConfigRequestPrivate(
    const CreateEndpointConfigRequestPrivate &other, CreateEndpointConfigRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
