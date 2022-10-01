// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschedulerequest.h"
#include "describeschedulerequest_p.h"
#include "describescheduleresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeScheduleRequest
 * \brief The DescribeScheduleRequest class provides an interface for DataBrew DescribeSchedule requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScheduleRequest::DescribeScheduleRequest(const DescribeScheduleRequest &other)
    : DataBrewRequest(new DescribeScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScheduleRequest object.
 */
DescribeScheduleRequest::DescribeScheduleRequest()
    : DataBrewRequest(new DescribeScheduleRequestPrivate(DataBrewRequest::DescribeScheduleAction, this))
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
 * \class QtAws::DataBrew::DescribeScheduleRequestPrivate
 * \brief The DescribeScheduleRequestPrivate class provides private implementation for DescribeScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeScheduleRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeScheduleRequestPrivate::DescribeScheduleRequestPrivate(
    const DataBrewRequest::Action action, DescribeScheduleRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
