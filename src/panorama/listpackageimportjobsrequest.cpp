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

#include "listpackageimportjobsrequest.h"
#include "listpackageimportjobsrequest_p.h"
#include "listpackageimportjobsresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListPackageImportJobsRequest
 * \brief The ListPackageImportJobsRequest class provides an interface for Panorama ListPackageImportJobs requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::listPackageImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListPackageImportJobsRequest::ListPackageImportJobsRequest(const ListPackageImportJobsRequest &other)
    : PanoramaRequest(new ListPackageImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPackageImportJobsRequest object.
 */
ListPackageImportJobsRequest::ListPackageImportJobsRequest()
    : PanoramaRequest(new ListPackageImportJobsRequestPrivate(PanoramaRequest::ListPackageImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPackageImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPackageImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPackageImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListPackageImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListPackageImportJobsRequestPrivate
 * \brief The ListPackageImportJobsRequestPrivate class provides private implementation for ListPackageImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListPackageImportJobsRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListPackageImportJobsRequestPrivate::ListPackageImportJobsRequestPrivate(
    const PanoramaRequest::Action action, ListPackageImportJobsRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPackageImportJobsRequest
 * class' copy constructor.
 */
ListPackageImportJobsRequestPrivate::ListPackageImportJobsRequestPrivate(
    const ListPackageImportJobsRequestPrivate &other, ListPackageImportJobsRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
