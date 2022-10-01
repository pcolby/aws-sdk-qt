// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimagereciperequest.h"
#include "createimagereciperequest_p.h"
#include "createimagereciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImageRecipeRequest
 * \brief The CreateImageRecipeRequest class provides an interface for ImageBuilder CreateImageRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImageRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImageRecipeRequest::CreateImageRecipeRequest(const CreateImageRecipeRequest &other)
    : ImageBuilderRequest(new CreateImageRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImageRecipeRequest object.
 */
CreateImageRecipeRequest::CreateImageRecipeRequest()
    : ImageBuilderRequest(new CreateImageRecipeRequestPrivate(ImageBuilderRequest::CreateImageRecipeAction, this))
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
 * \class QtAws::ImageBuilder::CreateImageRecipeRequestPrivate
 * \brief The CreateImageRecipeRequestPrivate class provides private implementation for CreateImageRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImageRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateImageRecipeRequestPrivate::CreateImageRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, CreateImageRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
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
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
