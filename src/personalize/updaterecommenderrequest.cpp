// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterecommenderrequest.h"
#include "updaterecommenderrequest_p.h"
#include "updaterecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::UpdateRecommenderRequest
 * \brief The UpdateRecommenderRequest class provides an interface for Personalize UpdateRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::updateRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecommenderRequest::UpdateRecommenderRequest(const UpdateRecommenderRequest &other)
    : PersonalizeRequest(new UpdateRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecommenderRequest object.
 */
UpdateRecommenderRequest::UpdateRecommenderRequest()
    : PersonalizeRequest(new UpdateRecommenderRequestPrivate(PersonalizeRequest::UpdateRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::UpdateRecommenderRequestPrivate
 * \brief The UpdateRecommenderRequestPrivate class provides private implementation for UpdateRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a UpdateRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
UpdateRecommenderRequestPrivate::UpdateRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, UpdateRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecommenderRequest
 * class' copy constructor.
 */
UpdateRecommenderRequestPrivate::UpdateRecommenderRequestPrivate(
    const UpdateRecommenderRequestPrivate &other, UpdateRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
