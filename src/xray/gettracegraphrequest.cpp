/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
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
