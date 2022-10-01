// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemultiplexprogramrequest.h"
#include "describemultiplexprogramrequest_p.h"
#include "describemultiplexprogramresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramRequest
 * \brief The DescribeMultiplexProgramRequest class provides an interface for MediaLive DescribeMultiplexProgram requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeMultiplexProgram
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiplexProgramRequest::DescribeMultiplexProgramRequest(const DescribeMultiplexProgramRequest &other)
    : MediaLiveRequest(new DescribeMultiplexProgramRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiplexProgramRequest object.
 */
DescribeMultiplexProgramRequest::DescribeMultiplexProgramRequest()
    : MediaLiveRequest(new DescribeMultiplexProgramRequestPrivate(MediaLiveRequest::DescribeMultiplexProgramAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiplexProgramRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiplexProgramResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiplexProgramRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiplexProgramResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeMultiplexProgramRequestPrivate
 * \brief The DescribeMultiplexProgramRequestPrivate class provides private implementation for DescribeMultiplexProgramRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeMultiplexProgramRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeMultiplexProgramRequestPrivate::DescribeMultiplexProgramRequestPrivate(
    const MediaLiveRequest::Action action, DescribeMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiplexProgramRequest
 * class' copy constructor.
 */
DescribeMultiplexProgramRequestPrivate::DescribeMultiplexProgramRequestPrivate(
    const DescribeMultiplexProgramRequestPrivate &other, DescribeMultiplexProgramRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
