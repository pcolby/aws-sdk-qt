// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsolutionsrequest.h"
#include "listsolutionsrequest_p.h"
#include "listsolutionsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionsRequest
 * \brief The ListSolutionsRequest class provides an interface for Personalize ListSolutions requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSolutionsRequest::ListSolutionsRequest(const ListSolutionsRequest &other)
    : PersonalizeRequest(new ListSolutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSolutionsRequest object.
 */
ListSolutionsRequest::ListSolutionsRequest()
    : PersonalizeRequest(new ListSolutionsRequestPrivate(PersonalizeRequest::ListSolutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSolutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSolutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSolutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSolutionsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListSolutionsRequestPrivate
 * \brief The ListSolutionsRequestPrivate class provides private implementation for ListSolutionsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListSolutionsRequestPrivate::ListSolutionsRequestPrivate(
    const PersonalizeRequest::Action action, ListSolutionsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSolutionsRequest
 * class' copy constructor.
 */
ListSolutionsRequestPrivate::ListSolutionsRequestPrivate(
    const ListSolutionsRequestPrivate &other, ListSolutionsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
