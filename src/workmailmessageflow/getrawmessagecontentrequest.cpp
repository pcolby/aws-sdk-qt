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

#include "getrawmessagecontentrequest.h"
#include "getrawmessagecontentrequest_p.h"
#include "getrawmessagecontentresponse.h"
#include "workmailmessageflowrequest_p.h"

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::GetRawMessageContentRequest
 * \brief The GetRawMessageContentRequest class provides an interface for WorkMailMessageFlow GetRawMessageContent requests.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 *
 *  The WorkMail Message Flow API provides access to email messages as they are being sent and received by a WorkMail
 *
 * \sa WorkMailMessageFlowClient::getRawMessageContent
 */

/*!
 * Constructs a copy of \a other.
 */
GetRawMessageContentRequest::GetRawMessageContentRequest(const GetRawMessageContentRequest &other)
    : WorkMailMessageFlowRequest(new GetRawMessageContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRawMessageContentRequest object.
 */
GetRawMessageContentRequest::GetRawMessageContentRequest()
    : WorkMailMessageFlowRequest(new GetRawMessageContentRequestPrivate(WorkMailMessageFlowRequest::GetRawMessageContentAction, this))
{

}

/*!
 * \reimp
 */
bool GetRawMessageContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRawMessageContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRawMessageContentRequest::response(QNetworkReply * const reply) const
{
    return new GetRawMessageContentResponse(*this, reply);
}

/*!
 * \class QtAws::WorkMailMessageFlow::GetRawMessageContentRequestPrivate
 * \brief The GetRawMessageContentRequestPrivate class provides private implementation for GetRawMessageContentRequest.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a GetRawMessageContentRequestPrivate object for WorkMailMessageFlow \a action,
 * with public implementation \a q.
 */
GetRawMessageContentRequestPrivate::GetRawMessageContentRequestPrivate(
    const WorkMailMessageFlowRequest::Action action, GetRawMessageContentRequest * const q)
    : WorkMailMessageFlowRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRawMessageContentRequest
 * class' copy constructor.
 */
GetRawMessageContentRequestPrivate::GetRawMessageContentRequestPrivate(
    const GetRawMessageContentRequestPrivate &other, GetRawMessageContentRequest * const q)
    : WorkMailMessageFlowRequestPrivate(other, q)
{

}

} // namespace WorkMailMessageFlow
} // namespace QtAws
