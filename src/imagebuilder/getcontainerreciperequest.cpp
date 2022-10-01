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

#include "getcontainerreciperequest.h"
#include "getcontainerreciperequest_p.h"
#include "getcontainerreciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipeRequest
 * \brief The GetContainerRecipeRequest class provides an interface for ImageBuilder GetContainerRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getContainerRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
GetContainerRecipeRequest::GetContainerRecipeRequest(const GetContainerRecipeRequest &other)
    : ImageBuilderRequest(new GetContainerRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContainerRecipeRequest object.
 */
GetContainerRecipeRequest::GetContainerRecipeRequest()
    : ImageBuilderRequest(new GetContainerRecipeRequestPrivate(ImageBuilderRequest::GetContainerRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool GetContainerRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContainerRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContainerRecipeRequest::response(QNetworkReply * const reply) const
{
    return new GetContainerRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetContainerRecipeRequestPrivate
 * \brief The GetContainerRecipeRequestPrivate class provides private implementation for GetContainerRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetContainerRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetContainerRecipeRequestPrivate::GetContainerRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, GetContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContainerRecipeRequest
 * class' copy constructor.
 */
GetContainerRecipeRequestPrivate::GetContainerRecipeRequestPrivate(
    const GetContainerRecipeRequestPrivate &other, GetContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
