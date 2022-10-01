// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetimportjobrequest.h"
#include "deletedatasetimportjobrequest_p.h"
#include "deletedatasetimportjobresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetImportJobRequest
 * \brief The DeleteDatasetImportJobRequest class provides an interface for Forecast DeleteDatasetImportJob requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDatasetImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetImportJobRequest::DeleteDatasetImportJobRequest(const DeleteDatasetImportJobRequest &other)
    : ForecastRequest(new DeleteDatasetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetImportJobRequest object.
 */
DeleteDatasetImportJobRequest::DeleteDatasetImportJobRequest()
    : ForecastRequest(new DeleteDatasetImportJobRequestPrivate(ForecastRequest::DeleteDatasetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteDatasetImportJobRequestPrivate
 * \brief The DeleteDatasetImportJobRequestPrivate class provides private implementation for DeleteDatasetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetImportJobRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteDatasetImportJobRequestPrivate::DeleteDatasetImportJobRequestPrivate(
    const ForecastRequest::Action action, DeleteDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetImportJobRequest
 * class' copy constructor.
 */
DeleteDatasetImportJobRequestPrivate::DeleteDatasetImportJobRequestPrivate(
    const DeleteDatasetImportJobRequestPrivate &other, DeleteDatasetImportJobRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
