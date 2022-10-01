// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelrequest.h"
#include "deletemodelrequest_p.h"
#include "deletemodelresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DeleteModelRequest
 * \brief The DeleteModelRequest class provides an interface for LookoutVision DeleteModel requests.
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
 * \sa LookoutVisionClient::deleteModel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelRequest::DeleteModelRequest(const DeleteModelRequest &other)
    : LookoutVisionRequest(new DeleteModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelRequest object.
 */
DeleteModelRequest::DeleteModelRequest()
    : LookoutVisionRequest(new DeleteModelRequestPrivate(LookoutVisionRequest::DeleteModelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::DeleteModelRequestPrivate
 * \brief The DeleteModelRequestPrivate class provides private implementation for DeleteModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DeleteModelRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const LookoutVisionRequest::Action action, DeleteModelRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelRequest
 * class' copy constructor.
 */
DeleteModelRequestPrivate::DeleteModelRequestPrivate(
    const DeleteModelRequestPrivate &other, DeleteModelRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
