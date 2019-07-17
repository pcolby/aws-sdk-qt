/*
    Copyright 2013-2019 Paul Colby

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

#include "createconfigrequest.h"
#include "createconfigrequest_p.h"
#include "createconfigresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::CreateConfigRequest
 * \brief The CreateConfigRequest class provides an interface for GroundStation CreateConfig requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::createConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigRequest::CreateConfigRequest(const CreateConfigRequest &other)
    : GroundStationRequest(new CreateConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigRequest object.
 */
CreateConfigRequest::CreateConfigRequest()
    : GroundStationRequest(new CreateConfigRequestPrivate(GroundStationRequest::CreateConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::CreateConfigRequestPrivate
 * \brief The CreateConfigRequestPrivate class provides private implementation for CreateConfigRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a CreateConfigRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
CreateConfigRequestPrivate::CreateConfigRequestPrivate(
    const GroundStationRequest::Action action, CreateConfigRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigRequest
 * class' copy constructor.
 */
CreateConfigRequestPrivate::CreateConfigRequestPrivate(
    const CreateConfigRequestPrivate &other, CreateConfigRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
