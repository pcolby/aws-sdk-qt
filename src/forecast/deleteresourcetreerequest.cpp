// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcetreerequest.h"
#include "deleteresourcetreerequest_p.h"
#include "deleteresourcetreeresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteResourceTreeRequest
 * \brief The DeleteResourceTreeRequest class provides an interface for Forecast DeleteResourceTree requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteResourceTree
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourceTreeRequest::DeleteResourceTreeRequest(const DeleteResourceTreeRequest &other)
    : ForecastRequest(new DeleteResourceTreeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourceTreeRequest object.
 */
DeleteResourceTreeRequest::DeleteResourceTreeRequest()
    : ForecastRequest(new DeleteResourceTreeRequestPrivate(ForecastRequest::DeleteResourceTreeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourceTreeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourceTreeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourceTreeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourceTreeResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteResourceTreeRequestPrivate
 * \brief The DeleteResourceTreeRequestPrivate class provides private implementation for DeleteResourceTreeRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteResourceTreeRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteResourceTreeRequestPrivate::DeleteResourceTreeRequestPrivate(
    const ForecastRequest::Action action, DeleteResourceTreeRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourceTreeRequest
 * class' copy constructor.
 */
DeleteResourceTreeRequestPrivate::DeleteResourceTreeRequestPrivate(
    const DeleteResourceTreeRequestPrivate &other, DeleteResourceTreeRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
