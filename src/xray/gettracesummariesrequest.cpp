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

#include "gettracesummariesrequest.h"
#include "gettracesummariesrequest_p.h"
#include "gettracesummariesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceSummariesRequest
 * \brief The GetTraceSummariesRequest class provides an interface for XRay GetTraceSummaries requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getTraceSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
GetTraceSummariesRequest::GetTraceSummariesRequest(const GetTraceSummariesRequest &other)
    : XRayRequest(new GetTraceSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTraceSummariesRequest object.
 */
GetTraceSummariesRequest::GetTraceSummariesRequest()
    : XRayRequest(new GetTraceSummariesRequestPrivate(XRayRequest::GetTraceSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool GetTraceSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTraceSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTraceSummariesRequest::response(QNetworkReply * const reply) const
{
    return new GetTraceSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetTraceSummariesRequestPrivate
 * \brief The GetTraceSummariesRequestPrivate class provides private implementation for GetTraceSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetTraceSummariesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetTraceSummariesRequestPrivate::GetTraceSummariesRequestPrivate(
    const XRayRequest::Action action, GetTraceSummariesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTraceSummariesRequest
 * class' copy constructor.
 */
GetTraceSummariesRequestPrivate::GetTraceSummariesRequestPrivate(
    const GetTraceSummariesRequestPrivate &other, GetTraceSummariesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
