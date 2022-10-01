// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfiltersrequest.h"
#include "listfiltersrequest_p.h"
#include "listfiltersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListFiltersRequest
 * \brief The ListFiltersRequest class provides an interface for Personalize ListFilters requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListFiltersRequest::ListFiltersRequest(const ListFiltersRequest &other)
    : PersonalizeRequest(new ListFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFiltersRequest object.
 */
ListFiltersRequest::ListFiltersRequest()
    : PersonalizeRequest(new ListFiltersRequestPrivate(PersonalizeRequest::ListFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListFiltersRequestPrivate
 * \brief The ListFiltersRequestPrivate class provides private implementation for ListFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListFiltersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const PersonalizeRequest::Action action, ListFiltersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFiltersRequest
 * class' copy constructor.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const ListFiltersRequestPrivate &other, ListFiltersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
