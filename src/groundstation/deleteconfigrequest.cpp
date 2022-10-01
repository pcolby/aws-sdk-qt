// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigrequest.h"
#include "deleteconfigrequest_p.h"
#include "deleteconfigresponse.h"
#include "groundstationrequest_p.h"

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DeleteConfigRequest
 * \brief The DeleteConfigRequest class provides an interface for GroundStation DeleteConfig requests.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::deleteConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigRequest::DeleteConfigRequest(const DeleteConfigRequest &other)
    : GroundStationRequest(new DeleteConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigRequest object.
 */
DeleteConfigRequest::DeleteConfigRequest()
    : GroundStationRequest(new DeleteConfigRequestPrivate(GroundStationRequest::DeleteConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigResponse(*this, reply);
}

/*!
 * \class QtAws::GroundStation::DeleteConfigRequestPrivate
 * \brief The DeleteConfigRequestPrivate class provides private implementation for DeleteConfigRequest.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DeleteConfigRequestPrivate object for GroundStation \a action,
 * with public implementation \a q.
 */
DeleteConfigRequestPrivate::DeleteConfigRequestPrivate(
    const GroundStationRequest::Action action, DeleteConfigRequest * const q)
    : GroundStationRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigRequest
 * class' copy constructor.
 */
DeleteConfigRequestPrivate::DeleteConfigRequestPrivate(
    const DeleteConfigRequestPrivate &other, DeleteConfigRequest * const q)
    : GroundStationRequestPrivate(other, q)
{

}

} // namespace GroundStation
} // namespace QtAws
