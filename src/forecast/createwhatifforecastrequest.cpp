// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwhatifforecastrequest.h"
#include "createwhatifforecastrequest_p.h"
#include "createwhatifforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastRequest
 * \brief The CreateWhatIfForecastRequest class provides an interface for Forecast CreateWhatIfForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWhatIfForecastRequest::CreateWhatIfForecastRequest(const CreateWhatIfForecastRequest &other)
    : ForecastRequest(new CreateWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWhatIfForecastRequest object.
 */
CreateWhatIfForecastRequest::CreateWhatIfForecastRequest()
    : ForecastRequest(new CreateWhatIfForecastRequestPrivate(ForecastRequest::CreateWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new CreateWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastRequestPrivate
 * \brief The CreateWhatIfForecastRequestPrivate class provides private implementation for CreateWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateWhatIfForecastRequestPrivate::CreateWhatIfForecastRequestPrivate(
    const ForecastRequest::Action action, CreateWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWhatIfForecastRequest
 * class' copy constructor.
 */
CreateWhatIfForecastRequestPrivate::CreateWhatIfForecastRequestPrivate(
    const CreateWhatIfForecastRequestPrivate &other, CreateWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
