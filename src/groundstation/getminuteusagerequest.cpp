// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getminuteusagerequest.h"
#include "getminuteusagerequest_p.h"
#include "getminuteusageresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetMinuteUsageRequest
 * \brief The GetMinuteUsageRequest class provides an interface for GroundStation GetMinuteUsage requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getMinuteUsage
 */

/*!
 * Constructs a copy of \a other.
 */
GetMinuteUsageRequest::GetMinuteUsageRequest(const GetMinuteUsageRequest &other)
    : GroundStationRequest(new GetMinuteUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMinuteUsageRequest object.
 */
GetMinuteUsageRequest::GetMinuteUsageRequest()
    : GroundStationRequest(new GetMinuteUsageRequestPrivate(GroundStationRequest::GetMinuteUsageAction, this))
{

}

/*!
 * \reimp
 */
bool GetMinuteUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMinuteUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMinuteUsageRequest::response(QNetworkReply * const reply) const
{
    return new GetMinuteUsageResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetMinuteUsageRequestPrivate
 * \brief The GetMinuteUsageRequestPrivate class provides private implementation for GetMinuteUsageRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetMinuteUsageRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetMinuteUsageRequestPrivate::GetMinuteUsageRequestPrivate(
    const GroundStationRequest::Action action, GetMinuteUsageRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMinuteUsageRequest
 * class' copy constructor.
 */
GetMinuteUsageRequestPrivate::GetMinuteUsageRequestPrivate(
    const GetMinuteUsageRequestPrivate &other, GetMinuteUsageRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
