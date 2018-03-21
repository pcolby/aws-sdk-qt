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

#include "acknowledgethirdpartyjobrequest.h"
#include "acknowledgethirdpartyjobrequest_p.h"
#include "acknowledgethirdpartyjobresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  AcknowledgeThirdPartyJobRequest
 *
 * @brief  Implements CodePipeline AcknowledgeThirdPartyJob requests.
 *
 * @see    CodePipelineClient::acknowledgeThirdPartyJob
 */

/**
 * @brief  Constructs a new AcknowledgeThirdPartyJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcknowledgeThirdPartyJobRequest::AcknowledgeThirdPartyJobRequest(const AcknowledgeThirdPartyJobRequest &other)
    : CodePipelineRequest(new AcknowledgeThirdPartyJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcknowledgeThirdPartyJobRequest object.
 */
AcknowledgeThirdPartyJobRequest::AcknowledgeThirdPartyJobRequest()
    : CodePipelineRequest(new AcknowledgeThirdPartyJobRequestPrivate(CodePipelineRequest::AcknowledgeThirdPartyJobAction, this))
{

}

bool AcknowledgeThirdPartyJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcknowledgeThirdPartyJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcknowledgeThirdPartyJobResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * AcknowledgeThirdPartyJobRequest::response(QNetworkReply * const reply) const
{
    return new AcknowledgeThirdPartyJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcknowledgeThirdPartyJobRequestPrivate
 *
 * @brief  Private implementation for AcknowledgeThirdPartyJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcknowledgeThirdPartyJobRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public AcknowledgeThirdPartyJobRequest instance.
 */
AcknowledgeThirdPartyJobRequestPrivate::AcknowledgeThirdPartyJobRequestPrivate(
    const CodePipelineRequest::Action action, AcknowledgeThirdPartyJobRequest * const q)
    : AcknowledgeThirdPartyJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcknowledgeThirdPartyJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcknowledgeThirdPartyJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcknowledgeThirdPartyJobRequest instance.
 */
AcknowledgeThirdPartyJobRequestPrivate::AcknowledgeThirdPartyJobRequestPrivate(
    const AcknowledgeThirdPartyJobRequestPrivate &other, AcknowledgeThirdPartyJobRequest * const q)
    : AcknowledgeThirdPartyJobPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
