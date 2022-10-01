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

#include "describeautopredictorrequest.h"
#include "describeautopredictorrequest_p.h"
#include "describeautopredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeAutoPredictorRequest
 * \brief The DescribeAutoPredictorRequest class provides an interface for Forecast DescribeAutoPredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeAutoPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAutoPredictorRequest::DescribeAutoPredictorRequest(const DescribeAutoPredictorRequest &other)
    : ForecastRequest(new DescribeAutoPredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAutoPredictorRequest object.
 */
DescribeAutoPredictorRequest::DescribeAutoPredictorRequest()
    : ForecastRequest(new DescribeAutoPredictorRequestPrivate(ForecastRequest::DescribeAutoPredictorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAutoPredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAutoPredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAutoPredictorRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAutoPredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeAutoPredictorRequestPrivate
 * \brief The DescribeAutoPredictorRequestPrivate class provides private implementation for DescribeAutoPredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeAutoPredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeAutoPredictorRequestPrivate::DescribeAutoPredictorRequestPrivate(
    const ForecastRequest::Action action, DescribeAutoPredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAutoPredictorRequest
 * class' copy constructor.
 */
DescribeAutoPredictorRequestPrivate::DescribeAutoPredictorRequestPrivate(
    const DescribeAutoPredictorRequestPrivate &other, DescribeAutoPredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
