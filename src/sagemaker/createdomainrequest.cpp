// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainrequest.h"
#include "createdomainrequest_p.h"
#include "createdomainresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateDomainRequest
 * \brief The CreateDomainRequest class provides an interface for SageMaker CreateDomain requests.
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
 * \sa SageMakerClient::createDomain
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDomainRequest::CreateDomainRequest(const CreateDomainRequest &other)
    : SageMakerRequest(new CreateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDomainRequest object.
 */
CreateDomainRequest::CreateDomainRequest()
    : SageMakerRequest(new CreateDomainRequestPrivate(SageMakerRequest::CreateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDomainRequest::response(QNetworkReply * const reply) const
{
    return new CreateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateDomainRequestPrivate
 * \brief The CreateDomainRequestPrivate class provides private implementation for CreateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateDomainRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const SageMakerRequest::Action action, CreateDomainRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDomainRequest
 * class' copy constructor.
 */
CreateDomainRequestPrivate::CreateDomainRequestPrivate(
    const CreateDomainRequestPrivate &other, CreateDomainRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
