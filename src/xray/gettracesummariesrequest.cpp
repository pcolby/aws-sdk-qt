// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
