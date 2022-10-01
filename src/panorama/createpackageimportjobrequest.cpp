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

#include "createpackageimportjobrequest.h"
#include "createpackageimportjobrequest_p.h"
#include "createpackageimportjobresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreatePackageImportJobRequest
 * \brief The CreatePackageImportJobRequest class provides an interface for Panorama CreatePackageImportJob requests.
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
 * \sa PanoramaClient::createPackageImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePackageImportJobRequest::CreatePackageImportJobRequest(const CreatePackageImportJobRequest &other)
    : PanoramaRequest(new CreatePackageImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePackageImportJobRequest object.
 */
CreatePackageImportJobRequest::CreatePackageImportJobRequest()
    : PanoramaRequest(new CreatePackageImportJobRequestPrivate(PanoramaRequest::CreatePackageImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePackageImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePackageImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePackageImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreatePackageImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::CreatePackageImportJobRequestPrivate
 * \brief The CreatePackageImportJobRequestPrivate class provides private implementation for CreatePackageImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreatePackageImportJobRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
CreatePackageImportJobRequestPrivate::CreatePackageImportJobRequestPrivate(
    const PanoramaRequest::Action action, CreatePackageImportJobRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePackageImportJobRequest
 * class' copy constructor.
 */
CreatePackageImportJobRequestPrivate::CreatePackageImportJobRequestPrivate(
    const CreatePackageImportJobRequestPrivate &other, CreatePackageImportJobRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
