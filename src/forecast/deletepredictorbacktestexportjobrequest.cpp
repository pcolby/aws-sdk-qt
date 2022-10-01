// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepredictorbacktestexportjobrequest.h"
#include "deletepredictorbacktestexportjobrequest_p.h"
#include "deletepredictorbacktestexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeletePredictorBacktestExportJobRequest
 * \brief The DeletePredictorBacktestExportJobRequest class provides an interface for Forecast DeletePredictorBacktestExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deletePredictorBacktestExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePredictorBacktestExportJobRequest::DeletePredictorBacktestExportJobRequest(const DeletePredictorBacktestExportJobRequest &other)
    : ForecastRequest(new DeletePredictorBacktestExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePredictorBacktestExportJobRequest object.
 */
DeletePredictorBacktestExportJobRequest::DeletePredictorBacktestExportJobRequest()
    : ForecastRequest(new DeletePredictorBacktestExportJobRequestPrivate(ForecastRequest::DeletePredictorBacktestExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePredictorBacktestExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePredictorBacktestExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePredictorBacktestExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DeletePredictorBacktestExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeletePredictorBacktestExportJobRequestPrivate
 * \brief The DeletePredictorBacktestExportJobRequestPrivate class provides private implementation for DeletePredictorBacktestExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeletePredictorBacktestExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeletePredictorBacktestExportJobRequestPrivate::DeletePredictorBacktestExportJobRequestPrivate(
    const ForecastRequest::Action action, DeletePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePredictorBacktestExportJobRequest
 * class' copy constructor.
 */
DeletePredictorBacktestExportJobRequestPrivate::DeletePredictorBacktestExportJobRequestPrivate(
    const DeletePredictorBacktestExportJobRequestPrivate &other, DeletePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
