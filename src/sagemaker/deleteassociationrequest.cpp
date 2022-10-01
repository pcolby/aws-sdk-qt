// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteassociationrequest.h"
#include "deleteassociationrequest_p.h"
#include "deleteassociationresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteAssociationRequest
 * \brief The DeleteAssociationRequest class provides an interface for SageMaker DeleteAssociation requests.
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
 * \sa SageMakerClient::deleteAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAssociationRequest::DeleteAssociationRequest(const DeleteAssociationRequest &other)
    : SageMakerRequest(new DeleteAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAssociationRequest object.
 */
DeleteAssociationRequest::DeleteAssociationRequest()
    : SageMakerRequest(new DeleteAssociationRequestPrivate(SageMakerRequest::DeleteAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteAssociationRequestPrivate
 * \brief The DeleteAssociationRequestPrivate class provides private implementation for DeleteAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteAssociationRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteAssociationRequestPrivate::DeleteAssociationRequestPrivate(
    const SageMakerRequest::Action action, DeleteAssociationRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAssociationRequest
 * class' copy constructor.
 */
DeleteAssociationRequestPrivate::DeleteAssociationRequestPrivate(
    const DeleteAssociationRequestPrivate &other, DeleteAssociationRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
