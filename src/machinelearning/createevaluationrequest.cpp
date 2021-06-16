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

#include "createevaluationrequest.h"
#include "createevaluationrequest_p.h"
#include "createevaluationresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateEvaluationRequest
 * \brief The CreateEvaluationRequest class provides an interface for MachineLearning CreateEvaluation requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createEvaluation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEvaluationRequest::CreateEvaluationRequest(const CreateEvaluationRequest &other)
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEvaluationRequest object.
 */
CreateEvaluationRequest::CreateEvaluationRequest()
    : MachineLearningRequest(new CreateEvaluationRequestPrivate(MachineLearningRequest::CreateEvaluationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEvaluationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEvaluationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEvaluationRequest::response(QNetworkReply * const reply) const
{
    return new CreateEvaluationResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateEvaluationRequestPrivate
 * \brief The CreateEvaluationRequestPrivate class provides private implementation for CreateEvaluationRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateEvaluationRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const MachineLearningRequest::Action action, CreateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEvaluationRequest
 * class' copy constructor.
 */
CreateEvaluationRequestPrivate::CreateEvaluationRequestPrivate(
    const CreateEvaluationRequestPrivate &other, CreateEvaluationRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
