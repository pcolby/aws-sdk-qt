/*
    Copyright 2013-2019 Paul Colby

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

#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygrouprequest_p.h"
#include "createinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupRequest
 * \brief The CreateInputSecurityGroupRequest class provides an interface for MediaLive CreateInputSecurityGroup requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createInputSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest(const CreateInputSecurityGroupRequest &other)
    : MediaLiveRequest(new CreateInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInputSecurityGroupRequest object.
 */
CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest()
    : MediaLiveRequest(new CreateInputSecurityGroupRequestPrivate(MediaLiveRequest::CreateInputSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInputSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInputSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupRequestPrivate
 * \brief The CreateInputSecurityGroupRequestPrivate class provides private implementation for CreateInputSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateInputSecurityGroupRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInputSecurityGroupRequest
 * class' copy constructor.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const CreateInputSecurityGroupRequestPrivate &other, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
