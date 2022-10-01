// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettracegraphrequest.h"
#include "gettracegraphrequest_p.h"
#include "gettracegraphresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceGraphRequest
 * \brief The GetTraceGraphRequest class provides an interface for XRay GetTraceGraph requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTraceGraph
 */

/*!
 * Constructs a copy of \a other.
 */
GetTraceGraphRequest::GetTraceGraphRequest(const GetTraceGraphRequest &other)
    : XRayRequest(new GetTraceGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTraceGraphRequest object.
 */
GetTraceGraphRequest::GetTraceGraphRequest()
    : XRayRequest(new GetTraceGraphRequestPrivate(XRayRequest::GetTraceGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetTraceGraphRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTraceGraphResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTraceGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetTraceGraphResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetTraceGraphRequestPrivate
 * \brief The GetTraceGraphRequestPrivate class provides private implementation for GetTraceGraphRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceGraphRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetTraceGraphRequestPrivate::GetTraceGraphRequestPrivate(
    const XRayRequest::Action action, GetTraceGraphRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTraceGraphRequest
 * class' copy constructor.
 */
GetTraceGraphRequestPrivate::GetTraceGraphRequestPrivate(
    const GetTraceGraphRequestPrivate &other, GetTraceGraphRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
