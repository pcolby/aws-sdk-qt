/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
