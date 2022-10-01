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

#include "registerpackageversionrequest.h"
#include "registerpackageversionrequest_p.h"
#include "registerpackageversionresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RegisterPackageVersionRequest
 * \brief The RegisterPackageVersionRequest class provides an interface for Panorama RegisterPackageVersion requests.
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
 * \sa PanoramaClient::registerPackageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterPackageVersionRequest::RegisterPackageVersionRequest(const RegisterPackageVersionRequest &other)
    : PanoramaRequest(new RegisterPackageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterPackageVersionRequest object.
 */
RegisterPackageVersionRequest::RegisterPackageVersionRequest()
    : PanoramaRequest(new RegisterPackageVersionRequestPrivate(PanoramaRequest::RegisterPackageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterPackageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterPackageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterPackageVersionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterPackageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::RegisterPackageVersionRequestPrivate
 * \brief The RegisterPackageVersionRequestPrivate class provides private implementation for RegisterPackageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RegisterPackageVersionRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
RegisterPackageVersionRequestPrivate::RegisterPackageVersionRequestPrivate(
    const PanoramaRequest::Action action, RegisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterPackageVersionRequest
 * class' copy constructor.
 */
RegisterPackageVersionRequestPrivate::RegisterPackageVersionRequestPrivate(
    const RegisterPackageVersionRequestPrivate &other, RegisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
