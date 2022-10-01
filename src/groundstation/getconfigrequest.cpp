// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigrequest.h"
#include "getconfigrequest_p.h"
#include "getconfigresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::GetConfigRequest
 * \brief The GetConfigRequest class provides an interface for GroundStation GetConfig requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::getConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigRequest::GetConfigRequest(const GetConfigRequest &other)
    : GroundStationRequest(new GetConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigRequest object.
 */
GetConfigRequest::GetConfigRequest()
    : GroundStationRequest(new GetConfigRequestPrivate(GroundStationRequest::GetConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::GetConfigRequestPrivate
 * \brief The GetConfigRequestPrivate class provides private implementation for GetConfigRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a GetConfigRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const GroundStationRequest::Action action, GetConfigRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigRequest
 * class' copy constructor.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const GetConfigRequestPrivate &other, GetConfigRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
