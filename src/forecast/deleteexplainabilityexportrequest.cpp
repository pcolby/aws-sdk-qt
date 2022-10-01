// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexplainabilityexportrequest.h"
#include "deleteexplainabilityexportrequest_p.h"
#include "deleteexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportRequest
 * \brief The DeleteExplainabilityExportRequest class provides an interface for Forecast DeleteExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExplainabilityExportRequest::DeleteExplainabilityExportRequest(const DeleteExplainabilityExportRequest &other)
    : ForecastRequest(new DeleteExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExplainabilityExportRequest object.
 */
DeleteExplainabilityExportRequest::DeleteExplainabilityExportRequest()
    : ForecastRequest(new DeleteExplainabilityExportRequestPrivate(ForecastRequest::DeleteExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityExportRequestPrivate
 * \brief The DeleteExplainabilityExportRequestPrivate class provides private implementation for DeleteExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteExplainabilityExportRequestPrivate::DeleteExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, DeleteExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExplainabilityExportRequest
 * class' copy constructor.
 */
DeleteExplainabilityExportRequestPrivate::DeleteExplainabilityExportRequestPrivate(
    const DeleteExplainabilityExportRequestPrivate &other, DeleteExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
