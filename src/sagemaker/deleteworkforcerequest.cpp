// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkforcerequest.h"
#include "deleteworkforcerequest_p.h"
#include "deleteworkforceresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkforceRequest
 * \brief The DeleteWorkforceRequest class provides an interface for SageMaker DeleteWorkforce requests.
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
 * \sa SageMakerClient::deleteWorkforce
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkforceRequest::DeleteWorkforceRequest(const DeleteWorkforceRequest &other)
    : SageMakerRequest(new DeleteWorkforceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkforceRequest object.
 */
DeleteWorkforceRequest::DeleteWorkforceRequest()
    : SageMakerRequest(new DeleteWorkforceRequestPrivate(SageMakerRequest::DeleteWorkforceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkforceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkforceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkforceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkforceResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteWorkforceRequestPrivate
 * \brief The DeleteWorkforceRequestPrivate class provides private implementation for DeleteWorkforceRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkforceRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteWorkforceRequestPrivate::DeleteWorkforceRequestPrivate(
    const SageMakerRequest::Action action, DeleteWorkforceRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkforceRequest
 * class' copy constructor.
 */
DeleteWorkforceRequestPrivate::DeleteWorkforceRequestPrivate(
    const DeleteWorkforceRequestPrivate &other, DeleteWorkforceRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
