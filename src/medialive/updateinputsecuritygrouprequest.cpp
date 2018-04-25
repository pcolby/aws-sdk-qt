/*
    Copyright 2013-2018 Paul Colby

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

#include "updateinputsecuritygrouprequest.h"
#include "updateinputsecuritygrouprequest_p.h"
#include "updateinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupRequest
 * \brief The UpdateInputSecurityGroupRequest class provides an interface for MediaLive UpdateInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInputSecurityGroupRequest::UpdateInputSecurityGroupRequest(const UpdateInputSecurityGroupRequest &other)
    : MediaLiveRequest(new UpdateInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInputSecurityGroupRequest object.
 */
UpdateInputSecurityGroupRequest::UpdateInputSecurityGroupRequest()
    : MediaLiveRequest(new UpdateInputSecurityGroupRequestPrivate(MediaLiveRequest::UpdateInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupRequestPrivate
 * \brief The UpdateInputSecurityGroupRequestPrivate class provides private implementation for UpdateInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
UpdateInputSecurityGroupRequestPrivate::UpdateInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputSecurityGroupRequest
 * class' copy constructor.
 */
UpdateInputSecurityGroupRequestPrivate::UpdateInputSecurityGroupRequestPrivate(
    const UpdateInputSecurityGroupRequestPrivate &other, UpdateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
