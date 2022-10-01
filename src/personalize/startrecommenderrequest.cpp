// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrecommenderrequest.h"
#include "startrecommenderrequest_p.h"
#include "startrecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StartRecommenderRequest
 * \brief The StartRecommenderRequest class provides an interface for Personalize StartRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::startRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
StartRecommenderRequest::StartRecommenderRequest(const StartRecommenderRequest &other)
    : PersonalizeRequest(new StartRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRecommenderRequest object.
 */
StartRecommenderRequest::StartRecommenderRequest()
    : PersonalizeRequest(new StartRecommenderRequestPrivate(PersonalizeRequest::StartRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool StartRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new StartRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::StartRecommenderRequestPrivate
 * \brief The StartRecommenderRequestPrivate class provides private implementation for StartRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StartRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
StartRecommenderRequestPrivate::StartRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, StartRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRecommenderRequest
 * class' copy constructor.
 */
StartRecommenderRequestPrivate::StartRecommenderRequestPrivate(
    const StartRecommenderRequestPrivate &other, StartRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
