// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontactrequest.h"
#include "describecontactrequest_p.h"
#include "describecontactresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DescribeContactRequest
 * \brief The DescribeContactRequest class provides an interface for GroundStation DescribeContact requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::describeContact
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContactRequest::DescribeContactRequest(const DescribeContactRequest &other)
    : GroundStationRequest(new DescribeContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContactRequest object.
 */
DescribeContactRequest::DescribeContactRequest()
    : GroundStationRequest(new DescribeContactRequestPrivate(GroundStationRequest::DescribeContactAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContactRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContactResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::DescribeContactRequestPrivate
 * \brief The DescribeContactRequestPrivate class provides private implementation for DescribeContactRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DescribeContactRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
DescribeContactRequestPrivate::DescribeContactRequestPrivate(
    const GroundStationRequest::Action action, DescribeContactRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContactRequest
 * class' copy constructor.
 */
DescribeContactRequestPrivate::DescribeContactRequestPrivate(
    const DescribeContactRequestPrivate &other, DescribeContactRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
