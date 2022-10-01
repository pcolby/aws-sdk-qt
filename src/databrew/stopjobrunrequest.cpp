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
