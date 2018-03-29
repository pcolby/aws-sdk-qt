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

#include "describetrustedadvisorcheckrefreshstatusesrequest.h"
#include "describetrustedadvisorcheckrefreshstatusesrequest_p.h"
#include "describetrustedadvisorcheckrefreshstatusesresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorCheckRefreshStatusesRequest
 *
 * @brief  Implements Support DescribeTrustedAdvisorCheckRefreshStatuses requests.
 *
 * @see    SupportClient::describeTrustedAdvisorCheckRefreshStatuses
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequest::DescribeTrustedAdvisorCheckRefreshStatusesRequest(const DescribeTrustedAdvisorCheckRefreshStatusesRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesRequest object.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequest::DescribeTrustedAdvisorCheckRefreshStatusesRequest()
    : SupportRequest(new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(SupportRequest::DescribeTrustedAdvisorCheckRefreshStatusesAction, this))
{

}

bool DescribeTrustedAdvisorCheckRefreshStatusesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrustedAdvisorCheckRefreshStatusesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrustedAdvisorCheckRefreshStatusesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeTrustedAdvisorCheckRefreshStatusesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorCheckRefreshStatusesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorCheckRefreshStatusesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeTrustedAdvisorCheckRefreshStatusesRequest instance.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate::DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q)
    : DescribeTrustedAdvisorCheckRefreshStatusesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorCheckRefreshStatusesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrustedAdvisorCheckRefreshStatusesRequest instance.
 */
DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate::DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate(
    const DescribeTrustedAdvisorCheckRefreshStatusesRequestPrivate &other, DescribeTrustedAdvisorCheckRefreshStatusesRequest * const q)
    : DescribeTrustedAdvisorCheckRefreshStatusesPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
