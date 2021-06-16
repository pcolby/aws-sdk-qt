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

#include "putrawmessagecontentrequest.h"
#include "putrawmessagecontentrequest_p.h"
#include "putrawmessagecontentresponse.h"
#include "workmailmessageflowrequest_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::PutRawMessageContentRequest
 * \brief The PutRawMessageContentRequest class provides an interface for WorkMailMessageFlow PutRawMessageContent requests.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 *
 *  The WorkMail Message Flow API provides access to email messages as they are being sent and received by a WorkMail
 *
 * \sa WorkMailMessageFlowClient::putRawMessageContent
 */

/*!
 * Constructs a copy of \a other.
 */
PutRawMessageContentRequest::PutRawMessageContentRequest(const PutRawMessageContentRequest &other)
    : WorkMailMessageFlowRequest(new PutRawMessageContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRawMessageContentRequest object.
 */
PutRawMessageContentRequest::PutRawMessageContentRequest()
    : WorkMailMessageFlowRequest(new PutRawMessageContentRequestPrivate(WorkMailMessageFlowRequest::PutRawMessageContentAction, this))
{

}

/*!
 * \reimp
 */
bool PutRawMessageContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRawMessageContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRawMessageContentRequest::response(QNetworkReply * const reply) const
{
    return new PutRawMessageContentResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMailMessageFlow::PutRawMessageContentRequestPrivate
 * \brief The PutRawMessageContentRequestPrivate class provides private implementation for PutRawMessageContentRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a PutRawMessageContentRequestPrivate object for WorkMailMessageFlow \a action,
 * with public implementation \a q.
 */
PutRawMessageContentRequestPrivate::PutRawMessageContentRequestPrivate(
    const WorkMailMessageFlowRequest::Action action, PutRawMessageContentRequest * const q)
    : WorkMailMessageFlowRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRawMessageContentRequest
 * class' copy constructor.
 */
PutRawMessageContentRequestPrivate::PutRawMessageContentRequestPrivate(
    const PutRawMessageContentRequestPrivate &other, PutRawMessageContentRequest * const q)
    : WorkMailMessageFlowRequestPrivate(other, q)
{

}

} // namespace WorkMailMessageFlow
} // namespace QtAws
