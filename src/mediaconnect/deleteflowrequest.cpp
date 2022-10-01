// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteflowrequest.h"
#include "deleteflowrequest_p.h"
#include "deleteflowresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DeleteFlowRequest
 * \brief The DeleteFlowRequest class provides an interface for MediaConnect DeleteFlow requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::deleteFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFlowRequest::DeleteFlowRequest(const DeleteFlowRequest &other)
    : MediaConnectRequest(new DeleteFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFlowRequest object.
 */
DeleteFlowRequest::DeleteFlowRequest()
    : MediaConnectRequest(new DeleteFlowRequestPrivate(MediaConnectRequest::DeleteFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFlowRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFlowResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::DeleteFlowRequestPrivate
 * \brief The DeleteFlowRequestPrivate class provides private implementation for DeleteFlowRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DeleteFlowRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
DeleteFlowRequestPrivate::DeleteFlowRequestPrivate(
    const MediaConnectRequest::Action action, DeleteFlowRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFlowRequest
 * class' copy constructor.
 */
DeleteFlowRequestPrivate::DeleteFlowRequestPrivate(
    const DeleteFlowRequestPrivate &other, DeleteFlowRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
