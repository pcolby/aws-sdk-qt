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

#include "checkdnsavailabilityrequest.h"
#include "checkdnsavailabilityrequest_p.h"
#include "checkdnsavailabilityresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  CheckDNSAvailabilityRequest
 *
 * @brief  Implements ElasticBeanstalk CheckDNSAvailability requests.
 *
 * @see    ElasticBeanstalkClient::checkDNSAvailability
 */

/**
 * @brief  Constructs a new CheckDNSAvailabilityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CheckDNSAvailabilityRequest::CheckDNSAvailabilityRequest(const CheckDNSAvailabilityRequest &other)
    : ElasticBeanstalkRequest(new CheckDNSAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CheckDNSAvailabilityRequest object.
 */
CheckDNSAvailabilityRequest::CheckDNSAvailabilityRequest()
    : ElasticBeanstalkRequest(new CheckDNSAvailabilityRequestPrivate(ElasticBeanstalkRequest::CheckDNSAvailabilityAction, this))
{

}

bool CheckDNSAvailabilityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CheckDNSAvailabilityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CheckDNSAvailabilityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
AwsAbstractResponse * CheckDNSAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDNSAvailabilityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CheckDNSAvailabilityRequestPrivate
 *
 * @brief  Private implementation for CheckDNSAvailabilityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDNSAvailabilityRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public CheckDNSAvailabilityRequest instance.
 */
CheckDNSAvailabilityRequestPrivate::CheckDNSAvailabilityRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CheckDNSAvailabilityRequest * const q)
    : CheckDNSAvailabilityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CheckDNSAvailabilityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CheckDNSAvailabilityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CheckDNSAvailabilityRequest instance.
 */
CheckDNSAvailabilityRequestPrivate::CheckDNSAvailabilityRequestPrivate(
    const CheckDNSAvailabilityRequestPrivate &other, CheckDNSAvailabilityRequest * const q)
    : CheckDNSAvailabilityPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
