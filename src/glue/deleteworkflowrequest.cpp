// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
