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

#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygrouprequest_p.h"
#include "createinputsecuritygroupresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateInputSecurityGroupRequest
 *
 * \brief The CreateInputSecurityGroupRequest class encapsulates MediaLive CreateInputSecurityGroup requests.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::createInputSecurityGroup
 */

/*!
 * @brief  Constructs a new CreateInputSecurityGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateInputSecurityGroupRequest::CreateInputSecurityGroupRequest(const CreateInputSecurityGroupRequest &other)
    : MediaLiveRequest(new CreateInputSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateInputSecurityGroupRequest object.
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
 * @brief  Construct an CreateInputSecurityGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateInputSecurityGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaLiveClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInputSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateInputSecurityGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateInputSecurityGroupRequestPrivate
 *
 * @brief  Private implementation for CreateInputSecurityGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInputSecurityGroupRequestPrivate object.
 *
 * @param  action  MediaLive action being performed.
 * @param  q       Pointer to this object's public CreateInputSecurityGroupRequest instance.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const MediaLiveRequest::Action action, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateInputSecurityGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateInputSecurityGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateInputSecurityGroupRequest instance.
 */
CreateInputSecurityGroupRequestPrivate::CreateInputSecurityGroupRequestPrivate(
    const CreateInputSecurityGroupRequestPrivate &other, CreateInputSecurityGroupRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
