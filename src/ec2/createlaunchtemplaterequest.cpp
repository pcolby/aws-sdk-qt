/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createlaunchtemplaterequest.h"
#include "createlaunchtemplaterequest_p.h"
#include "createlaunchtemplateresponse.h"
#include "ec2request_p.h"

namespace AWS {
namespace EC2 {

/**
 * @class  CreateLaunchTemplateRequest
 *
 * @brief  Implements EC2 CreateLaunchTemplate requests.
 *
 * @see    EC2Client::createLaunchTemplate
 */

/**
 * @brief  Constructs a new CreateLaunchTemplateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLaunchTemplateRequest::CreateLaunchTemplateRequest(const CreateLaunchTemplateRequest &other)
    : EC2Request(new CreateLaunchTemplateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLaunchTemplateRequest object.
 */
CreateLaunchTemplateRequest::CreateLaunchTemplateRequest()
    : EC2Request(new CreateLaunchTemplateRequestPrivate(EC2Request::CreateLaunchTemplateAction, this))
{

}

bool CreateLaunchTemplateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLaunchTemplateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLaunchTemplateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * CreateLaunchTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateLaunchTemplateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLaunchTemplateRequestPrivate
 *
 * @brief  Private implementation for CreateLaunchTemplateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public CreateLaunchTemplateRequest instance.
 */
CreateLaunchTemplateRequestPrivate::CreateLaunchTemplateRequestPrivate(
    const EC2Request::Action action, CreateLaunchTemplateRequest * const q)
    : CreateLaunchTemplatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLaunchTemplateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLaunchTemplateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLaunchTemplateRequest instance.
 */
CreateLaunchTemplateRequestPrivate::CreateLaunchTemplateRequestPrivate(
    const CreateLaunchTemplateRequestPrivate &other, CreateLaunchTemplateRequest * const q)
    : CreateLaunchTemplatePrivate(other, q)
{

}

} // namespace EC2
} // namespace AWS
