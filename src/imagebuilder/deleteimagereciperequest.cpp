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

#include "deleteimagereciperequest.h"
#include "deleteimagereciperequest_p.h"
#include "deleteimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::DeleteImageRecipeRequest
 * \brief The DeleteImageRecipeRequest class provides an interface for imagebuilder DeleteImageRecipe requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::deleteImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRecipeRequest::DeleteImageRecipeRequest(const DeleteImageRecipeRequest &other)
    : imagebuilderRequest(new DeleteImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRecipeRequest object.
 */
DeleteImageRecipeRequest::DeleteImageRecipeRequest()
    : imagebuilderRequest(new DeleteImageRecipeRequestPrivate(imagebuilderRequest::DeleteImageRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImageRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImageRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImageRecipeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImageRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::DeleteImageRecipeRequestPrivate
 * \brief The DeleteImageRecipeRequestPrivate class provides private implementation for DeleteImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a DeleteImageRecipeRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
DeleteImageRecipeRequestPrivate::DeleteImageRecipeRequestPrivate(
    const imagebuilderRequest::Action action, DeleteImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImageRecipeRequest
 * class' copy constructor.
 */
DeleteImageRecipeRequestPrivate::DeleteImageRecipeRequestPrivate(
    const DeleteImageRecipeRequestPrivate &other, DeleteImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
