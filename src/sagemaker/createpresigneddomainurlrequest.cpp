/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
