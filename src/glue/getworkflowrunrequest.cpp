// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
