// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecommendersrequest.h"
#include "listrecommendersrequest_p.h"
#include "listrecommendersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListRecommendersRequest
 * \brief The ListRecommendersRequest class provides an interface for Personalize ListRecommenders requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listRecommenders
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecommendersRequest::ListRecommendersRequest(const ListRecommendersRequest &other)
    : PersonalizeRequest(new ListRecommendersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecommendersRequest object.
 */
ListRecommendersRequest::ListRecommendersRequest()
    : PersonalizeRequest(new ListRecommendersRequestPrivate(PersonalizeRequest::ListRecommendersAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecommendersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecommendersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecommendersRequest::response(QNetworkReply * const reply) const
{
    return new ListRecommendersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListRecommendersRequestPrivate
 * \brief The ListRecommendersRequestPrivate class provides private implementation for ListRecommendersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListRecommendersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListRecommendersRequestPrivate::ListRecommendersRequestPrivate(
    const PersonalizeRequest::Action action, ListRecommendersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecommendersRequest
 * class' copy constructor.
 */
ListRecommendersRequestPrivate::ListRecommendersRequestPrivate(
    const ListRecommendersRequestPrivate &other, ListRecommendersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
