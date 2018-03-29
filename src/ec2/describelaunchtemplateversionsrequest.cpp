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

#include "describelaunchtemplateversionsrequest.h"
#include "describelaunchtemplateversionsrequest_p.h"
#include "describelaunchtemplateversionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeLaunchTemplateVersionsRequest
 *
 * @brief  Implements EC2 DescribeLaunchTemplateVersions requests.
 *
 * @see    EC2Client::describeLaunchTemplateVersions
 */

/**
 * @brief  Constructs a new DescribeLaunchTemplateVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest(const DescribeLaunchTemplateVersionsRequest &other)
    : EC2Request(new DescribeLaunchTemplateVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeLaunchTemplateVersionsRequest object.
 */
DescribeLaunchTemplateVersionsRequest::DescribeLaunchTemplateVersionsRequest()
    : EC2Request(new DescribeLaunchTemplateVersionsRequestPrivate(EC2Request::DescribeLaunchTemplateVersionsAction, this))
{

}

bool DescribeLaunchTemplateVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeLaunchTemplateVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeLaunchTemplateVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EC2Client::send
 */
AwsAbstractResponse * DescribeLaunchTemplateVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLaunchTemplateVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeLaunchTemplateVersionsRequestPrivate
 *
 * @brief  Private implementation for DescribeLaunchTemplateVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchTemplateVersionsRequestPrivate object.
 *
 * @param  action  EC2 action being performed.
 * @param  q       Pointer to this object's public DescribeLaunchTemplateVersionsRequest instance.
 */
DescribeLaunchTemplateVersionsRequestPrivate::DescribeLaunchTemplateVersionsRequestPrivate(
    const EC2Request::Action action, DescribeLaunchTemplateVersionsRequest * const q)
    : DescribeLaunchTemplateVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchTemplateVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeLaunchTemplateVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeLaunchTemplateVersionsRequest instance.
 */
DescribeLaunchTemplateVersionsRequestPrivate::DescribeLaunchTemplateVersionsRequestPrivate(
    const DescribeLaunchTemplateVersionsRequestPrivate &other, DescribeLaunchTemplateVersionsRequest * const q)
    : DescribeLaunchTemplateVersionsPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
