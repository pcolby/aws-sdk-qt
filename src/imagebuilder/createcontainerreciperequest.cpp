// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontainerreciperequest.h"
#include "createcontainerreciperequest_p.h"
#include "createcontainerreciperesponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateContainerRecipeRequest
 * \brief The CreateContainerRecipeRequest class provides an interface for ImageBuilder CreateContainerRecipe requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createContainerRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContainerRecipeRequest::CreateContainerRecipeRequest(const CreateContainerRecipeRequest &other)
    : ImageBuilderRequest(new CreateContainerRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContainerRecipeRequest object.
 */
CreateContainerRecipeRequest::CreateContainerRecipeRequest()
    : ImageBuilderRequest(new CreateContainerRecipeRequestPrivate(ImageBuilderRequest::CreateContainerRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContainerRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContainerRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContainerRecipeRequest::response(QNetworkReply * const reply) const
{
    return new CreateContainerRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::CreateContainerRecipeRequestPrivate
 * \brief The CreateContainerRecipeRequestPrivate class provides private implementation for CreateContainerRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateContainerRecipeRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
CreateContainerRecipeRequestPrivate::CreateContainerRecipeRequestPrivate(
    const ImageBuilderRequest::Action action, CreateContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContainerRecipeRequest
 * class' copy constructor.
 */
CreateContainerRecipeRequestPrivate::CreateContainerRecipeRequestPrivate(
    const CreateContainerRecipeRequestPrivate &other, CreateContainerRecipeRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
