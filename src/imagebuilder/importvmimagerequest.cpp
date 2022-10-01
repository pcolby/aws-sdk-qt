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

#include "importvmimagerequest.h"
#include "importvmimagerequest_p.h"
#include "importvmimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImportVmImageRequest
 * \brief The ImportVmImageRequest class provides an interface for ImageBuilder ImportVmImage requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::importVmImage
 */

/*!
 * Constructs a copy of \a other.
 */
ImportVmImageRequest::ImportVmImageRequest(const ImportVmImageRequest &other)
    : ImageBuilderRequest(new ImportVmImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportVmImageRequest object.
 */
ImportVmImageRequest::ImportVmImageRequest()
    : ImageBuilderRequest(new ImportVmImageRequestPrivate(ImageBuilderRequest::ImportVmImageAction, this))
{

}

/*!
 * \reimp
 */
bool ImportVmImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportVmImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportVmImageRequest::response(QNetworkReply * const reply) const
{
    return new ImportVmImageResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ImportVmImageRequestPrivate
 * \brief The ImportVmImageRequestPrivate class provides private implementation for ImportVmImageRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImportVmImageRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ImportVmImageRequestPrivate::ImportVmImageRequestPrivate(
    const ImageBuilderRequest::Action action, ImportVmImageRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportVmImageRequest
 * class' copy constructor.
 */
ImportVmImageRequestPrivate::ImportVmImageRequestPrivate(
    const ImportVmImageRequestPrivate &other, ImportVmImageRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
