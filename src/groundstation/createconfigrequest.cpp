// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
