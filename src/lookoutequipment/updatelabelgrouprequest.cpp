// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelabelgrouprequest.h"
#include "updatelabelgrouprequest_p.h"
#include "updatelabelgroupresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::UpdateLabelGroupRequest
 * \brief The UpdateLabelGroupRequest class provides an interface for LookoutEquipment UpdateLabelGroup requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::updateLabelGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLabelGroupRequest::UpdateLabelGroupRequest(const UpdateLabelGroupRequest &other)
    : LookoutEquipmentRequest(new UpdateLabelGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLabelGroupRequest object.
 */
UpdateLabelGroupRequest::UpdateLabelGroupRequest()
    : LookoutEquipmentRequest(new UpdateLabelGroupRequestPrivate(LookoutEquipmentRequest::UpdateLabelGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLabelGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLabelGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLabelGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLabelGroupResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::UpdateLabelGroupRequestPrivate
 * \brief The UpdateLabelGroupRequestPrivate class provides private implementation for UpdateLabelGroupRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a UpdateLabelGroupRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
UpdateLabelGroupRequestPrivate::UpdateLabelGroupRequestPrivate(
    const LookoutEquipmentRequest::Action action, UpdateLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLabelGroupRequest
 * class' copy constructor.
 */
UpdateLabelGroupRequestPrivate::UpdateLabelGroupRequestPrivate(
    const UpdateLabelGroupRequestPrivate &other, UpdateLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
