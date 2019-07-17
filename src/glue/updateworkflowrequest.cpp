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

#include "updateworkflowrequest.h"
#include "updateworkflowrequest_p.h"
#include "updateworkflowresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateWorkflowRequest
 * \brief The UpdateWorkflowRequest class provides an interface for Glue UpdateWorkflow requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkflowRequest::UpdateWorkflowRequest(const UpdateWorkflowRequest &other)
    : GlueRequest(new UpdateWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkflowRequest object.
 */
UpdateWorkflowRequest::UpdateWorkflowRequest()
    : GlueRequest(new UpdateWorkflowRequestPrivate(GlueRequest::UpdateWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateWorkflowRequestPrivate
 * \brief The UpdateWorkflowRequestPrivate class provides private implementation for UpdateWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateWorkflowRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateWorkflowRequestPrivate::UpdateWorkflowRequestPrivate(
    const GlueRequest::Action action, UpdateWorkflowRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkflowRequest
 * class' copy constructor.
 */
UpdateWorkflowRequestPrivate::UpdateWorkflowRequestPrivate(
    const UpdateWorkflowRequestPrivate &other, UpdateWorkflowRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
