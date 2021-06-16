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

#include "listimagepackagesrequest.h"
#include "listimagepackagesrequest_p.h"
#include "listimagepackagesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagePackagesRequest
 * \brief The ListImagePackagesRequest class provides an interface for imagebuilder ListImagePackages requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImagePackages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePackagesRequest::ListImagePackagesRequest(const ListImagePackagesRequest &other)
    : imagebuilderRequest(new ListImagePackagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePackagesRequest object.
 */
ListImagePackagesRequest::ListImagePackagesRequest()
    : imagebuilderRequest(new ListImagePackagesRequestPrivate(imagebuilderRequest::ListImagePackagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePackagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePackagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePackagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePackagesResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListImagePackagesRequestPrivate
 * \brief The ListImagePackagesRequestPrivate class provides private implementation for ListImagePackagesRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagePackagesRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListImagePackagesRequestPrivate::ListImagePackagesRequestPrivate(
    const imagebuilderRequest::Action action, ListImagePackagesRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePackagesRequest
 * class' copy constructor.
 */
ListImagePackagesRequestPrivate::ListImagePackagesRequestPrivate(
    const ListImagePackagesRequestPrivate &other, ListImagePackagesRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
