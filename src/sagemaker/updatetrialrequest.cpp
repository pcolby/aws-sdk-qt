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

#include "updatetrialrequest.h"
#include "updatetrialrequest_p.h"
#include "updatetrialresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrialRequest
 * \brief The UpdateTrialRequest class provides an interface for SageMaker UpdateTrial requests.
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
 * \sa SageMakerClient::updateTrial
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrialRequest::UpdateTrialRequest(const UpdateTrialRequest &other)
    : SageMakerRequest(new UpdateTrialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrialRequest object.
 */
UpdateTrialRequest::UpdateTrialRequest()
    : SageMakerRequest(new UpdateTrialRequestPrivate(SageMakerRequest::UpdateTrialAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrialRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrialResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateTrialRequestPrivate
 * \brief The UpdateTrialRequestPrivate class provides private implementation for UpdateTrialRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrialRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateTrialRequestPrivate::UpdateTrialRequestPrivate(
    const SageMakerRequest::Action action, UpdateTrialRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrialRequest
 * class' copy constructor.
 */
UpdateTrialRequestPrivate::UpdateTrialRequestPrivate(
    const UpdateTrialRequestPrivate &other, UpdateTrialRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
