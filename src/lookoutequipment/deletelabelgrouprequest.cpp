// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelabelgrouprequest.h"
#include "deletelabelgrouprequest_p.h"
#include "deletelabelgroupresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelGroupRequest
 * \brief The DeleteLabelGroupRequest class provides an interface for LookoutEquipment DeleteLabelGroup requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteLabelGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLabelGroupRequest::DeleteLabelGroupRequest(const DeleteLabelGroupRequest &other)
    : LookoutEquipmentRequest(new DeleteLabelGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLabelGroupRequest object.
 */
DeleteLabelGroupRequest::DeleteLabelGroupRequest()
    : LookoutEquipmentRequest(new DeleteLabelGroupRequestPrivate(LookoutEquipmentRequest::DeleteLabelGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLabelGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLabelGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLabelGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLabelGroupResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DeleteLabelGroupRequestPrivate
 * \brief The DeleteLabelGroupRequestPrivate class provides private implementation for DeleteLabelGroupRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteLabelGroupRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DeleteLabelGroupRequestPrivate::DeleteLabelGroupRequestPrivate(
    const LookoutEquipmentRequest::Action action, DeleteLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLabelGroupRequest
 * class' copy constructor.
 */
DeleteLabelGroupRequestPrivate::DeleteLabelGroupRequestPrivate(
    const DeleteLabelGroupRequestPrivate &other, DeleteLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
