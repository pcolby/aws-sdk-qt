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
