// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexplainabilityexportrequest.h"
#include "describeexplainabilityexportrequest_p.h"
#include "describeexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportRequest
 * \brief The DescribeExplainabilityExportRequest class provides an interface for Forecast DescribeExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExplainabilityExportRequest::DescribeExplainabilityExportRequest(const DescribeExplainabilityExportRequest &other)
    : ForecastRequest(new DescribeExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExplainabilityExportRequest object.
 */
DescribeExplainabilityExportRequest::DescribeExplainabilityExportRequest()
    : ForecastRequest(new DescribeExplainabilityExportRequestPrivate(ForecastRequest::DescribeExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityExportRequestPrivate
 * \brief The DescribeExplainabilityExportRequestPrivate class provides private implementation for DescribeExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeExplainabilityExportRequestPrivate::DescribeExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, DescribeExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExplainabilityExportRequest
 * class' copy constructor.
 */
DescribeExplainabilityExportRequestPrivate::DescribeExplainabilityExportRequestPrivate(
    const DescribeExplainabilityExportRequestPrivate &other, DescribeExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
