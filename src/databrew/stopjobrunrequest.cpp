// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopjobrunrequest.h"
#include "stopjobrunrequest_p.h"
#include "stopjobrunresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::StopJobRunRequest
 * \brief The StopJobRunRequest class provides an interface for DataBrew StopJobRun requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::stopJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
StopJobRunRequest::StopJobRunRequest(const StopJobRunRequest &other)
    : DataBrewRequest(new StopJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopJobRunRequest object.
 */
StopJobRunRequest::StopJobRunRequest()
    : DataBrewRequest(new StopJobRunRequestPrivate(DataBrewRequest::StopJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool StopJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopJobRunRequest::response(QNetworkReply * const reply) const
{
    return new StopJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::StopJobRunRequestPrivate
 * \brief The StopJobRunRequestPrivate class provides private implementation for StopJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a StopJobRunRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
StopJobRunRequestPrivate::StopJobRunRequestPrivate(
    const DataBrewRequest::Action action, StopJobRunRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopJobRunRequest
 * class' copy constructor.
 */
StopJobRunRequestPrivate::StopJobRunRequestPrivate(
    const StopJobRunRequestPrivate &other, StopJobRunRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
