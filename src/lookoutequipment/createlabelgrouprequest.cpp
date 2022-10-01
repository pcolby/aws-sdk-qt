// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
