// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsolutionversionsrequest.h"
#include "listsolutionversionsrequest_p.h"
#include "listsolutionversionsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListSolutionVersionsRequest
 * \brief The ListSolutionVersionsRequest class provides an interface for Personalize ListSolutionVersions requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listSolutionVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSolutionVersionsRequest::ListSolutionVersionsRequest(const ListSolutionVersionsRequest &other)
    : PersonalizeRequest(new ListSolutionVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSolutionVersionsRequest object.
 */
ListSolutionVersionsRequest::ListSolutionVersionsRequest()
    : PersonalizeRequest(new ListSolutionVersionsRequestPrivate(PersonalizeRequest::ListSolutionVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSolutionVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSolutionVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSolutionVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSolutionVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListSolutionVersionsRequestPrivate
 * \brief The ListSolutionVersionsRequestPrivate class provides private implementation for ListSolutionVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListSolutionVersionsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListSolutionVersionsRequestPrivate::ListSolutionVersionsRequestPrivate(
    const PersonalizeRequest::Action action, ListSolutionVersionsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSolutionVersionsRequest
 * class' copy constructor.
 */
ListSolutionVersionsRequestPrivate::ListSolutionVersionsRequestPrivate(
    const ListSolutionVersionsRequestPrivate &other, ListSolutionVersionsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
