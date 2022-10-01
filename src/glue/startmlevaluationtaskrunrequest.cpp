// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmlevaluationtaskrunrequest.h"
#include "startmlevaluationtaskrunrequest_p.h"
#include "startmlevaluationtaskrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartMLEvaluationTaskRunRequest
 * \brief The StartMLEvaluationTaskRunRequest class provides an interface for Glue StartMLEvaluationTaskRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::startMLEvaluationTaskRun
 */

/*!
 * Constructs a copy of \a other.
 */
StartMLEvaluationTaskRunRequest::StartMLEvaluationTaskRunRequest(const StartMLEvaluationTaskRunRequest &other)
    : GlueRequest(new StartMLEvaluationTaskRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartMLEvaluationTaskRunRequest object.
 */
StartMLEvaluationTaskRunRequest::StartMLEvaluationTaskRunRequest()
    : GlueRequest(new StartMLEvaluationTaskRunRequestPrivate(GlueRequest::StartMLEvaluationTaskRunAction, this))
{

}

/*!
 * \reimp
 */
bool StartMLEvaluationTaskRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartMLEvaluationTaskRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartMLEvaluationTaskRunRequest::response(QNetworkReply * const reply) const
{
    return new StartMLEvaluationTaskRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartMLEvaluationTaskRunRequestPrivate
 * \brief The StartMLEvaluationTaskRunRequestPrivate class provides private implementation for StartMLEvaluationTaskRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartMLEvaluationTaskRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartMLEvaluationTaskRunRequestPrivate::StartMLEvaluationTaskRunRequestPrivate(
    const GlueRequest::Action action, StartMLEvaluationTaskRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartMLEvaluationTaskRunRequest
 * class' copy constructor.
 */
StartMLEvaluationTaskRunRequestPrivate::StartMLEvaluationTaskRunRequestPrivate(
    const StartMLEvaluationTaskRunRequestPrivate &other, StartMLEvaluationTaskRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
