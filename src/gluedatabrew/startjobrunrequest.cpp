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

#include "startjobrunrequest.h"
#include "startjobrunrequest_p.h"
#include "startjobrunresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::StartJobRunRequest
 * \brief The StartJobRunRequest class provides an interface for GlueDataBrew StartJobRun requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::startJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartJobRunRequest::StartJobRunRequest(const StartJobRunRequest &other)
    : GlueDataBrewRequest(new StartJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartJobRunRequest object.
 */
StartJobRunRequest::StartJobRunRequest()
    : GlueDataBrewRequest(new StartJobRunRequestPrivate(GlueDataBrewRequest::StartJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartJobRunRequest::response(QNetworkReply * const reply) const
{
    return new StartJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::StartJobRunRequestPrivate
 * \brief The StartJobRunRequestPrivate class provides private implementation for StartJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a StartJobRunRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const GlueDataBrewRequest::Action action, StartJobRunRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartJobRunRequest
 * class' copy constructor.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const StartJobRunRequestPrivate &other, StartJobRunRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
