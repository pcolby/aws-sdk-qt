// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
