// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainrequest.h"
#include "updatedomainrequest_p.h"
#include "updatedomainresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateDomainRequest
 * \brief The UpdateDomainRequest class provides an interface for SageMaker UpdateDomain requests.
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
 * \sa SageMakerClient::updateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainRequest::UpdateDomainRequest(const UpdateDomainRequest &other)
    : SageMakerRequest(new UpdateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainRequest object.
 */
UpdateDomainRequest::UpdateDomainRequest()
    : SageMakerRequest(new UpdateDomainRequestPrivate(SageMakerRequest::UpdateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateDomainRequestPrivate
 * \brief The UpdateDomainRequestPrivate class provides private implementation for UpdateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateDomainRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const SageMakerRequest::Action action, UpdateDomainRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainRequest
 * class' copy constructor.
 */
UpdateDomainRequestPrivate::UpdateDomainRequestPrivate(
    const UpdateDomainRequestPrivate &other, UpdateDomainRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
