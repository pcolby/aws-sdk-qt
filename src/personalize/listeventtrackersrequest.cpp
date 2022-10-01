// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeventtrackersrequest.h"
#include "listeventtrackersrequest_p.h"
#include "listeventtrackersresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListEventTrackersRequest
 * \brief The ListEventTrackersRequest class provides an interface for Personalize ListEventTrackers requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listEventTrackers
 */

/*!
 * Constructs a copy of \a other.
 */
ListEventTrackersRequest::ListEventTrackersRequest(const ListEventTrackersRequest &other)
    : PersonalizeRequest(new ListEventTrackersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEventTrackersRequest object.
 */
ListEventTrackersRequest::ListEventTrackersRequest()
    : PersonalizeRequest(new ListEventTrackersRequestPrivate(PersonalizeRequest::ListEventTrackersAction, this))
{

}

/*!
 * \reimp
 */
bool ListEventTrackersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEventTrackersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEventTrackersRequest::response(QNetworkReply * const reply) const
{
    return new ListEventTrackersResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListEventTrackersRequestPrivate
 * \brief The ListEventTrackersRequestPrivate class provides private implementation for ListEventTrackersRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListEventTrackersRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListEventTrackersRequestPrivate::ListEventTrackersRequestPrivate(
    const PersonalizeRequest::Action action, ListEventTrackersRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEventTrackersRequest
 * class' copy constructor.
 */
ListEventTrackersRequestPrivate::ListEventTrackersRequestPrivate(
    const ListEventTrackersRequestPrivate &other, ListEventTrackersRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
