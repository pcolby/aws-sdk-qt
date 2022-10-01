// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventtrackerrequest.h"
#include "deleteeventtrackerrequest_p.h"
#include "deleteeventtrackerresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteEventTrackerRequest
 * \brief The DeleteEventTrackerRequest class provides an interface for Personalize DeleteEventTracker requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteEventTracker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventTrackerRequest::DeleteEventTrackerRequest(const DeleteEventTrackerRequest &other)
    : PersonalizeRequest(new DeleteEventTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventTrackerRequest object.
 */
DeleteEventTrackerRequest::DeleteEventTrackerRequest()
    : PersonalizeRequest(new DeleteEventTrackerRequestPrivate(PersonalizeRequest::DeleteEventTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventTrackerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteEventTrackerRequestPrivate
 * \brief The DeleteEventTrackerRequestPrivate class provides private implementation for DeleteEventTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteEventTrackerRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteEventTrackerRequestPrivate::DeleteEventTrackerRequestPrivate(
    const PersonalizeRequest::Action action, DeleteEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventTrackerRequest
 * class' copy constructor.
 */
DeleteEventTrackerRequestPrivate::DeleteEventTrackerRequestPrivate(
    const DeleteEventTrackerRequestPrivate &other, DeleteEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
