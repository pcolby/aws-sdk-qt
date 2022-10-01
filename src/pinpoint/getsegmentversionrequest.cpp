// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentversionrequest.h"
#include "getsegmentversionrequest_p.h"
#include "getsegmentversionresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionRequest
 * \brief The GetSegmentVersionRequest class provides an interface for Pinpoint GetSegmentVersion requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest(const GetSegmentVersionRequest &other)
    : PinpointRequest(new GetSegmentVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSegmentVersionRequest object.
 */
GetSegmentVersionRequest::GetSegmentVersionRequest()
    : PinpointRequest(new GetSegmentVersionRequestPrivate(PinpointRequest::GetSegmentVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSegmentVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionRequestPrivate
 * \brief The GetSegmentVersionRequestPrivate class provides private implementation for GetSegmentVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const PinpointRequest::Action action, GetSegmentVersionRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentVersionRequest
 * class' copy constructor.
 */
GetSegmentVersionRequestPrivate::GetSegmentVersionRequestPrivate(
    const GetSegmentVersionRequestPrivate &other, GetSegmentVersionRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
