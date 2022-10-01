// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsolutionrequest.h"
#include "createsolutionrequest_p.h"
#include "createsolutionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionRequest
 * \brief The CreateSolutionRequest class provides an interface for Personalize CreateSolution requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolution
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSolutionRequest::CreateSolutionRequest(const CreateSolutionRequest &other)
    : PersonalizeRequest(new CreateSolutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSolutionRequest object.
 */
CreateSolutionRequest::CreateSolutionRequest()
    : PersonalizeRequest(new CreateSolutionRequestPrivate(PersonalizeRequest::CreateSolutionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSolutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSolutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSolutionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSolutionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateSolutionRequestPrivate
 * \brief The CreateSolutionRequestPrivate class provides private implementation for CreateSolutionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateSolutionRequestPrivate::CreateSolutionRequestPrivate(
    const PersonalizeRequest::Action action, CreateSolutionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSolutionRequest
 * class' copy constructor.
 */
CreateSolutionRequestPrivate::CreateSolutionRequestPrivate(
    const CreateSolutionRequestPrivate &other, CreateSolutionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
