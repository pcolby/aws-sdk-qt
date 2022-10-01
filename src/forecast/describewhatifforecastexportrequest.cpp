// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describewhatifforecastexportrequest.h"
#include "describewhatifforecastexportrequest_p.h"
#include "describewhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportRequest
 * \brief The DescribeWhatIfForecastExportRequest class provides an interface for Forecast DescribeWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWhatIfForecastExportRequest::DescribeWhatIfForecastExportRequest(const DescribeWhatIfForecastExportRequest &other)
    : ForecastRequest(new DescribeWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWhatIfForecastExportRequest object.
 */
DescribeWhatIfForecastExportRequest::DescribeWhatIfForecastExportRequest()
    : ForecastRequest(new DescribeWhatIfForecastExportRequestPrivate(ForecastRequest::DescribeWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfForecastExportRequestPrivate
 * \brief The DescribeWhatIfForecastExportRequestPrivate class provides private implementation for DescribeWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeWhatIfForecastExportRequestPrivate::DescribeWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, DescribeWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWhatIfForecastExportRequest
 * class' copy constructor.
 */
DescribeWhatIfForecastExportRequestPrivate::DescribeWhatIfForecastExportRequestPrivate(
    const DescribeWhatIfForecastExportRequestPrivate &other, DescribeWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
