// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetgrouprequest.h"
#include "deletedatasetgrouprequest_p.h"
#include "deletedatasetgroupresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupRequest
 * \brief The DeleteDatasetGroupRequest class provides an interface for Forecast DeleteDatasetGroup requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteDatasetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest(const DeleteDatasetGroupRequest &other)
    : ForecastRequest(new DeleteDatasetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetGroupRequest object.
 */
DeleteDatasetGroupRequest::DeleteDatasetGroupRequest()
    : ForecastRequest(new DeleteDatasetGroupRequestPrivate(ForecastRequest::DeleteDatasetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteDatasetGroupRequestPrivate
 * \brief The DeleteDatasetGroupRequestPrivate class provides private implementation for DeleteDatasetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteDatasetGroupRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const ForecastRequest::Action action, DeleteDatasetGroupRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetGroupRequest
 * class' copy constructor.
 */
DeleteDatasetGroupRequestPrivate::DeleteDatasetGroupRequestPrivate(
    const DeleteDatasetGroupRequestPrivate &other, DeleteDatasetGroupRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
