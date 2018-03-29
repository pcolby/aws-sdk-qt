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

#include "createmicrosoftadrequest.h"
#include "createmicrosoftadrequest_p.h"
#include "createmicrosoftadresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  CreateMicrosoftADRequest
 *
 * @brief  Implements DirectoryService CreateMicrosoftAD requests.
 *
 * @see    DirectoryServiceClient::createMicrosoftAD
 */

/**
 * @brief  Constructs a new CreateMicrosoftADRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMicrosoftADRequest::CreateMicrosoftADRequest(const CreateMicrosoftADRequest &other)
    : DirectoryServiceRequest(new CreateMicrosoftADRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMicrosoftADRequest object.
 */
CreateMicrosoftADRequest::CreateMicrosoftADRequest()
    : DirectoryServiceRequest(new CreateMicrosoftADRequestPrivate(DirectoryServiceRequest::CreateMicrosoftADAction, this))
{

}

bool CreateMicrosoftADRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMicrosoftADResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMicrosoftADResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMicrosoftADRequest::response(QNetworkReply * const reply) const
{
    return new CreateMicrosoftADResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMicrosoftADRequestPrivate
 *
 * @brief  Private implementation for CreateMicrosoftADRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMicrosoftADRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public CreateMicrosoftADRequest instance.
 */
CreateMicrosoftADRequestPrivate::CreateMicrosoftADRequestPrivate(
    const DirectoryServiceRequest::Action action, CreateMicrosoftADRequest * const q)
    : DirectoryServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMicrosoftADRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMicrosoftADRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMicrosoftADRequest instance.
 */
CreateMicrosoftADRequestPrivate::CreateMicrosoftADRequestPrivate(
    const CreateMicrosoftADRequestPrivate &other, CreateMicrosoftADRequest * const q)
    : DirectoryServiceRequestPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
