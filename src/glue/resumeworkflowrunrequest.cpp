// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeworkflowrunrequest.h"
#include "resumeworkflowrunrequest_p.h"
#include "resumeworkflowrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ResumeWorkflowRunRequest
 * \brief The ResumeWorkflowRunRequest class provides an interface for Glue ResumeWorkflowRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::resumeWorkflowRun
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeWorkflowRunRequest::ResumeWorkflowRunRequest(const ResumeWorkflowRunRequest &other)
    : GlueRequest(new ResumeWorkflowRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeWorkflowRunRequest object.
 */
ResumeWorkflowRunRequest::ResumeWorkflowRunRequest()
    : GlueRequest(new ResumeWorkflowRunRequestPrivate(GlueRequest::ResumeWorkflowRunAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeWorkflowRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeWorkflowRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeWorkflowRunRequest::response(QNetworkReply * const reply) const
{
    return new ResumeWorkflowRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ResumeWorkflowRunRequestPrivate
 * \brief The ResumeWorkflowRunRequestPrivate class provides private implementation for ResumeWorkflowRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ResumeWorkflowRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ResumeWorkflowRunRequestPrivate::ResumeWorkflowRunRequestPrivate(
    const GlueRequest::Action action, ResumeWorkflowRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeWorkflowRunRequest
 * class' copy constructor.
 */
ResumeWorkflowRunRequestPrivate::ResumeWorkflowRunRequestPrivate(
    const ResumeWorkflowRunRequestPrivate &other, ResumeWorkflowRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
