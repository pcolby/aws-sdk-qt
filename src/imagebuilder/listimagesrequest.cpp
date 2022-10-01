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

#include "listimagesrequest.h"
#include "listimagesrequest_p.h"
#include "listimagesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImagesRequest
 * \brief The ListImagesRequest class provides an interface for ImageBuilder ListImages requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagesRequest::ListImagesRequest(const ListImagesRequest &other)
    : ImageBuilderRequest(new ListImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagesRequest object.
 */
ListImagesRequest::ListImagesRequest()
    : ImageBuilderRequest(new ListImagesRequestPrivate(ImageBuilderRequest::ListImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImagesRequestPrivate
 * \brief The ListImagesRequestPrivate class provides private implementation for ListImagesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImagesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImagesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagesRequest
 * class' copy constructor.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ListImagesRequestPrivate &other, ListImagesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
