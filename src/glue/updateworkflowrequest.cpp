// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
