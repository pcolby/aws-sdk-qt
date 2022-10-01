// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::DeleteGroupRequest
 * \brief The DeleteGroupRequest class provides an interface for XRay DeleteGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::deleteGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : XRayRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : XRayRequest(new DeleteGroupRequestPrivate(XRayRequest::DeleteGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::DeleteGroupRequestPrivate
 * \brief The DeleteGroupRequestPrivate class provides private implementation for DeleteGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a DeleteGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const XRayRequest::Action action, DeleteGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
