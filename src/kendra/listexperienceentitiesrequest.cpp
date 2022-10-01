// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperienceentitiesrequest.h"
#include "listexperienceentitiesrequest_p.h"
#include "listexperienceentitiesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesRequest
 * \brief The ListExperienceEntitiesRequest class provides an interface for Kendra ListExperienceEntities requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listExperienceEntities
 */

/*!
 * Constructs a copy of \a other.
 */
ListExperienceEntitiesRequest::ListExperienceEntitiesRequest(const ListExperienceEntitiesRequest &other)
    : KendraRequest(new ListExperienceEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExperienceEntitiesRequest object.
 */
ListExperienceEntitiesRequest::ListExperienceEntitiesRequest()
    : KendraRequest(new ListExperienceEntitiesRequestPrivate(KendraRequest::ListExperienceEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExperienceEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExperienceEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExperienceEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListExperienceEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListExperienceEntitiesRequestPrivate
 * \brief The ListExperienceEntitiesRequestPrivate class provides private implementation for ListExperienceEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListExperienceEntitiesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListExperienceEntitiesRequestPrivate::ListExperienceEntitiesRequestPrivate(
    const KendraRequest::Action action, ListExperienceEntitiesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExperienceEntitiesRequest
 * class' copy constructor.
 */
ListExperienceEntitiesRequestPrivate::ListExperienceEntitiesRequestPrivate(
    const ListExperienceEntitiesRequestPrivate &other, ListExperienceEntitiesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
