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

#include "listimagebuildversionsrequest.h"
#include "listimagebuildversionsrequest_p.h"
#include "listimagebuildversionsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImageBuildVersionsRequest
 * \brief The ListImageBuildVersionsRequest class provides an interface for imagebuilder ListImageBuildVersions requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImageBuildVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListImageBuildVersionsRequest::ListImageBuildVersionsRequest(const ListImageBuildVersionsRequest &other)
    : imagebuilderRequest(new ListImageBuildVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImageBuildVersionsRequest object.
 */
ListImageBuildVersionsRequest::ListImageBuildVersionsRequest()
    : imagebuilderRequest(new ListImageBuildVersionsRequestPrivate(imagebuilderRequest::ListImageBuildVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListImageBuildVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImageBuildVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImageBuildVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListImageBuildVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListImageBuildVersionsRequestPrivate
 * \brief The ListImageBuildVersionsRequestPrivate class provides private implementation for ListImageBuildVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImageBuildVersionsRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListImageBuildVersionsRequestPrivate::ListImageBuildVersionsRequestPrivate(
    const imagebuilderRequest::Action action, ListImageBuildVersionsRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImageBuildVersionsRequest
 * class' copy constructor.
 */
ListImageBuildVersionsRequestPrivate::ListImageBuildVersionsRequestPrivate(
    const ListImageBuildVersionsRequestPrivate &other, ListImageBuildVersionsRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
