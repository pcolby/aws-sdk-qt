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

#include "listcomponentsrequest.h"
#include "listcomponentsrequest_p.h"
#include "listcomponentsresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListComponentsRequest
 * \brief The ListComponentsRequest class provides an interface for imagebuilder ListComponents requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentsRequest::ListComponentsRequest(const ListComponentsRequest &other)
    : imagebuilderRequest(new ListComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentsRequest object.
 */
ListComponentsRequest::ListComponentsRequest()
    : imagebuilderRequest(new ListComponentsRequestPrivate(imagebuilderRequest::ListComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListComponentsRequestPrivate
 * \brief The ListComponentsRequestPrivate class provides private implementation for ListComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListComponentsRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const imagebuilderRequest::Action action, ListComponentsRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentsRequest
 * class' copy constructor.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ListComponentsRequestPrivate &other, ListComponentsRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
