// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsrequest_p.h"
#include "listinputsecuritygroupsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsRequest
 * \brief The ListInputSecurityGroupsRequest class provides an interface for MediaLive ListInputSecurityGroups requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputSecurityGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest(const ListInputSecurityGroupsRequest &other)
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInputSecurityGroupsRequest object.
 */
ListInputSecurityGroupsRequest::ListInputSecurityGroupsRequest()
    : MediaLiveRequest(new ListInputSecurityGroupsRequestPrivate(MediaLiveRequest::ListInputSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInputSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInputSecurityGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInputSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListInputSecurityGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsRequestPrivate
 * \brief The ListInputSecurityGroupsRequestPrivate class provides private implementation for ListInputSecurityGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputSecurityGroupsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const MediaLiveRequest::Action action, ListInputSecurityGroupsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInputSecurityGroupsRequest
 * class' copy constructor.
 */
ListInputSecurityGroupsRequestPrivate::ListInputSecurityGroupsRequestPrivate(
    const ListInputSecurityGroupsRequestPrivate &other, ListInputSecurityGroupsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
