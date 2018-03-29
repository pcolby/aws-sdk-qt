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

#include "describeanalysisschemesrequest.h"
#include "describeanalysisschemesrequest_p.h"
#include "describeanalysisschemesresponse.h"
#include "cloudsearchrequest_p.h"

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeAnalysisSchemesRequest
 *
 * @brief  Implements CloudSearch DescribeAnalysisSchemes requests.
 *
 * @see    CloudSearchClient::describeAnalysisSchemes
 */

/**
 * @brief  Constructs a new DescribeAnalysisSchemesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAnalysisSchemesRequest::DescribeAnalysisSchemesRequest(const DescribeAnalysisSchemesRequest &other)
    : CloudSearchRequest(new DescribeAnalysisSchemesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeAnalysisSchemesRequest object.
 */
DescribeAnalysisSchemesRequest::DescribeAnalysisSchemesRequest()
    : CloudSearchRequest(new DescribeAnalysisSchemesRequestPrivate(CloudSearchRequest::DescribeAnalysisSchemesAction, this))
{

}

bool DescribeAnalysisSchemesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeAnalysisSchemesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAnalysisSchemesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
AwsAbstractResponse * DescribeAnalysisSchemesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAnalysisSchemesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeAnalysisSchemesRequestPrivate
 *
 * @brief  Private implementation for DescribeAnalysisSchemesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAnalysisSchemesRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DescribeAnalysisSchemesRequest instance.
 */
DescribeAnalysisSchemesRequestPrivate::DescribeAnalysisSchemesRequestPrivate(
    const CloudSearchRequest::Action action, DescribeAnalysisSchemesRequest * const q)
    : DescribeAnalysisSchemesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAnalysisSchemesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAnalysisSchemesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAnalysisSchemesRequest instance.
 */
DescribeAnalysisSchemesRequestPrivate::DescribeAnalysisSchemesRequestPrivate(
    const DescribeAnalysisSchemesRequestPrivate &other, DescribeAnalysisSchemesRequest * const q)
    : DescribeAnalysisSchemesPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace AWS
