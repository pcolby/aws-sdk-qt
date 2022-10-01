// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
