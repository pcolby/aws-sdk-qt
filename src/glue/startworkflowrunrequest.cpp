// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startworkflowrunrequest.h"
#include "startworkflowrunrequest_p.h"
#include "startworkflowrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartWorkflowRunRequest
 * \brief The StartWorkflowRunRequest class provides an interface for Glue StartWorkflowRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startWorkflowRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartWorkflowRunRequest::StartWorkflowRunRequest(const StartWorkflowRunRequest &other)
    : GlueRequest(new StartWorkflowRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartWorkflowRunRequest object.
 */
StartWorkflowRunRequest::StartWorkflowRunRequest()
    : GlueRequest(new StartWorkflowRunRequestPrivate(GlueRequest::StartWorkflowRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartWorkflowRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartWorkflowRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartWorkflowRunRequest::response(QNetworkReply * const reply) const
{
    return new StartWorkflowRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartWorkflowRunRequestPrivate
 * \brief The StartWorkflowRunRequestPrivate class provides private implementation for StartWorkflowRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartWorkflowRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartWorkflowRunRequestPrivate::StartWorkflowRunRequestPrivate(
    const GlueRequest::Action action, StartWorkflowRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartWorkflowRunRequest
 * class' copy constructor.
 */
StartWorkflowRunRequestPrivate::StartWorkflowRunRequestPrivate(
    const StartWorkflowRunRequestPrivate &other, StartWorkflowRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
