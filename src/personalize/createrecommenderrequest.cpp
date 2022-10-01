// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrecommenderrequest.h"
#include "createrecommenderrequest_p.h"
#include "createrecommenderresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateRecommenderRequest
 * \brief The CreateRecommenderRequest class provides an interface for Personalize CreateRecommender requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createRecommender
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecommenderRequest::CreateRecommenderRequest(const CreateRecommenderRequest &other)
    : PersonalizeRequest(new CreateRecommenderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecommenderRequest object.
 */
CreateRecommenderRequest::CreateRecommenderRequest()
    : PersonalizeRequest(new CreateRecommenderRequestPrivate(PersonalizeRequest::CreateRecommenderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecommenderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecommenderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecommenderRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecommenderResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateRecommenderRequestPrivate
 * \brief The CreateRecommenderRequestPrivate class provides private implementation for CreateRecommenderRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateRecommenderRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateRecommenderRequestPrivate::CreateRecommenderRequestPrivate(
    const PersonalizeRequest::Action action, CreateRecommenderRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecommenderRequest
 * class' copy constructor.
 */
CreateRecommenderRequestPrivate::CreateRecommenderRequestPrivate(
    const CreateRecommenderRequestPrivate &other, CreateRecommenderRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
