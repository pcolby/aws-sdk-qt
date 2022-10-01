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

#include "listdevicesjobsrequest.h"
#include "listdevicesjobsrequest_p.h"
#include "listdevicesjobsresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListDevicesJobsRequest
 * \brief The ListDevicesJobsRequest class provides an interface for Panorama ListDevicesJobs requests.
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
 * \sa PanoramaClient::listDevicesJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesJobsRequest::ListDevicesJobsRequest(const ListDevicesJobsRequest &other)
    : PanoramaRequest(new ListDevicesJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesJobsRequest object.
 */
ListDevicesJobsRequest::ListDevicesJobsRequest()
    : PanoramaRequest(new ListDevicesJobsRequestPrivate(PanoramaRequest::ListDevicesJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListDevicesJobsRequestPrivate
 * \brief The ListDevicesJobsRequestPrivate class provides private implementation for ListDevicesJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListDevicesJobsRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListDevicesJobsRequestPrivate::ListDevicesJobsRequestPrivate(
    const PanoramaRequest::Action action, ListDevicesJobsRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesJobsRequest
 * class' copy constructor.
 */
ListDevicesJobsRequestPrivate::ListDevicesJobsRequestPrivate(
    const ListDevicesJobsRequestPrivate &other, ListDevicesJobsRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
