// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentversionsrequest.h"
#include "getsegmentversionsrequest_p.h"
#include "getsegmentversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsRequest
 * \brief The GetSegmentVersionsRequest class provides an interface for Pinpoint GetSegmentVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest(const GetSegmentVersionsRequest &other)
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentVersionsRequest object.
 */
GetSegmentVersionsRequest::GetSegmentVersionsRequest()
    : PinpointRequest(new GetSegmentVersionsRequestPrivate(PinpointRequest::GetSegmentVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsRequestPrivate
 * \brief The GetSegmentVersionsRequestPrivate class provides private implementation for GetSegmentVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionsRequest
 * class' copy constructor.
 */
GetSegmentVersionsRequestPrivate::GetSegmentVersionsRequestPrivate(
    const GetSegmentVersionsRequestPrivate &other, GetSegmentVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
