// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemonitorrequest.h"
#include "describemonitorrequest_p.h"
#include "describemonitorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeMonitorRequest
 * \brief The DescribeMonitorRequest class provides an interface for Forecast DescribeMonitor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMonitorRequest::DescribeMonitorRequest(const DescribeMonitorRequest &other)
    : ForecastRequest(new DescribeMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMonitorRequest object.
 */
DescribeMonitorRequest::DescribeMonitorRequest()
    : ForecastRequest(new DescribeMonitorRequestPrivate(ForecastRequest::DescribeMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMonitorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeMonitorRequestPrivate
 * \brief The DescribeMonitorRequestPrivate class provides private implementation for DescribeMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeMonitorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeMonitorRequestPrivate::DescribeMonitorRequestPrivate(
    const ForecastRequest::Action action, DescribeMonitorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMonitorRequest
 * class' copy constructor.
 */
DescribeMonitorRequestPrivate::DescribeMonitorRequestPrivate(
    const DescribeMonitorRequestPrivate &other, DescribeMonitorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
