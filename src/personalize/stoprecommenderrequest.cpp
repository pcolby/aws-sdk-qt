// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoprecommenderrequest.h"
#include "stoprecommenderrequest_p.h"
#include "stoprecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StopRecommenderRequest
 * \brief The StopRecommenderRequest class provides an interface for Personalize StopRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::stopRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
StopRecommenderRequest::StopRecommenderRequest(const StopRecommenderRequest &other)
    : PersonalizeRequest(new StopRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRecommenderRequest object.
 */
StopRecommenderRequest::StopRecommenderRequest()
    : PersonalizeRequest(new StopRecommenderRequestPrivate(PersonalizeRequest::StopRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool StopRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new StopRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::StopRecommenderRequestPrivate
 * \brief The StopRecommenderRequestPrivate class provides private implementation for StopRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StopRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
StopRecommenderRequestPrivate::StopRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, StopRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRecommenderRequest
 * class' copy constructor.
 */
StopRecommenderRequestPrivate::StopRecommenderRequestPrivate(
    const StopRecommenderRequestPrivate &other, StopRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
