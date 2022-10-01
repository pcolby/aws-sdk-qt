// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetgrouprequest.h"
#include "updatedatasetgrouprequest_p.h"
#include "updatedatasetgroupresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupRequest
 * \brief The UpdateDatasetGroupRequest class provides an interface for Forecast UpdateDatasetGroup requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::updateDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatasetGroupRequest::UpdateDatasetGroupRequest(const UpdateDatasetGroupRequest &other)
    : ForecastRequest(new UpdateDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatasetGroupRequest object.
 */
UpdateDatasetGroupRequest::UpdateDatasetGroupRequest()
    : ForecastRequest(new UpdateDatasetGroupRequestPrivate(ForecastRequest::UpdateDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::UpdateDatasetGroupRequestPrivate
 * \brief The UpdateDatasetGroupRequestPrivate class provides private implementation for UpdateDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a UpdateDatasetGroupRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
UpdateDatasetGroupRequestPrivate::UpdateDatasetGroupRequestPrivate(
    const ForecastRequest::Action action, UpdateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatasetGroupRequest
 * class' copy constructor.
 */
UpdateDatasetGroupRequestPrivate::UpdateDatasetGroupRequestPrivate(
    const UpdateDatasetGroupRequestPrivate &other, UpdateDatasetGroupRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
