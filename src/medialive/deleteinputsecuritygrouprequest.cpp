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

#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygrouprequest_p.h"
#include "deleteinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupRequest
 * \brief The DeleteInputSecurityGroupRequest class provides an interface for MediaLive DeleteInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest(const DeleteInputSecurityGroupRequest &other)
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInputSecurityGroupRequest object.
 */
DeleteInputSecurityGroupRequest::DeleteInputSecurityGroupRequest()
    : MediaLiveRequest(new DeleteInputSecurityGroupRequestPrivate(MediaLiveRequest::DeleteInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupRequestPrivate
 * \brief The DeleteInputSecurityGroupRequestPrivate class provides private implementation for DeleteInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, DeleteInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInputSecurityGroupRequest
 * class' copy constructor.
 */
DeleteInputSecurityGroupRequestPrivate::DeleteInputSecurityGroupRequestPrivate(
    const DeleteInputSecurityGroupRequestPrivate &other, DeleteInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
