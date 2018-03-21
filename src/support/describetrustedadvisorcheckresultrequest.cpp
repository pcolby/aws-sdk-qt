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

#include "describetrustedadvisorcheckresultrequest.h"
#include "describetrustedadvisorcheckresultrequest_p.h"
#include "describetrustedadvisorcheckresultresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckResultRequest
 *
 * @brief  Implements Support DescribeTrustedAdvisorCheckResult requests.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckResult
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustedAdvisorCheckResultResponse::DescribeTrustedAdvisorCheckResultResponse(

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrustedAdvisorCheckResultRequest::DescribeTrustedAdvisorCheckResultRequest(const DescribeTrustedAdvisorCheckResultRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorCheckResultRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultRequest object.
 */
DescribeTrustedAdvisorCheckResultRequest::DescribeTrustedAdvisorCheckResultRequest()
    : SupportRequest(new DescribeTrustedAdvisorCheckResultRequestPrivate(SupportRequest::DescribeTrustedAdvisorCheckResultAction, this))
{

}

bool DescribeTrustedAdvisorCheckResultRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrustedAdvisorCheckResultResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrustedAdvisorCheckResultResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeTrustedAdvisorCheckResultRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorCheckResultResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckResultRequestPrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckResultRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeTrustedAdvisorCheckResultRequest instance.
 */
DescribeTrustedAdvisorCheckResultRequestPrivate::DescribeTrustedAdvisorCheckResultRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorCheckResultRequest * const q)
    : DescribeTrustedAdvisorCheckResultPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckResultRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorCheckResultRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrustedAdvisorCheckResultRequest instance.
 */
DescribeTrustedAdvisorCheckResultRequestPrivate::DescribeTrustedAdvisorCheckResultRequestPrivate(
    const DescribeTrustedAdvisorCheckResultRequestPrivate &other, DescribeTrustedAdvisorCheckResultRequest * const q)
    : DescribeTrustedAdvisorCheckResultPrivate(other, q)
{

}
