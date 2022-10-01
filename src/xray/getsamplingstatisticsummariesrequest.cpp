// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
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
