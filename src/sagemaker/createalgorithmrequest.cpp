// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalgorithmrequest.h"
#include "createalgorithmrequest_p.h"
#include "createalgorithmresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAlgorithmRequest
 * \brief The CreateAlgorithmRequest class provides an interface for SageMaker CreateAlgorithm requests.
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
 * \sa SageMakerClient::createAlgorithm
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAlgorithmRequest::CreateAlgorithmRequest(const CreateAlgorithmRequest &other)
    : SageMakerRequest(new CreateAlgorithmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAlgorithmRequest object.
 */
CreateAlgorithmRequest::CreateAlgorithmRequest()
    : SageMakerRequest(new CreateAlgorithmRequestPrivate(SageMakerRequest::CreateAlgorithmAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAlgorithmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAlgorithmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAlgorithmRequest::response(QNetworkReply * const reply) const
{
    return new CreateAlgorithmResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateAlgorithmRequestPrivate
 * \brief The CreateAlgorithmRequestPrivate class provides private implementation for CreateAlgorithmRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAlgorithmRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateAlgorithmRequestPrivate::CreateAlgorithmRequestPrivate(
    const SageMakerRequest::Action action, CreateAlgorithmRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAlgorithmRequest
 * class' copy constructor.
 */
CreateAlgorithmRequestPrivate::CreateAlgorithmRequestPrivate(
    const CreateAlgorithmRequestPrivate &other, CreateAlgorithmRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
