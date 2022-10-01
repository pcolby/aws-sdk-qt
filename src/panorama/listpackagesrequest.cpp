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

#include "listpackagesrequest.h"
#include "listpackagesrequest_p.h"
#include "listpackagesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListPackagesRequest
 * \brief The ListPackagesRequest class provides an interface for Panorama ListPackages requests.
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
 * \sa PanoramaClient::listPackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListPackagesRequest::ListPackagesRequest(const ListPackagesRequest &other)
    : PanoramaRequest(new ListPackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPackagesRequest object.
 */
ListPackagesRequest::ListPackagesRequest()
    : PanoramaRequest(new ListPackagesRequestPrivate(PanoramaRequest::ListPackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListPackagesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListPackagesRequestPrivate
 * \brief The ListPackagesRequestPrivate class provides private implementation for ListPackagesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListPackagesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListPackagesRequestPrivate::ListPackagesRequestPrivate(
    const PanoramaRequest::Action action, ListPackagesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPackagesRequest
 * class' copy constructor.
 */
ListPackagesRequestPrivate::ListPackagesRequestPrivate(
    const ListPackagesRequestPrivate &other, ListPackagesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
