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
