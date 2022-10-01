// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeforecastexportjobrequest.h"
#include "describeforecastexportjobrequest_p.h"
#include "describeforecastexportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeForecastExportJobRequest
 * \brief The DescribeForecastExportJobRequest class provides an interface for Forecast DescribeForecastExportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeForecastExportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeForecastExportJobRequest::DescribeForecastExportJobRequest(const DescribeForecastExportJobRequest &other)
    : ForecastRequest(new DescribeForecastExportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeForecastExportJobRequest object.
 */
DescribeForecastExportJobRequest::DescribeForecastExportJobRequest()
    : ForecastRequest(new DescribeForecastExportJobRequestPrivate(ForecastRequest::DescribeForecastExportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeForecastExportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeForecastExportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeForecastExportJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeForecastExportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeForecastExportJobRequestPrivate
 * \brief The DescribeForecastExportJobRequestPrivate class provides private implementation for DescribeForecastExportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeForecastExportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeForecastExportJobRequestPrivate::DescribeForecastExportJobRequestPrivate(
    const ForecastRequest::Action action, DescribeForecastExportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeForecastExportJobRequest
 * class' copy constructor.
 */
DescribeForecastExportJobRequestPrivate::DescribeForecastExportJobRequestPrivate(
    const DescribeForecastExportJobRequestPrivate &other, DescribeForecastExportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
