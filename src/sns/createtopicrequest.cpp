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

#include "createtopicrequest.h"
#include "createtopicrequest_p.h"
#include "createtopicresponse.h"
#include "snsrequest_p.h"

namespace AWS {
namespace SNS {

/**
 * @class  CreateTopicRequest
 *
 * @brief  Implements SNS CreateTopic requests.
 *
 * @see    SNSClient::createTopic
 */

/**
 * @brief  Constructs a new CreateTopicResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTopicResponse::CreateTopicResponse(

/**
 * @brief  Constructs a new CreateTopicRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTopicRequest::CreateTopicRequest(const CreateTopicRequest &other)
    : SNSRequest(new CreateTopicRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTopicRequest object.
 */
CreateTopicRequest::CreateTopicRequest()
    : SNSRequest(new CreateTopicRequestPrivate(SNSRequest::CreateTopicAction, this))
{

}

bool CreateTopicRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTopicResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTopicResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SNSClient::send
 */
AwsAbstractResponse * CreateTopicRequest::response(QNetworkReply * const reply) const
{
    return new CreateTopicResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTopicRequestPrivate
 *
 * @brief  Private implementation for CreateTopicRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicRequestPrivate object.
 *
 * @param  action  SNS action being performed.
 * @param  q       Pointer to this object's public CreateTopicRequest instance.
 */
CreateTopicRequestPrivate::CreateTopicRequestPrivate(
    const SNSRequest::Action action, CreateTopicRequest * const q)
    : CreateTopicPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTopicRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTopicRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTopicRequest instance.
 */
CreateTopicRequestPrivate::CreateTopicRequestPrivate(
    const CreateTopicRequestPrivate &other, CreateTopicRequest * const q)
    : CreateTopicPrivate(other, q)
{

}

} // namespace SNS
} // namespace AWS
