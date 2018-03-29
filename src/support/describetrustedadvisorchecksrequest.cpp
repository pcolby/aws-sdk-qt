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

#include "describetrustedadvisorchecksrequest.h"
#include "describetrustedadvisorchecksrequest_p.h"
#include "describetrustedadvisorchecksresponse.h"
#include "supportrequest_p.h"

namespace QtAws {
namespace Support {

/**
 * @class  DescribeTrustedAdvisorChecksRequest
 *
 * @brief  Implements Support DescribeTrustedAdvisorChecks requests.
 *
 * @see    SupportClient::describeTrustedAdvisorChecks
 */

/**
 * @brief  Constructs a new DescribeTrustedAdvisorChecksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeTrustedAdvisorChecksRequest::DescribeTrustedAdvisorChecksRequest(const DescribeTrustedAdvisorChecksRequest &other)
    : SupportRequest(new DescribeTrustedAdvisorChecksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeTrustedAdvisorChecksRequest object.
 */
DescribeTrustedAdvisorChecksRequest::DescribeTrustedAdvisorChecksRequest()
    : SupportRequest(new DescribeTrustedAdvisorChecksRequestPrivate(SupportRequest::DescribeTrustedAdvisorChecksAction, this))
{

}

bool DescribeTrustedAdvisorChecksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeTrustedAdvisorChecksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeTrustedAdvisorChecksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeTrustedAdvisorChecksRequest::response(QNetworkReply * const reply) const
{
    return new DescribeTrustedAdvisorChecksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeTrustedAdvisorChecksRequestPrivate
 *
 * @brief  Private implementation for DescribeTrustedAdvisorChecksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorChecksRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeTrustedAdvisorChecksRequest instance.
 */
DescribeTrustedAdvisorChecksRequestPrivate::DescribeTrustedAdvisorChecksRequestPrivate(
    const SupportRequest::Action action, DescribeTrustedAdvisorChecksRequest * const q)
    : DescribeTrustedAdvisorChecksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustedAdvisorChecksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeTrustedAdvisorChecksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeTrustedAdvisorChecksRequest instance.
 */
DescribeTrustedAdvisorChecksRequestPrivate::DescribeTrustedAdvisorChecksRequestPrivate(
    const DescribeTrustedAdvisorChecksRequestPrivate &other, DescribeTrustedAdvisorChecksRequest * const q)
    : DescribeTrustedAdvisorChecksPrivate(other, q)
{

}

} // namespace Support
} // namespace QtAws
