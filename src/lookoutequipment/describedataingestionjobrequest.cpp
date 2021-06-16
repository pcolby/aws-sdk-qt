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

#include "describedataingestionjobrequest.h"
#include "describedataingestionjobrequest_p.h"
#include "describedataingestionjobresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeDataIngestionJobRequest
 * \brief The DescribeDataIngestionJobRequest class provides an interface for LookoutEquipment DescribeDataIngestionJob requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeDataIngestionJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeDataIngestionJobRequest::DescribeDataIngestionJobRequest(const DescribeDataIngestionJobRequest &other)
    : LookoutEquipmentRequest(new DescribeDataIngestionJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeDataIngestionJobRequest object.
 */
DescribeDataIngestionJobRequest::DescribeDataIngestionJobRequest()
    : LookoutEquipmentRequest(new DescribeDataIngestionJobRequestPrivate(LookoutEquipmentRequest::DescribeDataIngestionJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeDataIngestionJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeDataIngestionJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDataIngestionJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDataIngestionJobResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DescribeDataIngestionJobRequestPrivate
 * \brief The DescribeDataIngestionJobRequestPrivate class provides private implementation for DescribeDataIngestionJobRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeDataIngestionJobRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DescribeDataIngestionJobRequestPrivate::DescribeDataIngestionJobRequestPrivate(
    const LookoutEquipmentRequest::Action action, DescribeDataIngestionJobRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeDataIngestionJobRequest
 * class' copy constructor.
 */
DescribeDataIngestionJobRequestPrivate::DescribeDataIngestionJobRequestPrivate(
    const DescribeDataIngestionJobRequestPrivate &other, DescribeDataIngestionJobRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
