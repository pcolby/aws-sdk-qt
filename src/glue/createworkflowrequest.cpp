// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
