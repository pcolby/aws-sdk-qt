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

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DeleteJobRequest
 * \brief The DeleteJobRequest class provides an interface for GlueDataBrew DeleteJob requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::deleteJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : GlueDataBrewRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : GlueDataBrewRequest(new DeleteJobRequestPrivate(GlueDataBrewRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::DeleteJobRequestPrivate
 * \brief The DeleteJobRequestPrivate class provides private implementation for DeleteJobRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DeleteJobRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const GlueDataBrewRequest::Action action, DeleteJobRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
