// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowrequest.h"
#include "getworkflowrequest_p.h"
#include "getworkflowresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRequest
 * \brief The GetWorkflowRequest class provides an interface for Glue GetWorkflow requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getWorkflow
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkflowRequest::GetWorkflowRequest(const GetWorkflowRequest &other)
    : GlueRequest(new GetWorkflowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkflowRequest object.
 */
GetWorkflowRequest::GetWorkflowRequest()
    : GlueRequest(new GetWorkflowRequestPrivate(GlueRequest::GetWorkflowAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkflowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkflowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkflowRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkflowResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetWorkflowRequestPrivate
 * \brief The GetWorkflowRequestPrivate class provides private implementation for GetWorkflowRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetWorkflowRequestPrivate::GetWorkflowRequestPrivate(
    const GlueRequest::Action action, GetWorkflowRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkflowRequest
 * class' copy constructor.
 */
GetWorkflowRequestPrivate::GetWorkflowRequestPrivate(
    const GetWorkflowRequestPrivate &other, GetWorkflowRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
