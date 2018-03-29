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

#include "describetrustedadvisorchecksummariesrequest.h"
#include "describetrustedadvisorchecksummariesrequest_p.h"
#include "describetrustedadvisorchecksummariesresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckSummariesRequest
 *
 * @brief  Implements Support DescribeTrustedAdvisorCheckSummaries requests.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckSummaries
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrustedAdvisorCheckSummariesRequest::DescribeTrustedAdvisorCheckSummariesRequest(const DescribeTrustedAdvisorCheckSummariesRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorCheckSummariesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesRequest object.
 */
DescribeTrustedAdvisorCheckSummariesRequest::DescribeTrustedAdvisorCheckSummariesRequest()
    : SupportRequest(new DescribeTrustedAdvisorCheckSummariesRequestPrivate(SupportRequest::DescribeTrustedAdvisorCheckSummariesAction, this))
{

}

bool DescribeTrustedAdvisorCheckSummariesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrustedAdvisorCheckSummariesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrustedAdvisorCheckSummariesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeTrustedAdvisorCheckSummariesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorCheckSummariesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckSummariesRequestPrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckSummariesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeTrustedAdvisorCheckSummariesRequest instance.
 */
DescribeTrustedAdvisorCheckSummariesRequestPrivate::DescribeTrustedAdvisorCheckSummariesRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorCheckSummariesRequest * const q)
    : DescribeTrustedAdvisorCheckSummariesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckSummariesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorCheckSummariesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrustedAdvisorCheckSummariesRequest instance.
 */
DescribeTrustedAdvisorCheckSummariesRequestPrivate::DescribeTrustedAdvisorCheckSummariesRequestPrivate(
    const DescribeTrustedAdvisorCheckSummariesRequestPrivate &other, DescribeTrustedAdvisorCheckSummariesRequest * const q)
    : DescribeTrustedAdvisorCheckSummariesPrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
