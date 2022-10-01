// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategrouprequest.h"
#include "updategrouprequest_p.h"
#include "updategroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::UpdateGroupRequest
 * \brief The UpdateGroupRequest class provides an interface for XRay UpdateGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::updateGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGroupRequest::UpdateGroupRequest(const UpdateGroupRequest &other)
    : XRayRequest(new UpdateGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGroupRequest object.
 */
UpdateGroupRequest::UpdateGroupRequest()
    : XRayRequest(new UpdateGroupRequestPrivate(XRayRequest::UpdateGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::UpdateGroupRequestPrivate
 * \brief The UpdateGroupRequestPrivate class provides private implementation for UpdateGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a UpdateGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const XRayRequest::Action action, UpdateGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGroupRequest
 * class' copy constructor.
 */
UpdateGroupRequestPrivate::UpdateGroupRequestPrivate(
    const UpdateGroupRequestPrivate &other, UpdateGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
