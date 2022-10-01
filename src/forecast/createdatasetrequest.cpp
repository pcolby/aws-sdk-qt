// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetRequest
 * \brief The CreateDatasetRequest class provides an interface for Forecast CreateDataset requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDataset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetRequest::CreateDatasetRequest(const CreateDatasetRequest &other)
    : ForecastRequest(new CreateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetRequest object.
 */
CreateDatasetRequest::CreateDatasetRequest()
    : ForecastRequest(new CreateDatasetRequestPrivate(ForecastRequest::CreateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateDatasetRequestPrivate
 * \brief The CreateDatasetRequestPrivate class provides private implementation for CreateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const ForecastRequest::Action action, CreateDatasetRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetRequest
 * class' copy constructor.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const CreateDatasetRequestPrivate &other, CreateDatasetRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
