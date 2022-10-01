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

#include "createlabelgrouprequest.h"
#include "createlabelgrouprequest_p.h"
#include "createlabelgroupresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateLabelGroupRequest
 * \brief The CreateLabelGroupRequest class provides an interface for LookoutEquipment CreateLabelGroup requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createLabelGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLabelGroupRequest::CreateLabelGroupRequest(const CreateLabelGroupRequest &other)
    : LookoutEquipmentRequest(new CreateLabelGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLabelGroupRequest object.
 */
CreateLabelGroupRequest::CreateLabelGroupRequest()
    : LookoutEquipmentRequest(new CreateLabelGroupRequestPrivate(LookoutEquipmentRequest::CreateLabelGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLabelGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLabelGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLabelGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateLabelGroupResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::CreateLabelGroupRequestPrivate
 * \brief The CreateLabelGroupRequestPrivate class provides private implementation for CreateLabelGroupRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateLabelGroupRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
CreateLabelGroupRequestPrivate::CreateLabelGroupRequestPrivate(
    const LookoutEquipmentRequest::Action action, CreateLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLabelGroupRequest
 * class' copy constructor.
 */
CreateLabelGroupRequestPrivate::CreateLabelGroupRequestPrivate(
    const CreateLabelGroupRequestPrivate &other, CreateLabelGroupRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
