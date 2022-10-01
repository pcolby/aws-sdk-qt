// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelpackagingjobsrequest.h"
#include "listmodelpackagingjobsrequest_p.h"
#include "listmodelpackagingjobsresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::ListModelPackagingJobsRequest
 * \brief The ListModelPackagingJobsRequest class provides an interface for LookoutVision ListModelPackagingJobs requests.
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
 * \sa LookoutVisionClient::listModelPackagingJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelPackagingJobsRequest::ListModelPackagingJobsRequest(const ListModelPackagingJobsRequest &other)
    : LookoutVisionRequest(new ListModelPackagingJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelPackagingJobsRequest object.
 */
ListModelPackagingJobsRequest::ListModelPackagingJobsRequest()
    : LookoutVisionRequest(new ListModelPackagingJobsRequestPrivate(LookoutVisionRequest::ListModelPackagingJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelPackagingJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelPackagingJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelPackagingJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelPackagingJobsResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::ListModelPackagingJobsRequestPrivate
 * \brief The ListModelPackagingJobsRequestPrivate class provides private implementation for ListModelPackagingJobsRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a ListModelPackagingJobsRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
ListModelPackagingJobsRequestPrivate::ListModelPackagingJobsRequestPrivate(
    const LookoutVisionRequest::Action action, ListModelPackagingJobsRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelPackagingJobsRequest
 * class' copy constructor.
 */
ListModelPackagingJobsRequestPrivate::ListModelPackagingJobsRequestPrivate(
    const ListModelPackagingJobsRequestPrivate &other, ListModelPackagingJobsRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
