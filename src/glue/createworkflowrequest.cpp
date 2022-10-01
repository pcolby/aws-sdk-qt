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

#include "createworkflowrequest.h"
#include "createworkflowrequest_p.h"
#include "createworkflowresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateWorkflowRequest
 * \brief The CreateWorkflowRequest class provides an interface for Glue CreateWorkflow requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkflowRequest::CreateWorkflowRequest(const CreateWorkflowRequest &other)
    : GlueRequest(new CreateWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkflowRequest object.
 */
CreateWorkflowRequest::CreateWorkflowRequest()
    : GlueRequest(new CreateWorkflowRequestPrivate(GlueRequest::CreateWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateWorkflowRequestPrivate
 * \brief The CreateWorkflowRequestPrivate class provides private implementation for CreateWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateWorkflowRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateWorkflowRequestPrivate::CreateWorkflowRequestPrivate(
    const GlueRequest::Action action, CreateWorkflowRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkflowRequest
 * class' copy constructor.
 */
CreateWorkflowRequestPrivate::CreateWorkflowRequestPrivate(
    const CreateWorkflowRequestPrivate &other, CreateWorkflowRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
