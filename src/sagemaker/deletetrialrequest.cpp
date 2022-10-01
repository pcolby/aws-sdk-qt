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

#include "deletetrialrequest.h"
#include "deletetrialrequest_p.h"
#include "deletetrialresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteTrialRequest
 * \brief The DeleteTrialRequest class provides an interface for SageMaker DeleteTrial requests.
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
 * \sa SageMakerClient::deleteTrial
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrialRequest::DeleteTrialRequest(const DeleteTrialRequest &other)
    : SageMakerRequest(new DeleteTrialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrialRequest object.
 */
DeleteTrialRequest::DeleteTrialRequest()
    : SageMakerRequest(new DeleteTrialRequestPrivate(SageMakerRequest::DeleteTrialAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrialRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrialResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteTrialRequestPrivate
 * \brief The DeleteTrialRequestPrivate class provides private implementation for DeleteTrialRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteTrialRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteTrialRequestPrivate::DeleteTrialRequestPrivate(
    const SageMakerRequest::Action action, DeleteTrialRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrialRequest
 * class' copy constructor.
 */
DeleteTrialRequestPrivate::DeleteTrialRequestPrivate(
    const DeleteTrialRequestPrivate &other, DeleteTrialRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
