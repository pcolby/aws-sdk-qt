// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataingestionjobsrequest.h"
#include "listdataingestionjobsrequest_p.h"
#include "listdataingestionjobsresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::ListDataIngestionJobsRequest
 * \brief The ListDataIngestionJobsRequest class provides an interface for LookoutEquipment ListDataIngestionJobs requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::listDataIngestionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataIngestionJobsRequest::ListDataIngestionJobsRequest(const ListDataIngestionJobsRequest &other)
    : LookoutEquipmentRequest(new ListDataIngestionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataIngestionJobsRequest object.
 */
ListDataIngestionJobsRequest::ListDataIngestionJobsRequest()
    : LookoutEquipmentRequest(new ListDataIngestionJobsRequestPrivate(LookoutEquipmentRequest::ListDataIngestionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataIngestionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataIngestionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataIngestionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataIngestionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::ListDataIngestionJobsRequestPrivate
 * \brief The ListDataIngestionJobsRequestPrivate class provides private implementation for ListDataIngestionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a ListDataIngestionJobsRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
ListDataIngestionJobsRequestPrivate::ListDataIngestionJobsRequestPrivate(
    const LookoutEquipmentRequest::Action action, ListDataIngestionJobsRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataIngestionJobsRequest
 * class' copy constructor.
 */
ListDataIngestionJobsRequestPrivate::ListDataIngestionJobsRequestPrivate(
    const ListDataIngestionJobsRequestPrivate &other, ListDataIngestionJobsRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
