// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgrouprequest.h"
#include "getgrouprequest_p.h"
#include "getgroupresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupRequest
 * \brief The GetGroupRequest class provides an interface for XRay GetGroup requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupRequest::GetGroupRequest(const GetGroupRequest &other)
    : XRayRequest(new GetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupRequest object.
 */
GetGroupRequest::GetGroupRequest()
    : XRayRequest(new GetGroupRequestPrivate(XRayRequest::GetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetGroupRequestPrivate
 * \brief The GetGroupRequestPrivate class provides private implementation for GetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const XRayRequest::Action action, GetGroupRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupRequest
 * class' copy constructor.
 */
GetGroupRequestPrivate::GetGroupRequestPrivate(
    const GetGroupRequestPrivate &other, GetGroupRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
