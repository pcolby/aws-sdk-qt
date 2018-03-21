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

#include "createactivityrequest.h"
#include "createactivityrequest_p.h"
#include "createactivityresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  CreateActivityRequest
 *
 * @brief  Implements SFN CreateActivity requests.
 *
 * @see    SFNClient::createActivity
 */

/**
 * @brief  Constructs a new CreateActivityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateActivityResponse::CreateActivityResponse(

/**
 * @brief  Constructs a new CreateActivityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateActivityRequest::CreateActivityRequest(const CreateActivityRequest &other)
    : SFNRequest(new CreateActivityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateActivityRequest object.
 */
CreateActivityRequest::CreateActivityRequest()
    : SFNRequest(new CreateActivityRequestPrivate(SFNRequest::CreateActivityAction, this))
{

}

bool CreateActivityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateActivityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateActivityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * CreateActivityRequest::response(QNetworkReply * const reply) const
{
    return new CreateActivityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateActivityRequestPrivate
 *
 * @brief  Private implementation for CreateActivityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivityRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public CreateActivityRequest instance.
 */
CreateActivityRequestPrivate::CreateActivityRequestPrivate(
    const SFNRequest::Action action, CreateActivityRequest * const q)
    : CreateActivityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateActivityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateActivityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateActivityRequest instance.
 */
CreateActivityRequestPrivate::CreateActivityRequestPrivate(
    const CreateActivityRequestPrivate &other, CreateActivityRequest * const q)
    : CreateActivityPrivate(other, q)
{

}
