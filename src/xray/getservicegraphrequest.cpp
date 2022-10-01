// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getservicegraphrequest.h"
#include "getservicegraphrequest_p.h"
#include "getservicegraphresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetServiceGraphRequest
 * \brief The GetServiceGraphRequest class provides an interface for XRay GetServiceGraph requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getServiceGraph
 */

/*!
 * Constructs a copy of \a other.
 */
GetServiceGraphRequest::GetServiceGraphRequest(const GetServiceGraphRequest &other)
    : XRayRequest(new GetServiceGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetServiceGraphRequest object.
 */
GetServiceGraphRequest::GetServiceGraphRequest()
    : XRayRequest(new GetServiceGraphRequestPrivate(XRayRequest::GetServiceGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetServiceGraphRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetServiceGraphResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServiceGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetServiceGraphResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetServiceGraphRequestPrivate
 * \brief The GetServiceGraphRequestPrivate class provides private implementation for GetServiceGraphRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetServiceGraphRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const XRayRequest::Action action, GetServiceGraphRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetServiceGraphRequest
 * class' copy constructor.
 */
GetServiceGraphRequestPrivate::GetServiceGraphRequestPrivate(
    const GetServiceGraphRequestPrivate &other, GetServiceGraphRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
