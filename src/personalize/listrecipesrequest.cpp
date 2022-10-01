// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecipesrequest.h"
#include "listrecipesrequest_p.h"
#include "listrecipesresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecipesRequest
 * \brief The ListRecipesRequest class provides an interface for Personalize ListRecipes requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecipes
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecipesRequest::ListRecipesRequest(const ListRecipesRequest &other)
    : PersonalizeRequest(new ListRecipesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecipesRequest object.
 */
ListRecipesRequest::ListRecipesRequest()
    : PersonalizeRequest(new ListRecipesRequestPrivate(PersonalizeRequest::ListRecipesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecipesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecipesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecipesRequest::response(QNetworkReply * const reply) const
{
    return new ListRecipesResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListRecipesRequestPrivate
 * \brief The ListRecipesRequestPrivate class provides private implementation for ListRecipesRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecipesRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListRecipesRequestPrivate::ListRecipesRequestPrivate(
    const PersonalizeRequest::Action action, ListRecipesRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecipesRequest
 * class' copy constructor.
 */
ListRecipesRequestPrivate::ListRecipesRequestPrivate(
    const ListRecipesRequestPrivate &other, ListRecipesRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
