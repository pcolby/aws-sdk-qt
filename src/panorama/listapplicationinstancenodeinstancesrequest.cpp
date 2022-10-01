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

#include "listapplicationinstancenodeinstancesrequest.h"
#include "listapplicationinstancenodeinstancesrequest_p.h"
#include "listapplicationinstancenodeinstancesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesRequest
 * \brief The ListApplicationInstanceNodeInstancesRequest class provides an interface for Panorama ListApplicationInstanceNodeInstances requests.
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
 * \sa PanoramaClient::listApplicationInstanceNodeInstances
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationInstanceNodeInstancesRequest::ListApplicationInstanceNodeInstancesRequest(const ListApplicationInstanceNodeInstancesRequest &other)
    : PanoramaRequest(new ListApplicationInstanceNodeInstancesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationInstanceNodeInstancesRequest object.
 */
ListApplicationInstanceNodeInstancesRequest::ListApplicationInstanceNodeInstancesRequest()
    : PanoramaRequest(new ListApplicationInstanceNodeInstancesRequestPrivate(PanoramaRequest::ListApplicationInstanceNodeInstancesAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationInstanceNodeInstancesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationInstanceNodeInstancesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationInstanceNodeInstancesRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationInstanceNodeInstancesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListApplicationInstanceNodeInstancesRequestPrivate
 * \brief The ListApplicationInstanceNodeInstancesRequestPrivate class provides private implementation for ListApplicationInstanceNodeInstancesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListApplicationInstanceNodeInstancesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListApplicationInstanceNodeInstancesRequestPrivate::ListApplicationInstanceNodeInstancesRequestPrivate(
    const PanoramaRequest::Action action, ListApplicationInstanceNodeInstancesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationInstanceNodeInstancesRequest
 * class' copy constructor.
 */
ListApplicationInstanceNodeInstancesRequestPrivate::ListApplicationInstanceNodeInstancesRequestPrivate(
    const ListApplicationInstanceNodeInstancesRequestPrivate &other, ListApplicationInstanceNodeInstancesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
