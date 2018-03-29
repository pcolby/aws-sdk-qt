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

#include "createlaunchtemplateversionrequest.h"
#include "createlaunchtemplateversionrequest_p.h"
#include "createlaunchtemplateversionresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  CreateLaunchTemplateVersionRequest
 *
 * @brief  Implements EC2 CreateLaunchTemplateVersion requests.
 *
 * @see    EC2Client::createLaunchTemplateVersion
 */

/**
 * @brief  Constructs a new CreateLaunchTemplateVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLaunchTemplateVersionRequest::CreateLaunchTemplateVersionRequest(const CreateLaunchTemplateVersionRequest &other)
    : EC2Request(new CreateLaunchTemplateVersionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLaunchTemplateVersionRequest object.
 */
CreateLaunchTemplateVersionRequest::CreateLaunchTemplateVersionRequest()
    : EC2Request(new CreateLaunchTemplateVersionRequestPrivate(EC2Request::CreateLaunchTemplateVersionAction, this))
{

}

bool CreateLaunchTemplateVersionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLaunchTemplateVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLaunchTemplateVersionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateLaunchTemplateVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchTemplateVersionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLaunchTemplateVersionRequestPrivate
 *
 * @brief  Private implementation for CreateLaunchTemplateVersionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateVersionRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateLaunchTemplateVersionRequest instance.
 */
CreateLaunchTemplateVersionRequestPrivate::CreateLaunchTemplateVersionRequestPrivate(
    const EC2Request::Action action, CreateLaunchTemplateVersionRequest * const q)
    : CreateLaunchTemplateVersionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchTemplateVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLaunchTemplateVersionRequest instance.
 */
CreateLaunchTemplateVersionRequestPrivate::CreateLaunchTemplateVersionRequestPrivate(
    const CreateLaunchTemplateVersionRequestPrivate &other, CreateLaunchTemplateVersionRequest * const q)
    : CreateLaunchTemplateVersionPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
