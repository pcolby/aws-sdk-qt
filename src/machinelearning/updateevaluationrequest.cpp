/*
    Copyright 2013-2018 Paul Colby

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

#include "updateevaluationrequest.h"
#include "updateevaluationrequest_p.h"
#include "updateevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::UpdateEvaluationRequest
 * \brief The UpdateEvaluationRequest class provides an interface for MachineLearning UpdateEvaluation requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::updateEvaluation
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEvaluationRequest::UpdateEvaluationRequest(const UpdateEvaluationRequest &other)
    : MachineLearningRequest(new UpdateEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEvaluationRequest object.
 */
UpdateEvaluationRequest::UpdateEvaluationRequest()
    : MachineLearningRequest(new UpdateEvaluationRequestPrivate(MachineLearningRequest::UpdateEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEvaluationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEvaluationResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::UpdateEvaluationRequestPrivate
 * \brief The UpdateEvaluationRequestPrivate class provides private implementation for UpdateEvaluationRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a UpdateEvaluationRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
UpdateEvaluationRequestPrivate::UpdateEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, UpdateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEvaluationRequest
 * class' copy constructor.
 */
UpdateEvaluationRequestPrivate::UpdateEvaluationRequestPrivate(
    const UpdateEvaluationRequestPrivate &other, UpdateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
