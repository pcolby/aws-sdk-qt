// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewhatifforecastexportrequest.h"
#include "deletewhatifforecastexportrequest_p.h"
#include "deletewhatifforecastexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportRequest
 * \brief The DeleteWhatIfForecastExportRequest class provides an interface for Forecast DeleteWhatIfForecastExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecastExport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWhatIfForecastExportRequest::DeleteWhatIfForecastExportRequest(const DeleteWhatIfForecastExportRequest &other)
    : ForecastRequest(new DeleteWhatIfForecastExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWhatIfForecastExportRequest object.
 */
DeleteWhatIfForecastExportRequest::DeleteWhatIfForecastExportRequest()
    : ForecastRequest(new DeleteWhatIfForecastExportRequestPrivate(ForecastRequest::DeleteWhatIfForecastExportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWhatIfForecastExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWhatIfForecastExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWhatIfForecastExportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWhatIfForecastExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastExportRequestPrivate
 * \brief The DeleteWhatIfForecastExportRequestPrivate class provides private implementation for DeleteWhatIfForecastExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteWhatIfForecastExportRequestPrivate::DeleteWhatIfForecastExportRequestPrivate(
    const ForecastRequest::Action action, DeleteWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWhatIfForecastExportRequest
 * class' copy constructor.
 */
DeleteWhatIfForecastExportRequestPrivate::DeleteWhatIfForecastExportRequestPrivate(
    const DeleteWhatIfForecastExportRequestPrivate &other, DeleteWhatIfForecastExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
