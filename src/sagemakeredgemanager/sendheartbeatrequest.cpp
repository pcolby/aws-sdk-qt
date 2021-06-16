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

#include "sendheartbeatrequest.h"
#include "sendheartbeatrequest_p.h"
#include "sendheartbeatresponse.h"
#include "sagemakeredgemanagerrequest_p.h"

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::SendHeartbeatRequest
 * \brief The SendHeartbeatRequest class provides an interface for SagemakerEdgeManager SendHeartbeat requests.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeManagerClient::sendHeartbeat
 */

/*!
 * Constructs a copy of \a other.
 */
SendHeartbeatRequest::SendHeartbeatRequest(const SendHeartbeatRequest &other)
    : SagemakerEdgeManagerRequest(new SendHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendHeartbeatRequest object.
 */
SendHeartbeatRequest::SendHeartbeatRequest()
    : SagemakerEdgeManagerRequest(new SendHeartbeatRequestPrivate(SagemakerEdgeManagerRequest::SendHeartbeatAction, this))
{

}

/*!
 * \reimp
 */
bool SendHeartbeatRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendHeartbeatResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new SendHeartbeatResponse(*this, reply);
}

/*!
 * \class QtAws::SagemakerEdgeManager::SendHeartbeatRequestPrivate
 * \brief The SendHeartbeatRequestPrivate class provides private implementation for SendHeartbeatRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SendHeartbeatRequestPrivate object for SagemakerEdgeManager \a action,
 * with public implementation \a q.
 */
SendHeartbeatRequestPrivate::SendHeartbeatRequestPrivate(
    const SagemakerEdgeManagerRequest::Action action, SendHeartbeatRequest * const q)
    : SagemakerEdgeManagerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendHeartbeatRequest
 * class' copy constructor.
 */
SendHeartbeatRequestPrivate::SendHeartbeatRequestPrivate(
    const SendHeartbeatRequestPrivate &other, SendHeartbeatRequest * const q)
    : SagemakerEdgeManagerRequestPrivate(other, q)
{

}

} // namespace SagemakerEdgeManager
} // namespace QtAws
