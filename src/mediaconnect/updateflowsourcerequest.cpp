// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowsourcerequest.h"
#include "updateflowsourcerequest_p.h"
#include "updateflowsourceresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceRequest
 * \brief The UpdateFlowSourceRequest class provides an interface for MediaConnect UpdateFlowSource requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowSource
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFlowSourceRequest::UpdateFlowSourceRequest(const UpdateFlowSourceRequest &other)
    : MediaConnectRequest(new UpdateFlowSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFlowSourceRequest object.
 */
UpdateFlowSourceRequest::UpdateFlowSourceRequest()
    : MediaConnectRequest(new UpdateFlowSourceRequestPrivate(MediaConnectRequest::UpdateFlowSourceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFlowSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFlowSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFlowSourceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFlowSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceRequestPrivate
 * \brief The UpdateFlowSourceRequestPrivate class provides private implementation for UpdateFlowSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowSourceRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
UpdateFlowSourceRequestPrivate::UpdateFlowSourceRequestPrivate(
    const MediaConnectRequest::Action action, UpdateFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFlowSourceRequest
 * class' copy constructor.
 */
UpdateFlowSourceRequestPrivate::UpdateFlowSourceRequestPrivate(
    const UpdateFlowSourceRequestPrivate &other, UpdateFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
