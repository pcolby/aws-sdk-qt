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

#include "predictrequest.h"
#include "predictrequest_p.h"
#include "predictresponse.h"
#include "machinelearningrequest_p.h"

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::PredictRequest
 * \brief The PredictRequest class provides an interface for MachineLearning Predict requests.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::predict
 */

/*!
 * Constructs a copy of \a other.
 */
PredictRequest::PredictRequest(const PredictRequest &other)
    : MachineLearningRequest(new PredictRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PredictRequest object.
 */
PredictRequest::PredictRequest()
    : MachineLearningRequest(new PredictRequestPrivate(MachineLearningRequest::PredictAction, this))
{

}

/*!
 * \reimp
 */
bool PredictRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PredictResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PredictRequest::response(QNetworkReply * const reply) const
{
    return new PredictResponse(*this, reply);
}

/*!
 * \class QtAws::MachineLearning::PredictRequestPrivate
 * \brief The PredictRequestPrivate class provides private implementation for PredictRequest.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a PredictRequestPrivate object for MachineLearning \a action,
 * with public implementation \a q.
 */
PredictRequestPrivate::PredictRequestPrivate(
    const MachineLearningRequest::Action action, PredictRequest * const q)
    : MachineLearningRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PredictRequest
 * class' copy constructor.
 */
PredictRequestPrivate::PredictRequestPrivate(
    const PredictRequestPrivate &other, PredictRequest * const q)
    : MachineLearningRequestPrivate(other, q)
{

}

} // namespace MachineLearning
} // namespace QtAws
