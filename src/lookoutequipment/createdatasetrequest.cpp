// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateDatasetRequest
 * \brief The CreateDatasetRequest class provides an interface for LookoutEquipment CreateDataset requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createDataset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetRequest::CreateDatasetRequest(const CreateDatasetRequest &other)
    : LookoutEquipmentRequest(new CreateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetRequest object.
 */
CreateDatasetRequest::CreateDatasetRequest()
    : LookoutEquipmentRequest(new CreateDatasetRequestPrivate(LookoutEquipmentRequest::CreateDatasetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDatasetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDatasetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDatasetRequest::response(QNetworkReply * const reply) const
{
    return new CreateDatasetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::CreateDatasetRequestPrivate
 * \brief The CreateDatasetRequestPrivate class provides private implementation for CreateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateDatasetRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const LookoutEquipmentRequest::Action action, CreateDatasetRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDatasetRequest
 * class' copy constructor.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const CreateDatasetRequestPrivate &other, CreateDatasetRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
