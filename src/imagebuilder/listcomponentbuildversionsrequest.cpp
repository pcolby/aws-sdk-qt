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

#include "listcomponentbuildversionsrequest.h"
#include "listcomponentbuildversionsrequest_p.h"
#include "listcomponentbuildversionsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListComponentBuildVersionsRequest
 * \brief The ListComponentBuildVersionsRequest class provides an interface for imagebuilder ListComponentBuildVersions requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listComponentBuildVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentBuildVersionsRequest::ListComponentBuildVersionsRequest(const ListComponentBuildVersionsRequest &other)
    : imagebuilderRequest(new ListComponentBuildVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentBuildVersionsRequest object.
 */
ListComponentBuildVersionsRequest::ListComponentBuildVersionsRequest()
    : imagebuilderRequest(new ListComponentBuildVersionsRequestPrivate(imagebuilderRequest::ListComponentBuildVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentBuildVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentBuildVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentBuildVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentBuildVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListComponentBuildVersionsRequestPrivate
 * \brief The ListComponentBuildVersionsRequestPrivate class provides private implementation for ListComponentBuildVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListComponentBuildVersionsRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListComponentBuildVersionsRequestPrivate::ListComponentBuildVersionsRequestPrivate(
    const imagebuilderRequest::Action action, ListComponentBuildVersionsRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentBuildVersionsRequest
 * class' copy constructor.
 */
ListComponentBuildVersionsRequestPrivate::ListComponentBuildVersionsRequestPrivate(
    const ListComponentBuildVersionsRequestPrivate &other, ListComponentBuildVersionsRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
