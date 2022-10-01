// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateModelRequest
 * \brief The CreateModelRequest class provides an interface for LookoutEquipment CreateModel requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : LookoutEquipmentRequest(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : LookoutEquipmentRequest(new CreateModelRequestPrivate(LookoutEquipmentRequest::CreateModelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::CreateModelRequestPrivate
 * \brief The CreateModelRequestPrivate class provides private implementation for CreateModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateModelRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const LookoutEquipmentRequest::Action action, CreateModelRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelRequest
 * class' copy constructor.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const CreateModelRequestPrivate &other, CreateModelRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
