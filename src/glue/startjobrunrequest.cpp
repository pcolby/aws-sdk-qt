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

#include "startjobrunrequest.h"
#include "startjobrunrequest_p.h"
#include "startjobrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  StartJobRunRequest
 *
 * @brief  Implements Glue StartJobRun requests.
 *
 * @see    GlueClient::startJobRun
 */

/**
 * @brief  Constructs a new StartJobRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartJobRunRequest::StartJobRunRequest(const StartJobRunRequest &other)
    : GlueRequest(new StartJobRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartJobRunRequest object.
 */
StartJobRunRequest::StartJobRunRequest()
    : GlueRequest(new StartJobRunRequestPrivate(GlueRequest::StartJobRunAction, this))
{

}

bool StartJobRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartJobRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartJobRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * StartJobRunRequest::response(QNetworkReply * const reply) const
{
    return new StartJobRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartJobRunRequestPrivate
 *
 * @brief  Private implementation for StartJobRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartJobRunRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StartJobRunRequest instance.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const GlueRequest::Action action, StartJobRunRequest * const q)
    : StartJobRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartJobRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartJobRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartJobRunRequest instance.
 */
StartJobRunRequestPrivate::StartJobRunRequestPrivate(
    const StartJobRunRequestPrivate &other, StartJobRunRequest * const q)
    : StartJobRunPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
