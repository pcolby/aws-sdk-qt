/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteevaluationrequest.h"
#include "deleteevaluationrequest_p.h"
#include "deleteevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DeleteEvaluationRequest
 * \brief The DeleteEvaluationRequest class provides an interface for MachineLearning DeleteEvaluation requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::deleteEvaluation
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEvaluationRequest::DeleteEvaluationRequest(const DeleteEvaluationRequest &other)
    : MachineLearningRequest(new DeleteEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEvaluationRequest object.
 */
DeleteEvaluationRequest::DeleteEvaluationRequest()
    : MachineLearningRequest(new DeleteEvaluationRequestPrivate(MachineLearningRequest::DeleteEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEvaluationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEvaluationResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::DeleteEvaluationRequestPrivate
 * \brief The DeleteEvaluationRequestPrivate class provides private implementation for DeleteEvaluationRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DeleteEvaluationRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
DeleteEvaluationRequestPrivate::DeleteEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, DeleteEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEvaluationRequest
 * class' copy constructor.
 */
DeleteEvaluationRequestPrivate::DeleteEvaluationRequestPrivate(
    const DeleteEvaluationRequestPrivate &other, DeleteEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
