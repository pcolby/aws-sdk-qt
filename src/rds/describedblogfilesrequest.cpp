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

#include "describedblogfilesrequest.h"
#include "describedblogfilesrequest_p.h"
#include "describedblogfilesresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBLogFilesRequest
 *
 * @brief  Implements RDS DescribeDBLogFiles requests.
 *
 * @see    RDSClient::describeDBLogFiles
 */

/**
 * @brief  Constructs a new DescribeDBLogFilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeDBLogFilesRequest::DescribeDBLogFilesRequest(const DescribeDBLogFilesRequest &other)
    : RDSRequest(new DescribeDBLogFilesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeDBLogFilesRequest object.
 */
DescribeDBLogFilesRequest::DescribeDBLogFilesRequest()
    : RDSRequest(new DescribeDBLogFilesRequestPrivate(RDSRequest::DescribeDBLogFilesAction, this))
{

}

bool DescribeDBLogFilesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeDBLogFilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeDBLogFilesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeDBLogFilesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeDBLogFilesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeDBLogFilesRequestPrivate
 *
 * @brief  Private implementation for DescribeDBLogFilesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBLogFilesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeDBLogFilesRequest instance.
 */
DescribeDBLogFilesRequestPrivate::DescribeDBLogFilesRequestPrivate(
    const RDSRequest::Action action, DescribeDBLogFilesRequest * const q)
    : DescribeDBLogFilesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBLogFilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeDBLogFilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeDBLogFilesRequest instance.
 */
DescribeDBLogFilesRequestPrivate::DescribeDBLogFilesRequestPrivate(
    const DescribeDBLogFilesRequestPrivate &other, DescribeDBLogFilesRequest * const q)
    : DescribeDBLogFilesPrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
