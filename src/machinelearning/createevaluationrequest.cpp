// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
