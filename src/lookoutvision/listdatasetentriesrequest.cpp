// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetentriesrequest.h"
#include "listdatasetentriesrequest_p.h"
#include "listdatasetentriesresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListDatasetEntriesRequest
 * \brief The ListDatasetEntriesRequest class provides an interface for LookoutVision ListDatasetEntries requests.
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
 * \sa LookoutVisionClient::listDatasetEntries
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetEntriesRequest::ListDatasetEntriesRequest(const ListDatasetEntriesRequest &other)
    : LookoutVisionRequest(new ListDatasetEntriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetEntriesRequest object.
 */
ListDatasetEntriesRequest::ListDatasetEntriesRequest()
    : LookoutVisionRequest(new ListDatasetEntriesRequestPrivate(LookoutVisionRequest::ListDatasetEntriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetEntriesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetEntriesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetEntriesRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetEntriesResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::ListDatasetEntriesRequestPrivate
 * \brief The ListDatasetEntriesRequestPrivate class provides private implementation for ListDatasetEntriesRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListDatasetEntriesRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
ListDatasetEntriesRequestPrivate::ListDatasetEntriesRequestPrivate(
    const LookoutVisionRequest::Action action, ListDatasetEntriesRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetEntriesRequest
 * class' copy constructor.
 */
ListDatasetEntriesRequestPrivate::ListDatasetEntriesRequestPrivate(
    const ListDatasetEntriesRequestPrivate &other, ListDatasetEntriesRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
