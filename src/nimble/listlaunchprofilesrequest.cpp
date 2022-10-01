// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchprofilesrequest.h"
#include "listlaunchprofilesrequest_p.h"
#include "listlaunchprofilesresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListLaunchProfilesRequest
 * \brief The ListLaunchProfilesRequest class provides an interface for Nimble ListLaunchProfiles requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listLaunchProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchProfilesRequest::ListLaunchProfilesRequest(const ListLaunchProfilesRequest &other)
    : NimbleRequest(new ListLaunchProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchProfilesRequest object.
 */
ListLaunchProfilesRequest::ListLaunchProfilesRequest()
    : NimbleRequest(new ListLaunchProfilesRequestPrivate(NimbleRequest::ListLaunchProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListLaunchProfilesRequestPrivate
 * \brief The ListLaunchProfilesRequestPrivate class provides private implementation for ListLaunchProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListLaunchProfilesRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListLaunchProfilesRequestPrivate::ListLaunchProfilesRequestPrivate(
    const NimbleRequest::Action action, ListLaunchProfilesRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchProfilesRequest
 * class' copy constructor.
 */
ListLaunchProfilesRequestPrivate::ListLaunchProfilesRequestPrivate(
    const ListLaunchProfilesRequestPrivate &other, ListLaunchProfilesRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
