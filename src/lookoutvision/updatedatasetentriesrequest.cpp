// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatasetentriesrequest.h"
#include "updatedatasetentriesrequest_p.h"
#include "updatedatasetentriesresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::UpdateDatasetEntriesRequest
 * \brief The UpdateDatasetEntriesRequest class provides an interface for LookoutVision UpdateDatasetEntries requests.
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
 * \sa LookoutVisionClient::updateDatasetEntries
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatasetEntriesRequest::UpdateDatasetEntriesRequest(const UpdateDatasetEntriesRequest &other)
    : LookoutVisionRequest(new UpdateDatasetEntriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatasetEntriesRequest object.
 */
UpdateDatasetEntriesRequest::UpdateDatasetEntriesRequest()
    : LookoutVisionRequest(new UpdateDatasetEntriesRequestPrivate(LookoutVisionRequest::UpdateDatasetEntriesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatasetEntriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatasetEntriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatasetEntriesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatasetEntriesResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::UpdateDatasetEntriesRequestPrivate
 * \brief The UpdateDatasetEntriesRequestPrivate class provides private implementation for UpdateDatasetEntriesRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a UpdateDatasetEntriesRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
UpdateDatasetEntriesRequestPrivate::UpdateDatasetEntriesRequestPrivate(
    const LookoutVisionRequest::Action action, UpdateDatasetEntriesRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatasetEntriesRequest
 * class' copy constructor.
 */
UpdateDatasetEntriesRequestPrivate::UpdateDatasetEntriesRequestPrivate(
    const UpdateDatasetEntriesRequestPrivate &other, UpdateDatasetEntriesRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
