// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainrequest.h"
#include "deletedomainrequest_p.h"
#include "deletedomainresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteDomainRequest
 * \brief The DeleteDomainRequest class provides an interface for SageMaker DeleteDomain requests.
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
 * \sa SageMakerClient::deleteDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainRequest::DeleteDomainRequest(const DeleteDomainRequest &other)
    : SageMakerRequest(new DeleteDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainRequest object.
 */
DeleteDomainRequest::DeleteDomainRequest()
    : SageMakerRequest(new DeleteDomainRequestPrivate(SageMakerRequest::DeleteDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteDomainRequestPrivate
 * \brief The DeleteDomainRequestPrivate class provides private implementation for DeleteDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteDomainRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const SageMakerRequest::Action action, DeleteDomainRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainRequest
 * class' copy constructor.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const DeleteDomainRequestPrivate &other, DeleteDomainRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
