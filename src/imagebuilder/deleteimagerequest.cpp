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

#include "deleteimagerequest.h"
#include "deleteimagerequest_p.h"
#include "deleteimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteImageRequest
 * \brief The DeleteImageRequest class provides an interface for imagebuilder DeleteImage requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRequest::DeleteImageRequest(const DeleteImageRequest &other)
    : imagebuilderRequest(new DeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRequest object.
 */
DeleteImageRequest::DeleteImageRequest()
    : imagebuilderRequest(new DeleteImageRequestPrivate(imagebuilderRequest::DeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::DeleteImageRequestPrivate
 * \brief The DeleteImageRequestPrivate class provides private implementation for DeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteImageRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const imagebuilderRequest::Action action, DeleteImageRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRequest
 * class' copy constructor.
 */
DeleteImageRequestPrivate::DeleteImageRequestPrivate(
    const DeleteImageRequestPrivate &other, DeleteImageRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
