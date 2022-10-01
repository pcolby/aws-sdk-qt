/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteschedulerequest.h"
#include "deleteschedulerequest_p.h"
#include "deletescheduleresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteScheduleRequest
 * \brief The DeleteScheduleRequest class provides an interface for DataBrew DeleteSchedule requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScheduleRequest::DeleteScheduleRequest(const DeleteScheduleRequest &other)
    : DataBrewRequest(new DeleteScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScheduleRequest object.
 */
DeleteScheduleRequest::DeleteScheduleRequest()
    : DataBrewRequest(new DeleteScheduleRequestPrivate(DataBrewRequest::DeleteScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DeleteScheduleRequestPrivate
 * \brief The DeleteScheduleRequestPrivate class provides private implementation for DeleteScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteScheduleRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DeleteScheduleRequestPrivate::DeleteScheduleRequestPrivate(
    const DataBrewRequest::Action action, DeleteScheduleRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduleRequest
 * class' copy constructor.
 */
DeleteScheduleRequestPrivate::DeleteScheduleRequestPrivate(
    const DeleteScheduleRequestPrivate &other, DeleteScheduleRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
