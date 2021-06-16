/*
    Copyright 2013-2021 Paul Colby

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

#include "startdataingestionjobrequest.h"
#include "startdataingestionjobrequest_p.h"
#include "startdataingestionjobresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobRequest
 * \brief The StartDataIngestionJobRequest class provides an interface for LookoutEquipment StartDataIngestionJob requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::startDataIngestionJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDataIngestionJobRequest::StartDataIngestionJobRequest(const StartDataIngestionJobRequest &other)
    : LookoutEquipmentRequest(new StartDataIngestionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDataIngestionJobRequest object.
 */
StartDataIngestionJobRequest::StartDataIngestionJobRequest()
    : LookoutEquipmentRequest(new StartDataIngestionJobRequestPrivate(LookoutEquipmentRequest::StartDataIngestionJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartDataIngestionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDataIngestionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDataIngestionJobRequest::response(QNetworkReply * const reply) const
{
    return new StartDataIngestionJobResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::StartDataIngestionJobRequestPrivate
 * \brief The StartDataIngestionJobRequestPrivate class provides private implementation for StartDataIngestionJobRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StartDataIngestionJobRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
StartDataIngestionJobRequestPrivate::StartDataIngestionJobRequestPrivate(
    const LookoutEquipmentRequest::Action action, StartDataIngestionJobRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDataIngestionJobRequest
 * class' copy constructor.
 */
StartDataIngestionJobRequestPrivate::StartDataIngestionJobRequestPrivate(
    const StartDataIngestionJobRequestPrivate &other, StartDataIngestionJobRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
