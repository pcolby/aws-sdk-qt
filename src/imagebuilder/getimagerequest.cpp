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
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImageRequest
 * \brief The GetImageRequest class provides an interface for imagebuilder GetImage requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImage
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRequest::GetImageRequest(const GetImageRequest &other)
    : imagebuilderRequest(new GetImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRequest object.
 */
GetImageRequest::GetImageRequest()
    : imagebuilderRequest(new GetImageRequestPrivate(imagebuilderRequest::GetImageAction, this))
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
 * \class QtAws::imagebuilder::GetImageRequestPrivate
 * \brief The GetImageRequestPrivate class provides private implementation for GetImageRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImageRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetImageRequestPrivate::GetImageRequestPrivate(
    const imagebuilderRequest::Action action, GetImageRequest * const q)
    : imagebuilderRequestPrivate(action, q)
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
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
