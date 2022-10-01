// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagresourcerequest.h"
#include "tagresourcerequest_p.h"
#include "tagresourceresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::TagResourceRequest
 * \brief The TagResourceRequest class provides an interface for GroundStation TagResource requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::tagResource
 */

/*!
 * Constructs a copy of \a other.
 */
TagResourceRequest::TagResourceRequest(const TagResourceRequest &other)
    : GroundStationRequest(new TagResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagResourceRequest object.
 */
TagResourceRequest::TagResourceRequest()
    : GroundStationRequest(new TagResourceRequestPrivate(GroundStationRequest::TagResourceAction, this))
{

}

/*!
 * \reimp
 */
bool TagResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagResourceRequest::response(QNetworkReply * const reply) const
{
    return new TagResourceResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::TagResourceRequestPrivate
 * \brief The TagResourceRequestPrivate class provides private implementation for TagResourceRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a TagResourceRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const GroundStationRequest::Action action, TagResourceRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagResourceRequest
 * class' copy constructor.
 */
TagResourceRequestPrivate::TagResourceRequestPrivate(
    const TagResourceRequestPrivate &other, TagResourceRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
