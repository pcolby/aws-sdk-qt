// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeofferingrequest.h"
#include "describeofferingrequest_p.h"
#include "describeofferingresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeOfferingRequest
 * \brief The DescribeOfferingRequest class provides an interface for MediaConnect DescribeOffering requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeOffering
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOfferingRequest::DescribeOfferingRequest(const DescribeOfferingRequest &other)
    : MediaConnectRequest(new DescribeOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOfferingRequest object.
 */
DescribeOfferingRequest::DescribeOfferingRequest()
    : MediaConnectRequest(new DescribeOfferingRequestPrivate(MediaConnectRequest::DescribeOfferingAction, this))
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
 * \class QtAws::MediaConnect::DescribeOfferingRequestPrivate
 * \brief The DescribeOfferingRequestPrivate class provides private implementation for DescribeOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeOfferingRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
DescribeOfferingRequestPrivate::DescribeOfferingRequestPrivate(
    const MediaConnectRequest::Action action, DescribeOfferingRequest * const q)
    : MediaConnectRequestPrivate(action, q)
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
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
