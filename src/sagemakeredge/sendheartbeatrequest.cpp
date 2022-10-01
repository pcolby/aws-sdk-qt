// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendheartbeatrequest.h"
#include "sendheartbeatrequest_p.h"
#include "sendheartbeatresponse.h"
#include "sagemakeredgerequest_p.h"

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SendHeartbeatRequest
 * \brief The SendHeartbeatRequest class provides an interface for SagemakerEdge SendHeartbeat requests.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeClient::sendHeartbeat
 */

/*!
 * Constructs a copy of \a other.
 */
SendHeartbeatRequest::SendHeartbeatRequest(const SendHeartbeatRequest &other)
    : SagemakerEdgeRequest(new SendHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendHeartbeatRequest object.
 */
SendHeartbeatRequest::SendHeartbeatRequest()
    : SagemakerEdgeRequest(new SendHeartbeatRequestPrivate(SagemakerEdgeRequest::SendHeartbeatAction, this))
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
 * \class QtAws::SagemakerEdge::SendHeartbeatRequestPrivate
 * \brief The SendHeartbeatRequestPrivate class provides private implementation for SendHeartbeatRequest.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SendHeartbeatRequestPrivate object for SagemakerEdge \a action,
 * with public implementation \a q.
 */
SendHeartbeatRequestPrivate::SendHeartbeatRequestPrivate(
    const SagemakerEdgeRequest::Action action, SendHeartbeatRequest * const q)
    : SagemakerEdgeRequestPrivate(action, q)
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
    : SagemakerEdgeRequestPrivate(other, q)
{

}

} // namespace SagemakerEdge
} // namespace QtAws
