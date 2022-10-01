// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startflowrequest.h"
#include "startflowrequest_p.h"
#include "startflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StartFlowRequest
 * \brief The StartFlowRequest class provides an interface for MediaConnect StartFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::startFlow
 */

/*!
 * Constructs a copy of \a other.
 */
StartFlowRequest::StartFlowRequest(const StartFlowRequest &other)
    : MediaConnectRequest(new StartFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartFlowRequest object.
 */
StartFlowRequest::StartFlowRequest()
    : MediaConnectRequest(new StartFlowRequestPrivate(MediaConnectRequest::StartFlowAction, this))
{

}

/*!
 * \reimp
 */
bool StartFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartFlowRequest::response(QNetworkReply * const reply) const
{
    return new StartFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::StartFlowRequestPrivate
 * \brief The StartFlowRequestPrivate class provides private implementation for StartFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StartFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
StartFlowRequestPrivate::StartFlowRequestPrivate(
    const MediaConnectRequest::Action action, StartFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartFlowRequest
 * class' copy constructor.
 */
StartFlowRequestPrivate::StartFlowRequestPrivate(
    const StartFlowRequestPrivate &other, StartFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
