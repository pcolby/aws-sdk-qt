// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetRequest
 * \brief The DeleteDatasetRequest class provides an interface for Forecast DeleteDataset requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : ForecastRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : ForecastRequest(new DeleteDatasetRequestPrivate(ForecastRequest::DeleteDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteDatasetRequestPrivate
 * \brief The DeleteDatasetRequestPrivate class provides private implementation for DeleteDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const ForecastRequest::Action action, DeleteDatasetRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
