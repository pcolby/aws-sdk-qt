/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateconfigrequest.h"
#include "updateconfigrequest_p.h"
#include "updateconfigresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::UpdateConfigRequest
 * \brief The UpdateConfigRequest class provides an interface for GroundStation UpdateConfig requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::updateConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigRequest::UpdateConfigRequest(const UpdateConfigRequest &other)
    : GroundStationRequest(new UpdateConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigRequest object.
 */
UpdateConfigRequest::UpdateConfigRequest()
    : GroundStationRequest(new UpdateConfigRequestPrivate(GroundStationRequest::UpdateConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::UpdateConfigRequestPrivate
 * \brief The UpdateConfigRequestPrivate class provides private implementation for UpdateConfigRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a UpdateConfigRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
UpdateConfigRequestPrivate::UpdateConfigRequestPrivate(
    const GroundStationRequest::Action action, UpdateConfigRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigRequest
 * class' copy constructor.
 */
UpdateConfigRequestPrivate::UpdateConfigRequestPrivate(
    const UpdateConfigRequestPrivate &other, UpdateConfigRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
