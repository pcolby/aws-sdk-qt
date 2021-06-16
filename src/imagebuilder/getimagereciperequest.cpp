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

#include "getimagereciperequest.h"
#include "getimagereciperequest_p.h"
#include "getimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImageRecipeRequest
 * \brief The GetImageRecipeRequest class provides an interface for imagebuilder GetImageRecipe requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRecipeRequest::GetImageRecipeRequest(const GetImageRecipeRequest &other)
    : imagebuilderRequest(new GetImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRecipeRequest object.
 */
GetImageRecipeRequest::GetImageRecipeRequest()
    : imagebuilderRequest(new GetImageRecipeRequestPrivate(imagebuilderRequest::GetImageRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool GetImageRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImageRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImageRecipeRequest::response(QNetworkReply * const reply) const
{
    return new GetImageRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetImageRecipeRequestPrivate
 * \brief The GetImageRecipeRequestPrivate class provides private implementation for GetImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImageRecipeRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetImageRecipeRequestPrivate::GetImageRecipeRequestPrivate(
    const imagebuilderRequest::Action action, GetImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImageRecipeRequest
 * class' copy constructor.
 */
GetImageRecipeRequestPrivate::GetImageRecipeRequestPrivate(
    const GetImageRecipeRequestPrivate &other, GetImageRecipeRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
