// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeexplainabilityrequest.h"
#include "describeexplainabilityrequest_p.h"
#include "describeexplainabilityresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeExplainabilityRequest
 * \brief The DescribeExplainabilityRequest class provides an interface for Forecast DescribeExplainability requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeExplainability
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeExplainabilityRequest::DescribeExplainabilityRequest(const DescribeExplainabilityRequest &other)
    : ForecastRequest(new DescribeExplainabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeExplainabilityRequest object.
 */
DescribeExplainabilityRequest::DescribeExplainabilityRequest()
    : ForecastRequest(new DescribeExplainabilityRequestPrivate(ForecastRequest::DescribeExplainabilityAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeExplainabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeExplainabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeExplainabilityRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExplainabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeExplainabilityRequestPrivate
 * \brief The DescribeExplainabilityRequestPrivate class provides private implementation for DescribeExplainabilityRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeExplainabilityRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeExplainabilityRequestPrivate::DescribeExplainabilityRequestPrivate(
    const ForecastRequest::Action action, DescribeExplainabilityRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeExplainabilityRequest
 * class' copy constructor.
 */
DescribeExplainabilityRequestPrivate::DescribeExplainabilityRequestPrivate(
    const DescribeExplainabilityRequestPrivate &other, DescribeExplainabilityRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
