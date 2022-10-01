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

#include "deletecontainerreciperequest.h"
#include "deletecontainerreciperequest_p.h"
#include "deletecontainerreciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteContainerRecipeRequest
 * \brief The DeleteContainerRecipeRequest class provides an interface for ImageBuilder DeleteContainerRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteContainerRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContainerRecipeRequest::DeleteContainerRecipeRequest(const DeleteContainerRecipeRequest &other)
    : ImageBuilderRequest(new DeleteContainerRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContainerRecipeRequest object.
 */
DeleteContainerRecipeRequest::DeleteContainerRecipeRequest()
    : ImageBuilderRequest(new DeleteContainerRecipeRequestPrivate(ImageBuilderRequest::DeleteContainerRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContainerRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContainerRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContainerRecipeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContainerRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::DeleteContainerRecipeRequestPrivate
 * \brief The DeleteContainerRecipeRequestPrivate class provides private implementation for DeleteContainerRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteContainerRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteContainerRecipeRequestPrivate::DeleteContainerRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContainerRecipeRequest
 * class' copy constructor.
 */
DeleteContainerRecipeRequestPrivate::DeleteContainerRecipeRequestPrivate(
    const DeleteContainerRecipeRequestPrivate &other, DeleteContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
