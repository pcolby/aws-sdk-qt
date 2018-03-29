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

#include "describeorganizationrequest.h"
#include "describeorganizationrequest_p.h"
#include "describeorganizationresponse.h"
#include "workmailrequest_p.h"

namespace QtAws {
namespace WorkMail {

/**
 * @class  DescribeOrganizationRequest
 *
 * @brief  Implements WorkMail DescribeOrganization requests.
 *
 * @see    WorkMailClient::describeOrganization
 */

/**
 * @brief  Constructs a new DescribeOrganizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOrganizationRequest::DescribeOrganizationRequest(const DescribeOrganizationRequest &other)
    : WorkMailRequest(new DescribeOrganizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOrganizationRequest object.
 */
DescribeOrganizationRequest::DescribeOrganizationRequest()
    : WorkMailRequest(new DescribeOrganizationRequestPrivate(WorkMailRequest::DescribeOrganizationAction, this))
{

}

bool DescribeOrganizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOrganizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOrganizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  WorkMailClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrganizationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrganizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOrganizationRequestPrivate
 *
 * @brief  Private implementation for DescribeOrganizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationRequestPrivate object.
 *
 * @param  action  WorkMail action being performed.
 * @param  q       Pointer to this object's public DescribeOrganizationRequest instance.
 */
DescribeOrganizationRequestPrivate::DescribeOrganizationRequestPrivate(
    const WorkMailRequest::Action action, DescribeOrganizationRequest * const q)
    : WorkMailRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrganizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOrganizationRequest instance.
 */
DescribeOrganizationRequestPrivate::DescribeOrganizationRequestPrivate(
    const DescribeOrganizationRequestPrivate &other, DescribeOrganizationRequest * const q)
    : WorkMailRequestPrivate(other, q)
{

}

} // namespace WorkMail
} // namespace QtAws
