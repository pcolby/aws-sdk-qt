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

#include "describeorganizationalunitrequest.h"
#include "describeorganizationalunitrequest_p.h"
#include "describeorganizationalunitresponse.h"
#include "organizationsrequest_p.h"

namespace QtAws {
namespace Organizations {

/**
 * @class  DescribeOrganizationalUnitRequest
 *
 * @brief  Implements Organizations DescribeOrganizationalUnit requests.
 *
 * @see    OrganizationsClient::describeOrganizationalUnit
 */

/**
 * @brief  Constructs a new DescribeOrganizationalUnitRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeOrganizationalUnitRequest::DescribeOrganizationalUnitRequest(const DescribeOrganizationalUnitRequest &other)
    : OrganizationsRequest(new DescribeOrganizationalUnitRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeOrganizationalUnitRequest object.
 */
DescribeOrganizationalUnitRequest::DescribeOrganizationalUnitRequest()
    : OrganizationsRequest(new DescribeOrganizationalUnitRequestPrivate(OrganizationsRequest::DescribeOrganizationalUnitAction, this))
{

}

bool DescribeOrganizationalUnitRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeOrganizationalUnitResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeOrganizationalUnitResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrganizationalUnitRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrganizationalUnitResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeOrganizationalUnitRequestPrivate
 *
 * @brief  Private implementation for DescribeOrganizationalUnitRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationalUnitRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public DescribeOrganizationalUnitRequest instance.
 */
DescribeOrganizationalUnitRequestPrivate::DescribeOrganizationalUnitRequestPrivate(
    const OrganizationsRequest::Action action, DescribeOrganizationalUnitRequest * const q)
    : OrganizationsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationalUnitRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrganizationalUnitRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeOrganizationalUnitRequest instance.
 */
DescribeOrganizationalUnitRequestPrivate::DescribeOrganizationalUnitRequestPrivate(
    const DescribeOrganizationalUnitRequestPrivate &other, DescribeOrganizationalUnitRequest * const q)
    : OrganizationsRequestPrivate(other, q)
{

}

} // namespace Organizations
} // namespace QtAws
