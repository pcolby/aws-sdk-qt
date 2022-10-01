// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectanomaliesrequest.h"
#include "detectanomaliesrequest_p.h"
#include "detectanomaliesresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DetectAnomaliesRequest
 * \brief The DetectAnomaliesRequest class provides an interface for LookoutVision DetectAnomalies requests.
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
 * \sa LookoutVisionClient::detectAnomalies
 */

/*!
 * Constructs a copy of \a other.
 */
DetectAnomaliesRequest::DetectAnomaliesRequest(const DetectAnomaliesRequest &other)
    : LookoutVisionRequest(new DetectAnomaliesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectAnomaliesRequest object.
 */
DetectAnomaliesRequest::DetectAnomaliesRequest()
    : LookoutVisionRequest(new DetectAnomaliesRequestPrivate(LookoutVisionRequest::DetectAnomaliesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectAnomaliesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectAnomaliesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectAnomaliesRequest::response(QNetworkReply * const reply) const
{
    return new DetectAnomaliesResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::DetectAnomaliesRequestPrivate
 * \brief The DetectAnomaliesRequestPrivate class provides private implementation for DetectAnomaliesRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DetectAnomaliesRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
DetectAnomaliesRequestPrivate::DetectAnomaliesRequestPrivate(
    const LookoutVisionRequest::Action action, DetectAnomaliesRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectAnomaliesRequest
 * class' copy constructor.
 */
DetectAnomaliesRequestPrivate::DetectAnomaliesRequestPrivate(
    const DetectAnomaliesRequestPrivate &other, DetectAnomaliesRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
