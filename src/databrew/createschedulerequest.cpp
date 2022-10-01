// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschedulerequest.h"
#include "createschedulerequest_p.h"
#include "createscheduleresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateScheduleRequest
 * \brief The CreateScheduleRequest class provides an interface for DataBrew CreateSchedule requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateScheduleRequest::CreateScheduleRequest(const CreateScheduleRequest &other)
    : DataBrewRequest(new CreateScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateScheduleRequest object.
 */
CreateScheduleRequest::CreateScheduleRequest()
    : DataBrewRequest(new CreateScheduleRequestPrivate(DataBrewRequest::CreateScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScheduleRequest::response(QNetworkReply * const reply) const
{
    return new CreateScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateScheduleRequestPrivate
 * \brief The CreateScheduleRequestPrivate class provides private implementation for CreateScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateScheduleRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateScheduleRequestPrivate::CreateScheduleRequestPrivate(
    const DataBrewRequest::Action action, CreateScheduleRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateScheduleRequest
 * class' copy constructor.
 */
CreateScheduleRequestPrivate::CreateScheduleRequestPrivate(
    const CreateScheduleRequestPrivate &other, CreateScheduleRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
