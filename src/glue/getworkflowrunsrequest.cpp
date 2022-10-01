// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
