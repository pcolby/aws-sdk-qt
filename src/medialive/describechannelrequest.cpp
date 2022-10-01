// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describechannelrequest.h"
#include "describechannelrequest_p.h"
#include "describechannelresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeChannelRequest
 * \brief The DescribeChannelRequest class provides an interface for MediaLive DescribeChannel requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeChannelRequest::DescribeChannelRequest(const DescribeChannelRequest &other)
    : MediaLiveRequest(new DescribeChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeChannelRequest object.
 */
DescribeChannelRequest::DescribeChannelRequest()
    : MediaLiveRequest(new DescribeChannelRequestPrivate(MediaLiveRequest::DescribeChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeChannelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeChannelResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeChannelRequestPrivate
 * \brief The DescribeChannelRequestPrivate class provides private implementation for DescribeChannelRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeChannelRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const MediaLiveRequest::Action action, DescribeChannelRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeChannelRequest
 * class' copy constructor.
 */
DescribeChannelRequestPrivate::DescribeChannelRequestPrivate(
    const DescribeChannelRequestPrivate &other, DescribeChannelRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
