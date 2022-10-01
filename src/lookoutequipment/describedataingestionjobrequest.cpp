// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
