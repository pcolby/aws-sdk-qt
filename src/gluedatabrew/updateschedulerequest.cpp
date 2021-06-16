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

#include "updateschedulerequest.h"
#include "updateschedulerequest_p.h"
#include "updatescheduleresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::UpdateScheduleRequest
 * \brief The UpdateScheduleRequest class provides an interface for GlueDataBrew UpdateSchedule requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::updateSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateScheduleRequest::UpdateScheduleRequest(const UpdateScheduleRequest &other)
    : GlueDataBrewRequest(new UpdateScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateScheduleRequest object.
 */
UpdateScheduleRequest::UpdateScheduleRequest()
    : GlueDataBrewRequest(new UpdateScheduleRequestPrivate(GlueDataBrewRequest::UpdateScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::UpdateScheduleRequestPrivate
 * \brief The UpdateScheduleRequestPrivate class provides private implementation for UpdateScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a UpdateScheduleRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
UpdateScheduleRequestPrivate::UpdateScheduleRequestPrivate(
    const GlueDataBrewRequest::Action action, UpdateScheduleRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateScheduleRequest
 * class' copy constructor.
 */
UpdateScheduleRequestPrivate::UpdateScheduleRequestPrivate(
    const UpdateScheduleRequestPrivate &other, UpdateScheduleRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
