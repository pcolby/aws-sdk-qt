/*
    Copyright 2013-2019 Paul Colby

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

#include "getevaluationrequest.h"
#include "getevaluationrequest_p.h"
#include "getevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::GetEvaluationRequest
 * \brief The GetEvaluationRequest class provides an interface for MachineLearning GetEvaluation requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::getEvaluation
 */

/*!
 * Constructs a copy of \a other.
 */
GetEvaluationRequest::GetEvaluationRequest(const GetEvaluationRequest &other)
    : MachineLearningRequest(new GetEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEvaluationRequest object.
 */
GetEvaluationRequest::GetEvaluationRequest()
    : MachineLearningRequest(new GetEvaluationRequestPrivate(MachineLearningRequest::GetEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool GetEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEvaluationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new GetEvaluationResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::GetEvaluationRequestPrivate
 * \brief The GetEvaluationRequestPrivate class provides private implementation for GetEvaluationRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a GetEvaluationRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
GetEvaluationRequestPrivate::GetEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, GetEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEvaluationRequest
 * class' copy constructor.
 */
GetEvaluationRequestPrivate::GetEvaluationRequestPrivate(
    const GetEvaluationRequestPrivate &other, GetEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
