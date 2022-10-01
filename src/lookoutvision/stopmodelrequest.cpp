// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopmodelrequest.h"
#include "stopmodelrequest_p.h"
#include "stopmodelresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::StopModelRequest
 * \brief The StopModelRequest class provides an interface for LookoutVision StopModel requests.
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
 * \sa LookoutVisionClient::stopModel
 */

/*!
 * Constructs a copy of \a other.
 */
StopModelRequest::StopModelRequest(const StopModelRequest &other)
    : LookoutVisionRequest(new StopModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopModelRequest object.
 */
StopModelRequest::StopModelRequest()
    : LookoutVisionRequest(new StopModelRequestPrivate(LookoutVisionRequest::StopModelAction, this))
{

}

/*!
 * \reimp
 */
bool StopModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopModelRequest::response(QNetworkReply * const reply) const
{
    return new StopModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::StopModelRequestPrivate
 * \brief The StopModelRequestPrivate class provides private implementation for StopModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a StopModelRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
StopModelRequestPrivate::StopModelRequestPrivate(
    const LookoutVisionRequest::Action action, StopModelRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopModelRequest
 * class' copy constructor.
 */
StopModelRequestPrivate::StopModelRequestPrivate(
    const StopModelRequestPrivate &other, StopModelRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
