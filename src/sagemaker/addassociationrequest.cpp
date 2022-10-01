// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addassociationrequest.h"
#include "addassociationrequest_p.h"
#include "addassociationresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::AddAssociationRequest
 * \brief The AddAssociationRequest class provides an interface for SageMaker AddAssociation requests.
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
 * \sa SageMakerClient::addAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
AddAssociationRequest::AddAssociationRequest(const AddAssociationRequest &other)
    : SageMakerRequest(new AddAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddAssociationRequest object.
 */
AddAssociationRequest::AddAssociationRequest()
    : SageMakerRequest(new AddAssociationRequestPrivate(SageMakerRequest::AddAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool AddAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddAssociationRequest::response(QNetworkReply * const reply) const
{
    return new AddAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::AddAssociationRequestPrivate
 * \brief The AddAssociationRequestPrivate class provides private implementation for AddAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a AddAssociationRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
AddAssociationRequestPrivate::AddAssociationRequestPrivate(
    const SageMakerRequest::Action action, AddAssociationRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddAssociationRequest
 * class' copy constructor.
 */
AddAssociationRequestPrivate::AddAssociationRequestPrivate(
    const AddAssociationRequestPrivate &other, AddAssociationRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
