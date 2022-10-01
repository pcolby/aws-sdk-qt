// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontainerrecipesrequest.h"
#include "listcontainerrecipesrequest_p.h"
#include "listcontainerrecipesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesRequest
 * \brief The ListContainerRecipesRequest class provides an interface for ImageBuilder ListContainerRecipes requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listContainerRecipes
 */

/*!
 * Constructs a copy of \a other.
 */
ListContainerRecipesRequest::ListContainerRecipesRequest(const ListContainerRecipesRequest &other)
    : ImageBuilderRequest(new ListContainerRecipesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContainerRecipesRequest object.
 */
ListContainerRecipesRequest::ListContainerRecipesRequest()
    : ImageBuilderRequest(new ListContainerRecipesRequestPrivate(ImageBuilderRequest::ListContainerRecipesAction, this))
{

}

/*!
 * \reimp
 */
bool ListContainerRecipesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContainerRecipesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContainerRecipesRequest::response(QNetworkReply * const reply) const
{
    return new ListContainerRecipesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListContainerRecipesRequestPrivate
 * \brief The ListContainerRecipesRequestPrivate class provides private implementation for ListContainerRecipesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListContainerRecipesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListContainerRecipesRequestPrivate::ListContainerRecipesRequestPrivate(
    const ImageBuilderRequest::Action action, ListContainerRecipesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContainerRecipesRequest
 * class' copy constructor.
 */
ListContainerRecipesRequestPrivate::ListContainerRecipesRequestPrivate(
    const ListContainerRecipesRequestPrivate &other, ListContainerRecipesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
