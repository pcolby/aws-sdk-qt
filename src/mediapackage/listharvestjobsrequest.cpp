// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listharvestjobsrequest.h"
#include "listharvestjobsrequest_p.h"
#include "listharvestjobsresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsRequest
 * \brief The ListHarvestJobsRequest class provides an interface for MediaPackage ListHarvestJobs requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::listHarvestJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListHarvestJobsRequest::ListHarvestJobsRequest(const ListHarvestJobsRequest &other)
    : MediaPackageRequest(new ListHarvestJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHarvestJobsRequest object.
 */
ListHarvestJobsRequest::ListHarvestJobsRequest()
    : MediaPackageRequest(new ListHarvestJobsRequestPrivate(MediaPackageRequest::ListHarvestJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListHarvestJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHarvestJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHarvestJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListHarvestJobsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::ListHarvestJobsRequestPrivate
 * \brief The ListHarvestJobsRequestPrivate class provides private implementation for ListHarvestJobsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ListHarvestJobsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
ListHarvestJobsRequestPrivate::ListHarvestJobsRequestPrivate(
    const MediaPackageRequest::Action action, ListHarvestJobsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHarvestJobsRequest
 * class' copy constructor.
 */
ListHarvestJobsRequestPrivate::ListHarvestJobsRequestPrivate(
    const ListHarvestJobsRequestPrivate &other, ListHarvestJobsRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
