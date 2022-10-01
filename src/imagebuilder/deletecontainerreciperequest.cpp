// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
