// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupsrequest.h"
#include "getgroupsrequest_p.h"
#include "getgroupsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetGroupsRequest
 * \brief The GetGroupsRequest class provides an interface for XRay GetGroups requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getGroups
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupsRequest::GetGroupsRequest(const GetGroupsRequest &other)
    : XRayRequest(new GetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupsRequest object.
 */
GetGroupsRequest::GetGroupsRequest()
    : XRayRequest(new GetGroupsRequestPrivate(XRayRequest::GetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetGroupsRequestPrivate
 * \brief The GetGroupsRequestPrivate class provides private implementation for GetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetGroupsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetGroupsRequestPrivate::GetGroupsRequestPrivate(
    const XRayRequest::Action action, GetGroupsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupsRequest
 * class' copy constructor.
 */
GetGroupsRequestPrivate::GetGroupsRequestPrivate(
    const GetGroupsRequestPrivate &other, GetGroupsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
