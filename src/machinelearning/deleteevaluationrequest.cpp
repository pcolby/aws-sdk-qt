// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
