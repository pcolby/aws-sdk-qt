/*
    Copyright 2013-2020 Paul Colby

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

#include "getworkflowrunsrequest.h"
#include "getworkflowrunsrequest_p.h"
#include "getworkflowrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunsRequest
 * \brief The GetWorkflowRunsRequest class provides an interface for Glue GetWorkflowRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getWorkflowRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkflowRunsRequest::GetWorkflowRunsRequest(const GetWorkflowRunsRequest &other)
    : GlueRequest(new GetWorkflowRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkflowRunsRequest object.
 */
GetWorkflowRunsRequest::GetWorkflowRunsRequest()
    : GlueRequest(new GetWorkflowRunsRequestPrivate(GlueRequest::GetWorkflowRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkflowRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkflowRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkflowRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkflowRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetWorkflowRunsRequestPrivate
 * \brief The GetWorkflowRunsRequestPrivate class provides private implementation for GetWorkflowRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetWorkflowRunsRequestPrivate::GetWorkflowRunsRequestPrivate(
    const GlueRequest::Action action, GetWorkflowRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkflowRunsRequest
 * class' copy constructor.
 */
GetWorkflowRunsRequestPrivate::GetWorkflowRunsRequestPrivate(
    const GetWorkflowRunsRequestPrivate &other, GetWorkflowRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
