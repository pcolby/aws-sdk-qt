// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwhatifforecastexportrequest.h"
#include "createwhatifforecastexportrequest_p.h"
#include "createwhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportRequest
 * \brief The CreateWhatIfForecastExportRequest class provides an interface for Forecast CreateWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWhatIfForecastExportRequest::CreateWhatIfForecastExportRequest(const CreateWhatIfForecastExportRequest &other)
    : ForecastRequest(new CreateWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWhatIfForecastExportRequest object.
 */
CreateWhatIfForecastExportRequest::CreateWhatIfForecastExportRequest()
    : ForecastRequest(new CreateWhatIfForecastExportRequestPrivate(ForecastRequest::CreateWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new CreateWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastExportRequestPrivate
 * \brief The CreateWhatIfForecastExportRequestPrivate class provides private implementation for CreateWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateWhatIfForecastExportRequestPrivate::CreateWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, CreateWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWhatIfForecastExportRequest
 * class' copy constructor.
 */
CreateWhatIfForecastExportRequestPrivate::CreateWhatIfForecastExportRequestPrivate(
    const CreateWhatIfForecastExportRequestPrivate &other, CreateWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
