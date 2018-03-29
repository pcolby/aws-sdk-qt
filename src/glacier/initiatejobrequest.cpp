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

#include "initiatejobrequest.h"
#include "initiatejobrequest_p.h"
#include "initiatejobresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  InitiateJobRequest
 *
 * @brief  Implements Glacier InitiateJob requests.
 *
 * @see    GlacierClient::initiateJob
 */

/**
 * @brief  Constructs a new InitiateJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
InitiateJobRequest::InitiateJobRequest(const InitiateJobRequest &other)
    : GlacierRequest(new InitiateJobRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new InitiateJobRequest object.
 */
InitiateJobRequest::InitiateJobRequest()
    : GlacierRequest(new InitiateJobRequestPrivate(GlacierRequest::InitiateJobAction, this))
{

}

bool InitiateJobRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an InitiateJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An InitiateJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * InitiateJobRequest::response(QNetworkReply * const reply) const
{
    return new InitiateJobResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  InitiateJobRequestPrivate
 *
 * @brief  Private implementation for InitiateJobRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InitiateJobRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public InitiateJobRequest instance.
 */
InitiateJobRequestPrivate::InitiateJobRequestPrivate(
    const GlacierRequest::Action action, InitiateJobRequest * const q)
    : InitiateJobPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new InitiateJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the InitiateJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public InitiateJobRequest instance.
 */
InitiateJobRequestPrivate::InitiateJobRequestPrivate(
    const InitiateJobRequestPrivate &other, InitiateJobRequest * const q)
    : InitiateJobPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
