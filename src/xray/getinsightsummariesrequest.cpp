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

#include "getinsightsummariesrequest.h"
#include "getinsightsummariesrequest_p.h"
#include "getinsightsummariesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightSummariesRequest
 * \brief The GetInsightSummariesRequest class provides an interface for XRay GetInsightSummaries requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getInsightSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightSummariesRequest::GetInsightSummariesRequest(const GetInsightSummariesRequest &other)
    : XRayRequest(new GetInsightSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightSummariesRequest object.
 */
GetInsightSummariesRequest::GetInsightSummariesRequest()
    : XRayRequest(new GetInsightSummariesRequestPrivate(XRayRequest::GetInsightSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightSummariesRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightSummariesRequestPrivate
 * \brief The GetInsightSummariesRequestPrivate class provides private implementation for GetInsightSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightSummariesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightSummariesRequestPrivate::GetInsightSummariesRequestPrivate(
    const XRayRequest::Action action, GetInsightSummariesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightSummariesRequest
 * class' copy constructor.
 */
GetInsightSummariesRequestPrivate::GetInsightSummariesRequestPrivate(
    const GetInsightSummariesRequestPrivate &other, GetInsightSummariesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
