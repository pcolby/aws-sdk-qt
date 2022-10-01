/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
