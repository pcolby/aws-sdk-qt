// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
