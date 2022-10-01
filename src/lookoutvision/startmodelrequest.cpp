// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmodelrequest.h"
#include "startmodelrequest_p.h"
#include "startmodelresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StartModelRequest
 * \brief The StartModelRequest class provides an interface for LookoutVision StartModel requests.
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
 * \sa LookoutVisionClient::startModel
 */

/*!
 * Constructs a copy of \a other.
 */
StartModelRequest::StartModelRequest(const StartModelRequest &other)
    : LookoutVisionRequest(new StartModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartModelRequest object.
 */
StartModelRequest::StartModelRequest()
    : LookoutVisionRequest(new StartModelRequestPrivate(LookoutVisionRequest::StartModelAction, this))
{

}

/*!
 * \reimp
 */
bool StartModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartModelRequest::response(QNetworkReply * const reply) const
{
    return new StartModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::StartModelRequestPrivate
 * \brief The StartModelRequestPrivate class provides private implementation for StartModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StartModelRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
StartModelRequestPrivate::StartModelRequestPrivate(
    const LookoutVisionRequest::Action action, StartModelRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartModelRequest
 * class' copy constructor.
 */
StartModelRequestPrivate::StartModelRequestPrivate(
    const StartModelRequestPrivate &other, StartModelRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
