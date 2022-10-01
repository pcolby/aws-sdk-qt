// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listimagerecipesrequest.h"
#include "listimagerecipesrequest_p.h"
#include "listimagerecipesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ListImageRecipesRequest
 * \brief The ListImageRecipesRequest class provides an interface for ImageBuilder ListImageRecipes requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::listImageRecipes
 */

/*!
 * Constructs a copy of \a other.
 */
ListImageRecipesRequest::ListImageRecipesRequest(const ListImageRecipesRequest &other)
    : ImageBuilderRequest(new ListImageRecipesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImageRecipesRequest object.
 */
ListImageRecipesRequest::ListImageRecipesRequest()
    : ImageBuilderRequest(new ListImageRecipesRequestPrivate(ImageBuilderRequest::ListImageRecipesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImageRecipesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImageRecipesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImageRecipesRequest::response(QNetworkReply * const reply) const
{
    return new ListImageRecipesResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ListImageRecipesRequestPrivate
 * \brief The ListImageRecipesRequestPrivate class provides private implementation for ListImageRecipesRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ListImageRecipesRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ListImageRecipesRequestPrivate::ListImageRecipesRequestPrivate(
    const ImageBuilderRequest::Action action, ListImageRecipesRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImageRecipesRequest
 * class' copy constructor.
 */
ListImageRecipesRequestPrivate::ListImageRecipesRequestPrivate(
    const ListImageRecipesRequestPrivate &other, ListImageRecipesRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
