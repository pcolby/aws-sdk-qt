// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmonitorrequest.h"
#include "createmonitorrequest_p.h"
#include "createmonitorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateMonitorRequest
 * \brief The CreateMonitorRequest class provides an interface for Forecast CreateMonitor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createMonitor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMonitorRequest::CreateMonitorRequest(const CreateMonitorRequest &other)
    : ForecastRequest(new CreateMonitorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMonitorRequest object.
 */
CreateMonitorRequest::CreateMonitorRequest()
    : ForecastRequest(new CreateMonitorRequestPrivate(ForecastRequest::CreateMonitorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMonitorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMonitorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMonitorRequest::response(QNetworkReply * const reply) const
{
    return new CreateMonitorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateMonitorRequestPrivate
 * \brief The CreateMonitorRequestPrivate class provides private implementation for CreateMonitorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateMonitorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateMonitorRequestPrivate::CreateMonitorRequestPrivate(
    const ForecastRequest::Action action, CreateMonitorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMonitorRequest
 * class' copy constructor.
 */
CreateMonitorRequestPrivate::CreateMonitorRequestPrivate(
    const CreateMonitorRequestPrivate &other, CreateMonitorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
