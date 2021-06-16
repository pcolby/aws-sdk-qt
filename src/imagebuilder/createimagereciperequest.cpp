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

#include "createimagereciperequest.h"
#include "createimagereciperequest_p.h"
#include "createimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::CreateImageRecipeRequest
 * \brief The CreateImageRecipeRequest class provides an interface for imagebuilder CreateImageRecipe requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::createImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageRecipeRequest::CreateImageRecipeRequest(const CreateImageRecipeRequest &other)
    : imagebuilderRequest(new CreateImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageRecipeRequest object.
 */
CreateImageRecipeRequest::CreateImageRecipeRequest()
    : imagebuilderRequest(new CreateImageRecipeRequestPrivate(imagebuilderRequest::CreateImageRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImageRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImageRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImageRecipeRequest::response(QNetworkReply * const reply) const
{
    return new CreateImageRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::CreateImageRecipeRequestPrivate
 * \brief The CreateImageRecipeRequestPrivate class provides private implementation for CreateImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a CreateImageRecipeRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
CreateImageRecipeRequestPrivate::CreateImageRecipeRequestPrivate(
    const imagebuilderRequest::Action action, CreateImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImageRecipeRequest
 * class' copy constructor.
 */
CreateImageRecipeRequestPrivate::CreateImageRecipeRequestPrivate(
    const CreateImageRecipeRequestPrivate &other, CreateImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
