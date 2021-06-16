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

#include "describeschedulerequest.h"
#include "describeschedulerequest_p.h"
#include "describescheduleresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DescribeScheduleRequest
 * \brief The DescribeScheduleRequest class provides an interface for GlueDataBrew DescribeSchedule requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::describeSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScheduleRequest::DescribeScheduleRequest(const DescribeScheduleRequest &other)
    : GlueDataBrewRequest(new DescribeScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScheduleRequest object.
 */
DescribeScheduleRequest::DescribeScheduleRequest()
    : GlueDataBrewRequest(new DescribeScheduleRequestPrivate(GlueDataBrewRequest::DescribeScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::DescribeScheduleRequestPrivate
 * \brief The DescribeScheduleRequestPrivate class provides private implementation for DescribeScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DescribeScheduleRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DescribeScheduleRequestPrivate::DescribeScheduleRequestPrivate(
    const GlueDataBrewRequest::Action action, DescribeScheduleRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduleRequest
 * class' copy constructor.
 */
DescribeScheduleRequestPrivate::DescribeScheduleRequestPrivate(
    const DescribeScheduleRequestPrivate &other, DescribeScheduleRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
