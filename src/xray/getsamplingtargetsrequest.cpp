// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsamplingtargetsrequest.h"
#include "getsamplingtargetsrequest_p.h"
#include "getsamplingtargetsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetSamplingTargetsRequest
 * \brief The GetSamplingTargetsRequest class provides an interface for XRay GetSamplingTargets requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getSamplingTargets
 */

/*!
 * Constructs a copy of \a other.
 */
GetSamplingTargetsRequest::GetSamplingTargetsRequest(const GetSamplingTargetsRequest &other)
    : XRayRequest(new GetSamplingTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSamplingTargetsRequest object.
 */
GetSamplingTargetsRequest::GetSamplingTargetsRequest()
    : XRayRequest(new GetSamplingTargetsRequestPrivate(XRayRequest::GetSamplingTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSamplingTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSamplingTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSamplingTargetsRequest::response(QNetworkReply * const reply) const
{
    return new GetSamplingTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetSamplingTargetsRequestPrivate
 * \brief The GetSamplingTargetsRequestPrivate class provides private implementation for GetSamplingTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetSamplingTargetsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetSamplingTargetsRequestPrivate::GetSamplingTargetsRequestPrivate(
    const XRayRequest::Action action, GetSamplingTargetsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSamplingTargetsRequest
 * class' copy constructor.
 */
GetSamplingTargetsRequestPrivate::GetSamplingTargetsRequestPrivate(
    const GetSamplingTargetsRequestPrivate &other, GetSamplingTargetsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
