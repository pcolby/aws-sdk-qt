// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlabelrequest.h"
#include "createlabelrequest_p.h"
#include "createlabelresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateLabelRequest
 * \brief The CreateLabelRequest class provides an interface for LookoutEquipment CreateLabel requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createLabel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLabelRequest::CreateLabelRequest(const CreateLabelRequest &other)
    : LookoutEquipmentRequest(new CreateLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLabelRequest object.
 */
CreateLabelRequest::CreateLabelRequest()
    : LookoutEquipmentRequest(new CreateLabelRequestPrivate(LookoutEquipmentRequest::CreateLabelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLabelRequest::response(QNetworkReply * const reply) const
{
    return new CreateLabelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::CreateLabelRequestPrivate
 * \brief The CreateLabelRequestPrivate class provides private implementation for CreateLabelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateLabelRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
CreateLabelRequestPrivate::CreateLabelRequestPrivate(
    const LookoutEquipmentRequest::Action action, CreateLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLabelRequest
 * class' copy constructor.
 */
CreateLabelRequestPrivate::CreateLabelRequestPrivate(
    const CreateLabelRequestPrivate &other, CreateLabelRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
