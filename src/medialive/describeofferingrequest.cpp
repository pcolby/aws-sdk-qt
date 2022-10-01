// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeofferingrequest.h"
#include "describeofferingrequest_p.h"
#include "describeofferingresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeOfferingRequest
 * \brief The DescribeOfferingRequest class provides an interface for MediaLive DescribeOffering requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeOffering
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOfferingRequest::DescribeOfferingRequest(const DescribeOfferingRequest &other)
    : MediaLiveRequest(new DescribeOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOfferingRequest object.
 */
DescribeOfferingRequest::DescribeOfferingRequest()
    : MediaLiveRequest(new DescribeOfferingRequestPrivate(MediaLiveRequest::DescribeOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOfferingRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeOfferingRequestPrivate
 * \brief The DescribeOfferingRequestPrivate class provides private implementation for DescribeOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeOfferingRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeOfferingRequestPrivate::DescribeOfferingRequestPrivate(
    const MediaLiveRequest::Action action, DescribeOfferingRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOfferingRequest
 * class' copy constructor.
 */
DescribeOfferingRequestPrivate::DescribeOfferingRequestPrivate(
    const DescribeOfferingRequestPrivate &other, DescribeOfferingRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
