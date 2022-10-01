// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetrequest.h"
#include "createdatasetrequest_p.h"
#include "createdatasetresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::CreateDatasetRequest
 * \brief The CreateDatasetRequest class provides an interface for LookoutVision CreateDataset requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::createDataset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDatasetRequest::CreateDatasetRequest(const CreateDatasetRequest &other)
    : LookoutVisionRequest(new CreateDatasetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDatasetRequest object.
 */
CreateDatasetRequest::CreateDatasetRequest()
    : LookoutVisionRequest(new CreateDatasetRequestPrivate(LookoutVisionRequest::CreateDatasetAction, this))
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
 * \class QtAws::LookoutVision::CreateDatasetRequestPrivate
 * \brief The CreateDatasetRequestPrivate class provides private implementation for CreateDatasetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a CreateDatasetRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
CreateDatasetRequestPrivate::CreateDatasetRequestPrivate(
    const LookoutVisionRequest::Action action, CreateDatasetRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
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
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
