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
