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

#include "createimagerequest.h"
#include "createimagerequest_p.h"
#include "createimageresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateImageRequest
 * \brief The CreateImageRequest class provides an interface for imagebuilder CreateImage requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createImage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageRequest::CreateImageRequest(const CreateImageRequest &other)
    : imagebuilderRequest(new CreateImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageRequest object.
 */
CreateImageRequest::CreateImageRequest()
    : imagebuilderRequest(new CreateImageRequestPrivate(imagebuilderRequest::CreateImageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateImageRequestPrivate
 * \brief The CreateImageRequestPrivate class provides private implementation for CreateImageRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateImageRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const imagebuilderRequest::Action action, CreateImageRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageRequest
 * class' copy constructor.
 */
CreateImageRequestPrivate::CreateImageRequestPrivate(
    const CreateImageRequestPrivate &other, CreateImageRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
