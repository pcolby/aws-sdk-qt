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

#include "deleteworkflowrequest.h"
#include "deleteworkflowrequest_p.h"
#include "deleteworkflowresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteWorkflowRequest
 * \brief The DeleteWorkflowRequest class provides an interface for Glue DeleteWorkflow requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkflowRequest::DeleteWorkflowRequest(const DeleteWorkflowRequest &other)
    : GlueRequest(new DeleteWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkflowRequest object.
 */
DeleteWorkflowRequest::DeleteWorkflowRequest()
    : GlueRequest(new DeleteWorkflowRequestPrivate(GlueRequest::DeleteWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteWorkflowRequestPrivate
 * \brief The DeleteWorkflowRequestPrivate class provides private implementation for DeleteWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteWorkflowRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteWorkflowRequestPrivate::DeleteWorkflowRequestPrivate(
    const GlueRequest::Action action, DeleteWorkflowRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkflowRequest
 * class' copy constructor.
 */
DeleteWorkflowRequestPrivate::DeleteWorkflowRequestPrivate(
    const DeleteWorkflowRequestPrivate &other, DeleteWorkflowRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
