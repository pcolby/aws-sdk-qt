// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimagereciperequest.h"
#include "deleteimagereciperequest_p.h"
#include "deleteimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::DeleteImageRecipeRequest
 * \brief The DeleteImageRecipeRequest class provides an interface for ImageBuilder DeleteImageRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::deleteImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImageRecipeRequest::DeleteImageRecipeRequest(const DeleteImageRecipeRequest &other)
    : ImageBuilderRequest(new DeleteImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImageRecipeRequest object.
 */
DeleteImageRecipeRequest::DeleteImageRecipeRequest()
    : ImageBuilderRequest(new DeleteImageRecipeRequestPrivate(ImageBuilderRequest::DeleteImageRecipeAction, this))
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
 * \class QtAws::ImageBuilder::DeleteImageRecipeRequestPrivate
 * \brief The DeleteImageRecipeRequestPrivate class provides private implementation for DeleteImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a DeleteImageRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
DeleteImageRecipeRequestPrivate::DeleteImageRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, DeleteImageRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
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
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
