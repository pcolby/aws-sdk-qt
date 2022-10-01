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

#include "describepredictorrequest.h"
#include "describepredictorrequest_p.h"
#include "describepredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribePredictorRequest
 * \brief The DescribePredictorRequest class provides an interface for Forecast DescribePredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describePredictor
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePredictorRequest::DescribePredictorRequest(const DescribePredictorRequest &other)
    : ForecastRequest(new DescribePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePredictorRequest object.
 */
DescribePredictorRequest::DescribePredictorRequest()
    : ForecastRequest(new DescribePredictorRequestPrivate(ForecastRequest::DescribePredictorAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePredictorRequest::response(QNetworkReply * const reply) const
{
    return new DescribePredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribePredictorRequestPrivate
 * \brief The DescribePredictorRequestPrivate class provides private implementation for DescribePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribePredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribePredictorRequestPrivate::DescribePredictorRequestPrivate(
    const ForecastRequest::Action action, DescribePredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePredictorRequest
 * class' copy constructor.
 */
DescribePredictorRequestPrivate::DescribePredictorRequestPrivate(
    const DescribePredictorRequestPrivate &other, DescribePredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
