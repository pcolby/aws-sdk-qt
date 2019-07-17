/*
    Copyright 2013-2019 Paul Colby

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

#include "getworkflowrunrequest.h"
#include "getworkflowrunrequest_p.h"
#include "getworkflowrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunRequest
 * \brief The GetWorkflowRunRequest class provides an interface for Glue GetWorkflowRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getWorkflowRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkflowRunRequest::GetWorkflowRunRequest(const GetWorkflowRunRequest &other)
    : GlueRequest(new GetWorkflowRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkflowRunRequest object.
 */
GetWorkflowRunRequest::GetWorkflowRunRequest()
    : GlueRequest(new GetWorkflowRunRequestPrivate(GlueRequest::GetWorkflowRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkflowRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkflowRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkflowRunRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkflowRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetWorkflowRunRequestPrivate
 * \brief The GetWorkflowRunRequestPrivate class provides private implementation for GetWorkflowRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetWorkflowRunRequestPrivate::GetWorkflowRunRequestPrivate(
    const GlueRequest::Action action, GetWorkflowRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkflowRunRequest
 * class' copy constructor.
 */
GetWorkflowRunRequestPrivate::GetWorkflowRunRequestPrivate(
    const GetWorkflowRunRequestPrivate &other, GetWorkflowRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
