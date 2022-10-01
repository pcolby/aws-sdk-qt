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

#include "getimagerequest.h"
#include "getimagerequest_p.h"
#include "getimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageRequest
 * \brief The GetImageRequest class provides an interface for ImageBuilder GetImage requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImage
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRequest::GetImageRequest(const GetImageRequest &other)
    : ImageBuilderRequest(new GetImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRequest object.
 */
GetImageRequest::GetImageRequest()
    : ImageBuilderRequest(new GetImageRequestPrivate(ImageBuilderRequest::GetImageAction, this))
{

}

/*!
 * \reimp
 */
bool GetImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImageRequest::response(QNetworkReply * const reply) const
{
    return new GetImageResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetImageRequestPrivate
 * \brief The GetImageRequestPrivate class provides private implementation for GetImageRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImageRequestPrivate::GetImageRequestPrivate(
    const ImageBuilderRequest::Action action, GetImageRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImageRequest
 * class' copy constructor.
 */
GetImageRequestPrivate::GetImageRequestPrivate(
    const GetImageRequestPrivate &other, GetImageRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
