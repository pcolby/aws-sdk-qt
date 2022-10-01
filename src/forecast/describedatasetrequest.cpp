// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatasetrequest.h"
#include "describedatasetrequest_p.h"
#include "describedatasetresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeDatasetRequest
 * \brief The DescribeDatasetRequest class provides an interface for Forecast DescribeDataset requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDatasetRequest::DescribeDatasetRequest(const DescribeDatasetRequest &other)
    : ForecastRequest(new DescribeDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDatasetRequest object.
 */
DescribeDatasetRequest::DescribeDatasetRequest()
    : ForecastRequest(new DescribeDatasetRequestPrivate(ForecastRequest::DescribeDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeDatasetRequestPrivate
 * \brief The DescribeDatasetRequestPrivate class provides private implementation for DescribeDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeDatasetRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const ForecastRequest::Action action, DescribeDatasetRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDatasetRequest
 * class' copy constructor.
 */
DescribeDatasetRequestPrivate::DescribeDatasetRequestPrivate(
    const DescribeDatasetRequestPrivate &other, DescribeDatasetRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
