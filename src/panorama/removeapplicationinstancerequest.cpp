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

#include "removeapplicationinstancerequest.h"
#include "removeapplicationinstancerequest_p.h"
#include "removeapplicationinstanceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceRequest
 * \brief The RemoveApplicationInstanceRequest class provides an interface for Panorama RemoveApplicationInstance requests.
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
 * \sa PanoramaClient::removeApplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveApplicationInstanceRequest::RemoveApplicationInstanceRequest(const RemoveApplicationInstanceRequest &other)
    : PanoramaRequest(new RemoveApplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveApplicationInstanceRequest object.
 */
RemoveApplicationInstanceRequest::RemoveApplicationInstanceRequest()
    : PanoramaRequest(new RemoveApplicationInstanceRequestPrivate(PanoramaRequest::RemoveApplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveApplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveApplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveApplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveApplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceRequestPrivate
 * \brief The RemoveApplicationInstanceRequestPrivate class provides private implementation for RemoveApplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RemoveApplicationInstanceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
RemoveApplicationInstanceRequestPrivate::RemoveApplicationInstanceRequestPrivate(
    const PanoramaRequest::Action action, RemoveApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveApplicationInstanceRequest
 * class' copy constructor.
 */
RemoveApplicationInstanceRequestPrivate::RemoveApplicationInstanceRequestPrivate(
    const RemoveApplicationInstanceRequestPrivate &other, RemoveApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
