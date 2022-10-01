// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createforecastrequest.h"
#include "createforecastrequest_p.h"
#include "createforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateForecastRequest
 * \brief The CreateForecastRequest class provides an interface for Forecast CreateForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createForecast
 */

/*!
 * Constructs a copy of \a other.
 */
CreateForecastRequest::CreateForecastRequest(const CreateForecastRequest &other)
    : ForecastRequest(new CreateForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateForecastRequest object.
 */
CreateForecastRequest::CreateForecastRequest()
    : ForecastRequest(new CreateForecastRequestPrivate(ForecastRequest::CreateForecastAction, this))
{

}

/*!
 * \reimp
 */
bool CreateForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateForecastRequest::response(QNetworkReply * const reply) const
{
    return new CreateForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateForecastRequestPrivate
 * \brief The CreateForecastRequestPrivate class provides private implementation for CreateForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateForecastRequestPrivate::CreateForecastRequestPrivate(
    const ForecastRequest::Action action, CreateForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateForecastRequest
 * class' copy constructor.
 */
CreateForecastRequestPrivate::CreateForecastRequestPrivate(
    const CreateForecastRequestPrivate &other, CreateForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
