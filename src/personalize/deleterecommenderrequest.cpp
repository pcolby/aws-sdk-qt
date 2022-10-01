// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecommenderrequest.h"
#include "deleterecommenderrequest_p.h"
#include "deleterecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteRecommenderRequest
 * \brief The DeleteRecommenderRequest class provides an interface for Personalize DeleteRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecommenderRequest::DeleteRecommenderRequest(const DeleteRecommenderRequest &other)
    : PersonalizeRequest(new DeleteRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecommenderRequest object.
 */
DeleteRecommenderRequest::DeleteRecommenderRequest()
    : PersonalizeRequest(new DeleteRecommenderRequestPrivate(PersonalizeRequest::DeleteRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteRecommenderRequestPrivate
 * \brief The DeleteRecommenderRequestPrivate class provides private implementation for DeleteRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteRecommenderRequestPrivate::DeleteRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, DeleteRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecommenderRequest
 * class' copy constructor.
 */
DeleteRecommenderRequestPrivate::DeleteRecommenderRequestPrivate(
    const DeleteRecommenderRequestPrivate &other, DeleteRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
