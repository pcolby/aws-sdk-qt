/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
