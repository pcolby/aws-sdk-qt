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

#include "deletecomponentrequest.h"
#include "deletecomponentrequest_p.h"
#include "deletecomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteComponentRequest
 * \brief The DeleteComponentRequest class provides an interface for imagebuilder DeleteComponent requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteComponent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteComponentRequest::DeleteComponentRequest(const DeleteComponentRequest &other)
    : imagebuilderRequest(new DeleteComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteComponentRequest object.
 */
DeleteComponentRequest::DeleteComponentRequest()
    : imagebuilderRequest(new DeleteComponentRequestPrivate(imagebuilderRequest::DeleteComponentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteComponentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteComponentResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::DeleteComponentRequestPrivate
 * \brief The DeleteComponentRequestPrivate class provides private implementation for DeleteComponentRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteComponentRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
DeleteComponentRequestPrivate::DeleteComponentRequestPrivate(
    const imagebuilderRequest::Action action, DeleteComponentRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteComponentRequest
 * class' copy constructor.
 */
DeleteComponentRequestPrivate::DeleteComponentRequestPrivate(
    const DeleteComponentRequestPrivate &other, DeleteComponentRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
