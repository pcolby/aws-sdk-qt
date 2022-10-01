// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperiencesrequest.h"
#include "listexperiencesrequest_p.h"
#include "listexperiencesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperiencesRequest
 * \brief The ListExperiencesRequest class provides an interface for Kendra ListExperiences requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperiences
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperiencesRequest::ListExperiencesRequest(const ListExperiencesRequest &other)
    : KendraRequest(new ListExperiencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperiencesRequest object.
 */
ListExperiencesRequest::ListExperiencesRequest()
    : KendraRequest(new ListExperiencesRequestPrivate(KendraRequest::ListExperiencesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperiencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperiencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperiencesRequest::response(QNetworkReply * const reply) const
{
    return new ListExperiencesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListExperiencesRequestPrivate
 * \brief The ListExperiencesRequestPrivate class provides private implementation for ListExperiencesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperiencesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListExperiencesRequestPrivate::ListExperiencesRequestPrivate(
    const KendraRequest::Action action, ListExperiencesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperiencesRequest
 * class' copy constructor.
 */
ListExperiencesRequestPrivate::ListExperiencesRequestPrivate(
    const ListExperiencesRequestPrivate &other, ListExperiencesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
