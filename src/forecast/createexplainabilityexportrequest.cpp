// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexplainabilityexportrequest.h"
#include "createexplainabilityexportrequest_p.h"
#include "createexplainabilityexportresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportRequest
 * \brief The CreateExplainabilityExportRequest class provides an interface for Forecast CreateExplainabilityExport requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainabilityExport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExplainabilityExportRequest::CreateExplainabilityExportRequest(const CreateExplainabilityExportRequest &other)
    : ForecastRequest(new CreateExplainabilityExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExplainabilityExportRequest object.
 */
CreateExplainabilityExportRequest::CreateExplainabilityExportRequest()
    : ForecastRequest(new CreateExplainabilityExportRequestPrivate(ForecastRequest::CreateExplainabilityExportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExplainabilityExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExplainabilityExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExplainabilityExportRequest::response(QNetworkReply * const reply) const
{
    return new CreateExplainabilityExportResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityExportRequestPrivate
 * \brief The CreateExplainabilityExportRequestPrivate class provides private implementation for CreateExplainabilityExportRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityExportRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateExplainabilityExportRequestPrivate::CreateExplainabilityExportRequestPrivate(
    const ForecastRequest::Action action, CreateExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExplainabilityExportRequest
 * class' copy constructor.
 */
CreateExplainabilityExportRequestPrivate::CreateExplainabilityExportRequestPrivate(
    const CreateExplainabilityExportRequestPrivate &other, CreateExplainabilityExportRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
