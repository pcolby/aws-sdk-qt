// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetsRequest
 * \brief The ListDatasetsRequest class provides an interface for Personalize ListDatasets requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : PersonalizeRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : PersonalizeRequest(new ListDatasetsRequestPrivate(PersonalizeRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListDatasetsRequestPrivate
 * \brief The ListDatasetsRequestPrivate class provides private implementation for ListDatasetsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const PersonalizeRequest::Action action, ListDatasetsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
