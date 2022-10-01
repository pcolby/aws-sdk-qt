// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopflowrequest.h"
#include "stopflowrequest_p.h"
#include "stopflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StopFlowRequest
 * \brief The StopFlowRequest class provides an interface for MediaConnect StopFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::stopFlow
 */

/*!
 * Constructs a copy of \a other.
 */
StopFlowRequest::StopFlowRequest(const StopFlowRequest &other)
    : MediaConnectRequest(new StopFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopFlowRequest object.
 */
StopFlowRequest::StopFlowRequest()
    : MediaConnectRequest(new StopFlowRequestPrivate(MediaConnectRequest::StopFlowAction, this))
{

}

/*!
 * \reimp
 */
bool StopFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopFlowRequest::response(QNetworkReply * const reply) const
{
    return new StopFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::StopFlowRequestPrivate
 * \brief The StopFlowRequestPrivate class provides private implementation for StopFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StopFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
StopFlowRequestPrivate::StopFlowRequestPrivate(
    const MediaConnectRequest::Action action, StopFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopFlowRequest
 * class' copy constructor.
 */
StopFlowRequestPrivate::StopFlowRequestPrivate(
    const StopFlowRequestPrivate &other, StopFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
