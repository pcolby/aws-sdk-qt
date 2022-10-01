// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepredictorbacktestexportjobrequest.h"
#include "describepredictorbacktestexportjobrequest_p.h"
#include "describepredictorbacktestexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribePredictorBacktestExportJobRequest
 * \brief The DescribePredictorBacktestExportJobRequest class provides an interface for Forecast DescribePredictorBacktestExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describePredictorBacktestExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePredictorBacktestExportJobRequest::DescribePredictorBacktestExportJobRequest(const DescribePredictorBacktestExportJobRequest &other)
    : ForecastRequest(new DescribePredictorBacktestExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePredictorBacktestExportJobRequest object.
 */
DescribePredictorBacktestExportJobRequest::DescribePredictorBacktestExportJobRequest()
    : ForecastRequest(new DescribePredictorBacktestExportJobRequestPrivate(ForecastRequest::DescribePredictorBacktestExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePredictorBacktestExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePredictorBacktestExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePredictorBacktestExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribePredictorBacktestExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribePredictorBacktestExportJobRequestPrivate
 * \brief The DescribePredictorBacktestExportJobRequestPrivate class provides private implementation for DescribePredictorBacktestExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribePredictorBacktestExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribePredictorBacktestExportJobRequestPrivate::DescribePredictorBacktestExportJobRequestPrivate(
    const ForecastRequest::Action action, DescribePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePredictorBacktestExportJobRequest
 * class' copy constructor.
 */
DescribePredictorBacktestExportJobRequestPrivate::DescribePredictorBacktestExportJobRequestPrivate(
    const DescribePredictorBacktestExportJobRequestPrivate &other, DescribePredictorBacktestExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
