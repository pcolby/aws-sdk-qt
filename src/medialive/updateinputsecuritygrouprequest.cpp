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

#include "updateinputsecuritygrouprequest.h"
#include "updateinputsecuritygrouprequest_p.h"
#include "updateinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupRequest
 *
 * \brief The UpdateInputSecurityGroupRequest class provides an interface for MediaLive UpdateInputSecurityGroup requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::updateInputSecurityGroup
 */

/*!
 * @brief  Constructs a new UpdateInputSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateInputSecurityGroupRequest::UpdateInputSecurityGroupRequest(const UpdateInputSecurityGroupRequest &other)
    : MediaLiveRequest(new UpdateInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateInputSecurityGroupRequest object.
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
 * @brief  Construct an UpdateInputSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateInputSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInputSecurityGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateInputSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for UpdateInputSecurityGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateInputSecurityGroupRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public UpdateInputSecurityGroupRequest instance.
 */
UpdateInputSecurityGroupRequestPrivate::UpdateInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, UpdateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateInputSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateInputSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateInputSecurityGroupRequest instance.
 */
UpdateInputSecurityGroupRequestPrivate::UpdateInputSecurityGroupRequestPrivate(
    const UpdateInputSecurityGroupRequestPrivate &other, UpdateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
