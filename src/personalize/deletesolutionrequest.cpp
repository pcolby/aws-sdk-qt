// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesolutionrequest.h"
#include "deletesolutionrequest_p.h"
#include "deletesolutionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSolutionRequest
 * \brief The DeleteSolutionRequest class provides an interface for Personalize DeleteSolution requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSolution
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSolutionRequest::DeleteSolutionRequest(const DeleteSolutionRequest &other)
    : PersonalizeRequest(new DeleteSolutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSolutionRequest object.
 */
DeleteSolutionRequest::DeleteSolutionRequest()
    : PersonalizeRequest(new DeleteSolutionRequestPrivate(PersonalizeRequest::DeleteSolutionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSolutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSolutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSolutionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSolutionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteSolutionRequestPrivate
 * \brief The DeleteSolutionRequestPrivate class provides private implementation for DeleteSolutionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSolutionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteSolutionRequestPrivate::DeleteSolutionRequestPrivate(
    const PersonalizeRequest::Action action, DeleteSolutionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSolutionRequest
 * class' copy constructor.
 */
DeleteSolutionRequestPrivate::DeleteSolutionRequestPrivate(
    const DeleteSolutionRequestPrivate &other, DeleteSolutionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
