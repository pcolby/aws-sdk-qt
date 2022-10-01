// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresigneddomainurlrequest.h"
#include "createpresigneddomainurlrequest_p.h"
#include "createpresigneddomainurlresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedDomainUrlRequest
 * \brief The CreatePresignedDomainUrlRequest class provides an interface for SageMaker CreatePresignedDomainUrl requests.
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
 * \sa SageMakerClient::createPresignedDomainUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePresignedDomainUrlRequest::CreatePresignedDomainUrlRequest(const CreatePresignedDomainUrlRequest &other)
    : SageMakerRequest(new CreatePresignedDomainUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePresignedDomainUrlRequest object.
 */
CreatePresignedDomainUrlRequest::CreatePresignedDomainUrlRequest()
    : SageMakerRequest(new CreatePresignedDomainUrlRequestPrivate(SageMakerRequest::CreatePresignedDomainUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePresignedDomainUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePresignedDomainUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresignedDomainUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresignedDomainUrlResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreatePresignedDomainUrlRequestPrivate
 * \brief The CreatePresignedDomainUrlRequestPrivate class provides private implementation for CreatePresignedDomainUrlRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedDomainUrlRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreatePresignedDomainUrlRequestPrivate::CreatePresignedDomainUrlRequestPrivate(
    const SageMakerRequest::Action action, CreatePresignedDomainUrlRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePresignedDomainUrlRequest
 * class' copy constructor.
 */
CreatePresignedDomainUrlRequestPrivate::CreatePresignedDomainUrlRequestPrivate(
    const CreatePresignedDomainUrlRequestPrivate &other, CreatePresignedDomainUrlRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
