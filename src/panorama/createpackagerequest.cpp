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

#include "createpackagerequest.h"
#include "createpackagerequest_p.h"
#include "createpackageresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreatePackageRequest
 * \brief The CreatePackageRequest class provides an interface for Panorama CreatePackage requests.
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
 * \sa PanoramaClient::createPackage
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackageRequest::CreatePackageRequest(const CreatePackageRequest &other)
    : PanoramaRequest(new CreatePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackageRequest object.
 */
CreatePackageRequest::CreatePackageRequest()
    : PanoramaRequest(new CreatePackageRequestPrivate(PanoramaRequest::CreatePackageAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackageRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::CreatePackageRequestPrivate
 * \brief The CreatePackageRequestPrivate class provides private implementation for CreatePackageRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreatePackageRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const PanoramaRequest::Action action, CreatePackageRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackageRequest
 * class' copy constructor.
 */
CreatePackageRequestPrivate::CreatePackageRequestPrivate(
    const CreatePackageRequestPrivate &other, CreatePackageRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
