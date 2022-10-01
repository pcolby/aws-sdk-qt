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

#include "listapplicationinstancesrequest.h"
#include "listapplicationinstancesrequest_p.h"
#include "listapplicationinstancesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstancesRequest
 * \brief The ListApplicationInstancesRequest class provides an interface for Panorama ListApplicationInstances requests.
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
 * \sa PanoramaClient::listApplicationInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationInstancesRequest::ListApplicationInstancesRequest(const ListApplicationInstancesRequest &other)
    : PanoramaRequest(new ListApplicationInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationInstancesRequest object.
 */
ListApplicationInstancesRequest::ListApplicationInstancesRequest()
    : PanoramaRequest(new ListApplicationInstancesRequestPrivate(PanoramaRequest::ListApplicationInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListApplicationInstancesRequestPrivate
 * \brief The ListApplicationInstancesRequestPrivate class provides private implementation for ListApplicationInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstancesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListApplicationInstancesRequestPrivate::ListApplicationInstancesRequestPrivate(
    const PanoramaRequest::Action action, ListApplicationInstancesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationInstancesRequest
 * class' copy constructor.
 */
ListApplicationInstancesRequestPrivate::ListApplicationInstancesRequestPrivate(
    const ListApplicationInstancesRequestPrivate &other, ListApplicationInstancesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
