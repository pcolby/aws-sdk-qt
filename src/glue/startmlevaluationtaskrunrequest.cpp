/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
