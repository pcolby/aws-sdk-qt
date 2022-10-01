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

#include "listcontainerrecipesrequest.h"
#include "listcontainerrecipesrequest_p.h"
#include "listcontainerrecipesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesRequest
 * \brief The ListContainerRecipesRequest class provides an interface for ImageBuilder ListContainerRecipes requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listContainerRecipes
 */

/*!
 * Constructs a copy of \a other.
 */
ListContainerRecipesRequest::ListContainerRecipesRequest(const ListContainerRecipesRequest &other)
    : ImageBuilderRequest(new ListContainerRecipesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContainerRecipesRequest object.
 */
ListContainerRecipesRequest::ListContainerRecipesRequest()
    : ImageBuilderRequest(new ListContainerRecipesRequestPrivate(ImageBuilderRequest::ListContainerRecipesAction, this))
{

}

/*!
 * \reimp
 */
bool ListContainerRecipesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContainerRecipesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContainerRecipesRequest::response(QNetworkReply * const reply) const
{
    return new ListContainerRecipesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesRequestPrivate
 * \brief The ListContainerRecipesRequestPrivate class provides private implementation for ListContainerRecipesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListContainerRecipesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListContainerRecipesRequestPrivate::ListContainerRecipesRequestPrivate(
    const ImageBuilderRequest::Action action, ListContainerRecipesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContainerRecipesRequest
 * class' copy constructor.
 */
ListContainerRecipesRequestPrivate::ListContainerRecipesRequestPrivate(
    const ListContainerRecipesRequestPrivate &other, ListContainerRecipesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
