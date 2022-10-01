// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimagereciperequest.h"
#include "getimagereciperequest_p.h"
#include "getimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImageRecipeRequest
 * \brief The GetImageRecipeRequest class provides an interface for ImageBuilder GetImageRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
GetImageRecipeRequest::GetImageRecipeRequest(const GetImageRecipeRequest &other)
    : ImageBuilderRequest(new GetImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImageRecipeRequest object.
 */
GetImageRecipeRequest::GetImageRecipeRequest()
    : ImageBuilderRequest(new GetImageRecipeRequestPrivate(ImageBuilderRequest::GetImageRecipeAction, this))
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
 * \class QtAws::ImageBuilder::GetImageRecipeRequestPrivate
 * \brief The GetImageRecipeRequestPrivate class provides private implementation for GetImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImageRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetImageRecipeRequestPrivate::GetImageRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, GetImageRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
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
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
