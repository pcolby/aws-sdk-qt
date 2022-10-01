// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopworkflowrunrequest.h"
#include "stopworkflowrunrequest_p.h"
#include "stopworkflowrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopWorkflowRunRequest
 * \brief The StopWorkflowRunRequest class provides an interface for Glue StopWorkflowRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopWorkflowRun
 */

/*!
 * Constructs a copy of \a other.
 */
StopWorkflowRunRequest::StopWorkflowRunRequest(const StopWorkflowRunRequest &other)
    : GlueRequest(new StopWorkflowRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopWorkflowRunRequest object.
 */
StopWorkflowRunRequest::StopWorkflowRunRequest()
    : GlueRequest(new StopWorkflowRunRequestPrivate(GlueRequest::StopWorkflowRunAction, this))
{

}

/*!
 * \reimp
 */
bool StopWorkflowRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopWorkflowRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopWorkflowRunRequest::response(QNetworkReply * const reply) const
{
    return new StopWorkflowRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopWorkflowRunRequestPrivate
 * \brief The StopWorkflowRunRequestPrivate class provides private implementation for StopWorkflowRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopWorkflowRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopWorkflowRunRequestPrivate::StopWorkflowRunRequestPrivate(
    const GlueRequest::Action action, StopWorkflowRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopWorkflowRunRequest
 * class' copy constructor.
 */
StopWorkflowRunRequestPrivate::StopWorkflowRunRequestPrivate(
    const StopWorkflowRunRequestPrivate &other, StopWorkflowRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
