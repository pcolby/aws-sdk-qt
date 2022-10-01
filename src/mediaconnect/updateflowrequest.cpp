// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowrequest.h"
#include "updateflowrequest_p.h"
#include "updateflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowRequest
 * \brief The UpdateFlowRequest class provides an interface for MediaConnect UpdateFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlow
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowRequest::UpdateFlowRequest(const UpdateFlowRequest &other)
    : MediaConnectRequest(new UpdateFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowRequest object.
 */
UpdateFlowRequest::UpdateFlowRequest()
    : MediaConnectRequest(new UpdateFlowRequestPrivate(MediaConnectRequest::UpdateFlowAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowRequestPrivate
 * \brief The UpdateFlowRequestPrivate class provides private implementation for UpdateFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowRequestPrivate::UpdateFlowRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowRequest
 * class' copy constructor.
 */
UpdateFlowRequestPrivate::UpdateFlowRequestPrivate(
    const UpdateFlowRequestPrivate &other, UpdateFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
