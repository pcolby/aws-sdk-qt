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
