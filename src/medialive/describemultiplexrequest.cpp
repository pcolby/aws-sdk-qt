// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemultiplexrequest.h"
#include "describemultiplexrequest_p.h"
#include "describemultiplexresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexRequest
 * \brief The DescribeMultiplexRequest class provides an interface for MediaLive DescribeMultiplex requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplex
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiplexRequest::DescribeMultiplexRequest(const DescribeMultiplexRequest &other)
    : MediaLiveRequest(new DescribeMultiplexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiplexRequest object.
 */
DescribeMultiplexRequest::DescribeMultiplexRequest()
    : MediaLiveRequest(new DescribeMultiplexRequestPrivate(MediaLiveRequest::DescribeMultiplexAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiplexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiplexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiplexRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiplexResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexRequestPrivate
 * \brief The DescribeMultiplexRequestPrivate class provides private implementation for DescribeMultiplexRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeMultiplexRequestPrivate::DescribeMultiplexRequestPrivate(
    const MediaLiveRequest::Action action, DescribeMultiplexRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiplexRequest
 * class' copy constructor.
 */
DescribeMultiplexRequestPrivate::DescribeMultiplexRequestPrivate(
    const DescribeMultiplexRequestPrivate &other, DescribeMultiplexRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
