// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeforecastrequest.h"
#include "describeforecastrequest_p.h"
#include "describeforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeForecastRequest
 * \brief The DescribeForecastRequest class provides an interface for Forecast DescribeForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeForecastRequest::DescribeForecastRequest(const DescribeForecastRequest &other)
    : ForecastRequest(new DescribeForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeForecastRequest object.
 */
DescribeForecastRequest::DescribeForecastRequest()
    : ForecastRequest(new DescribeForecastRequestPrivate(ForecastRequest::DescribeForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeForecastRequest::response(QNetworkReply * const reply) const
{
    return new DescribeForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeForecastRequestPrivate
 * \brief The DescribeForecastRequestPrivate class provides private implementation for DescribeForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeForecastRequestPrivate::DescribeForecastRequestPrivate(
    const ForecastRequest::Action action, DescribeForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeForecastRequest
 * class' copy constructor.
 */
DescribeForecastRequestPrivate::DescribeForecastRequestPrivate(
    const DescribeForecastRequestPrivate &other, DescribeForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
