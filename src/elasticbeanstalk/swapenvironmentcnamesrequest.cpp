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

#include "swapenvironmentcnamesrequest.h"
#include "swapenvironmentcnamesrequest_p.h"
#include "swapenvironmentcnamesresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  SwapEnvironmentCNAMEsRequest
 *
 * @brief  Implements ElasticBeanstalk SwapEnvironmentCNAMEs requests.
 *
 * @see    ElasticBeanstalkClient::swapEnvironmentCNAMEs
 */

/**
 * @brief  Constructs a new SwapEnvironmentCNAMEsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SwapEnvironmentCNAMEsResponse::SwapEnvironmentCNAMEsResponse(

/**
 * @brief  Constructs a new SwapEnvironmentCNAMEsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SwapEnvironmentCNAMEsRequest::SwapEnvironmentCNAMEsRequest(const SwapEnvironmentCNAMEsRequest &other)
    : ElasticBeanstalkRequest(new SwapEnvironmentCNAMEsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SwapEnvironmentCNAMEsRequest object.
 */
SwapEnvironmentCNAMEsRequest::SwapEnvironmentCNAMEsRequest()
    : ElasticBeanstalkRequest(new SwapEnvironmentCNAMEsRequestPrivate(ElasticBeanstalkRequest::SwapEnvironmentCNAMEsAction, this))
{

}

bool SwapEnvironmentCNAMEsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SwapEnvironmentCNAMEsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SwapEnvironmentCNAMEsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * SwapEnvironmentCNAMEsRequest::response(QNetworkReply * const reply) const
{
    return new SwapEnvironmentCNAMEsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SwapEnvironmentCNAMEsRequestPrivate
 *
 * @brief  Private implementation for SwapEnvironmentCNAMEsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SwapEnvironmentCNAMEsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public SwapEnvironmentCNAMEsRequest instance.
 */
SwapEnvironmentCNAMEsRequestPrivate::SwapEnvironmentCNAMEsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, SwapEnvironmentCNAMEsRequest * const q)
    : SwapEnvironmentCNAMEsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SwapEnvironmentCNAMEsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SwapEnvironmentCNAMEsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SwapEnvironmentCNAMEsRequest instance.
 */
SwapEnvironmentCNAMEsRequestPrivate::SwapEnvironmentCNAMEsRequestPrivate(
    const SwapEnvironmentCNAMEsRequestPrivate &other, SwapEnvironmentCNAMEsRequest * const q)
    : SwapEnvironmentCNAMEsPrivate(other, q)
{

}
