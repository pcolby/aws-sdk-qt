// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetrequest.h"
#include "deletedatasetrequest_p.h"
#include "deletedatasetresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteDatasetRequest
 * \brief The DeleteDatasetRequest class provides an interface for LookoutEquipment DeleteDataset requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteDataset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDatasetRequest::DeleteDatasetRequest(const DeleteDatasetRequest &other)
    : LookoutEquipmentRequest(new DeleteDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDatasetRequest object.
 */
DeleteDatasetRequest::DeleteDatasetRequest()
    : LookoutEquipmentRequest(new DeleteDatasetRequestPrivate(LookoutEquipmentRequest::DeleteDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDatasetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DeleteDatasetRequestPrivate
 * \brief The DeleteDatasetRequestPrivate class provides private implementation for DeleteDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteDatasetRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const LookoutEquipmentRequest::Action action, DeleteDatasetRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDatasetRequest
 * class' copy constructor.
 */
DeleteDatasetRequestPrivate::DeleteDatasetRequestPrivate(
    const DeleteDatasetRequestPrivate &other, DeleteDatasetRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
