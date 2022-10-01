// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepredictorrequest.h"
#include "deletepredictorrequest_p.h"
#include "deletepredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeletePredictorRequest
 * \brief The DeletePredictorRequest class provides an interface for Forecast DeletePredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deletePredictor
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePredictorRequest::DeletePredictorRequest(const DeletePredictorRequest &other)
    : ForecastRequest(new DeletePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePredictorRequest object.
 */
DeletePredictorRequest::DeletePredictorRequest()
    : ForecastRequest(new DeletePredictorRequestPrivate(ForecastRequest::DeletePredictorAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePredictorRequest::response(QNetworkReply * const reply) const
{
    return new DeletePredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeletePredictorRequestPrivate
 * \brief The DeletePredictorRequestPrivate class provides private implementation for DeletePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeletePredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeletePredictorRequestPrivate::DeletePredictorRequestPrivate(
    const ForecastRequest::Action action, DeletePredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePredictorRequest
 * class' copy constructor.
 */
DeletePredictorRequestPrivate::DeletePredictorRequestPrivate(
    const DeletePredictorRequestPrivate &other, DeletePredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
