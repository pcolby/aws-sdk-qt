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
