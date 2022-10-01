/*
    Copyright 2013-2021 Paul Colby

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

#include "getinsightrequest.h"
#include "getinsightrequest_p.h"
#include "getinsightresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightRequest
 * \brief The GetInsightRequest class provides an interface for XRay GetInsight requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsight
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightRequest::GetInsightRequest(const GetInsightRequest &other)
    : XRayRequest(new GetInsightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightRequest object.
 */
GetInsightRequest::GetInsightRequest()
    : XRayRequest(new GetInsightRequestPrivate(XRayRequest::GetInsightAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightRequestPrivate
 * \brief The GetInsightRequestPrivate class provides private implementation for GetInsightRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightRequestPrivate::GetInsightRequestPrivate(
    const XRayRequest::Action action, GetInsightRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightRequest
 * class' copy constructor.
 */
GetInsightRequestPrivate::GetInsightRequestPrivate(
    const GetInsightRequestPrivate &other, GetInsightRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
