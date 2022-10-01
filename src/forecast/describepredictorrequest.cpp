// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
