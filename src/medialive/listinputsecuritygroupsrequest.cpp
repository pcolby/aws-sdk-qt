/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
