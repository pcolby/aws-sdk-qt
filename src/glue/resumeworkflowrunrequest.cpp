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

#include "resumeworkflowrunrequest.h"
#include "resumeworkflowrunrequest_p.h"
#include "resumeworkflowrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResumeWorkflowRunRequest
 * \brief The ResumeWorkflowRunRequest class provides an interface for Glue ResumeWorkflowRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::resumeWorkflowRun
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeWorkflowRunRequest::ResumeWorkflowRunRequest(const ResumeWorkflowRunRequest &other)
    : GlueRequest(new ResumeWorkflowRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeWorkflowRunRequest object.
 */
ResumeWorkflowRunRequest::ResumeWorkflowRunRequest()
    : GlueRequest(new ResumeWorkflowRunRequestPrivate(GlueRequest::ResumeWorkflowRunAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeWorkflowRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeWorkflowRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeWorkflowRunRequest::response(QNetworkReply * const reply) const
{
    return new ResumeWorkflowRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ResumeWorkflowRunRequestPrivate
 * \brief The ResumeWorkflowRunRequestPrivate class provides private implementation for ResumeWorkflowRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResumeWorkflowRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ResumeWorkflowRunRequestPrivate::ResumeWorkflowRunRequestPrivate(
    const GlueRequest::Action action, ResumeWorkflowRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeWorkflowRunRequest
 * class' copy constructor.
 */
ResumeWorkflowRunRequestPrivate::ResumeWorkflowRunRequestPrivate(
    const ResumeWorkflowRunRequestPrivate &other, ResumeWorkflowRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
