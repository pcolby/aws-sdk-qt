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
