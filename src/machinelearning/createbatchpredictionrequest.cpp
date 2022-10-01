// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbatchpredictionrequest.h"
#include "createbatchpredictionrequest_p.h"
#include "createbatchpredictionresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::CreateBatchPredictionRequest
 * \brief The CreateBatchPredictionRequest class provides an interface for MachineLearning CreateBatchPrediction requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::createBatchPrediction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBatchPredictionRequest::CreateBatchPredictionRequest(const CreateBatchPredictionRequest &other)
    : MachineLearningRequest(new CreateBatchPredictionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBatchPredictionRequest object.
 */
CreateBatchPredictionRequest::CreateBatchPredictionRequest()
    : MachineLearningRequest(new CreateBatchPredictionRequestPrivate(MachineLearningRequest::CreateBatchPredictionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBatchPredictionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBatchPredictionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBatchPredictionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBatchPredictionResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::CreateBatchPredictionRequestPrivate
 * \brief The CreateBatchPredictionRequestPrivate class provides private implementation for CreateBatchPredictionRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a CreateBatchPredictionRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
CreateBatchPredictionRequestPrivate::CreateBatchPredictionRequestPrivate(
    const MachineLearningRequest::Action action, CreateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBatchPredictionRequest
 * class' copy constructor.
 */
CreateBatchPredictionRequestPrivate::CreateBatchPredictionRequestPrivate(
    const CreateBatchPredictionRequestPrivate &other, CreateBatchPredictionRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
