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

#include "getsamplingstatisticsummariesrequest.h"
#include "getsamplingstatisticsummariesrequest_p.h"
#include "getsamplingstatisticsummariesresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesRequest
 * \brief The GetSamplingStatisticSummariesRequest class provides an interface for XRay GetSamplingStatisticSummaries requests.
 *
 * \inmodule QtAwsXRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getSamplingStatisticSummaries
 */

/*!
 * Constructs a copy of \a other.
 */
GetSamplingStatisticSummariesRequest::GetSamplingStatisticSummariesRequest(const GetSamplingStatisticSummariesRequest &other)
    : XRayRequest(new GetSamplingStatisticSummariesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSamplingStatisticSummariesRequest object.
 */
GetSamplingStatisticSummariesRequest::GetSamplingStatisticSummariesRequest()
    : XRayRequest(new GetSamplingStatisticSummariesRequestPrivate(XRayRequest::GetSamplingStatisticSummariesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSamplingStatisticSummariesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSamplingStatisticSummariesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSamplingStatisticSummariesRequest::response(QNetworkReply * const reply) const
{
    return new GetSamplingStatisticSummariesResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetSamplingStatisticSummariesRequestPrivate
 * \brief The GetSamplingStatisticSummariesRequestPrivate class provides private implementation for GetSamplingStatisticSummariesRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingStatisticSummariesRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetSamplingStatisticSummariesRequestPrivate::GetSamplingStatisticSummariesRequestPrivate(
    const XRayRequest::Action action, GetSamplingStatisticSummariesRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSamplingStatisticSummariesRequest
 * class' copy constructor.
 */
GetSamplingStatisticSummariesRequestPrivate::GetSamplingStatisticSummariesRequestPrivate(
    const GetSamplingStatisticSummariesRequestPrivate &other, GetSamplingStatisticSummariesRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
