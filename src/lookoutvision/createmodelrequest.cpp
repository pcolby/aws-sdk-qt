// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelrequest.h"
#include "createmodelrequest_p.h"
#include "createmodelresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::CreateModelRequest
 * \brief The CreateModelRequest class provides an interface for LookoutVision CreateModel requests.
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
 * \sa LookoutVisionClient::createModel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelRequest::CreateModelRequest(const CreateModelRequest &other)
    : LookoutVisionRequest(new CreateModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelRequest object.
 */
CreateModelRequest::CreateModelRequest()
    : LookoutVisionRequest(new CreateModelRequestPrivate(LookoutVisionRequest::CreateModelAction, this))
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
 * \class QtAws::LookoutVision::CreateModelRequestPrivate
 * \brief The CreateModelRequestPrivate class provides private implementation for CreateModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a CreateModelRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
CreateModelRequestPrivate::CreateModelRequestPrivate(
    const LookoutVisionRequest::Action action, CreateModelRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
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
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
