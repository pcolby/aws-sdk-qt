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

#include "domainmetadatarequest.h"
#include "domainmetadatarequest_p.h"
#include "domainmetadataresponse.h"
#include "simpledbrequest_p.h"

namespace AWS {
namespace SimpleDB {

/**
 * @class  DomainMetadataRequest
 *
 * @brief  Implements SimpleDB DomainMetadata requests.
 *
 * @see    SimpleDBClient::domainMetadata
 */

/**
 * @brief  Constructs a new DomainMetadataRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DomainMetadataRequest::DomainMetadataRequest(const DomainMetadataRequest &other)
    : SimpleDBRequest(new DomainMetadataRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DomainMetadataRequest object.
 */
DomainMetadataRequest::DomainMetadataRequest()
    : SimpleDBRequest(new DomainMetadataRequestPrivate(SimpleDBRequest::DomainMetadataAction, this))
{

}

bool DomainMetadataRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DomainMetadataResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DomainMetadataResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SimpleDBClient::send
 */
AwsAbstractResponse * DomainMetadataRequest::response(QNetworkReply * const reply) const
{
    return new DomainMetadataResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DomainMetadataRequestPrivate
 *
 * @brief  Private implementation for DomainMetadataRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DomainMetadataRequestPrivate object.
 *
 * @param  action  SimpleDB action being performed.
 * @param  q       Pointer to this object's public DomainMetadataRequest instance.
 */
DomainMetadataRequestPrivate::DomainMetadataRequestPrivate(
    const SimpleDBRequest::Action action, DomainMetadataRequest * const q)
    : DomainMetadataPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DomainMetadataRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DomainMetadataRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DomainMetadataRequest instance.
 */
DomainMetadataRequestPrivate::DomainMetadataRequestPrivate(
    const DomainMetadataRequestPrivate &other, DomainMetadataRequest * const q)
    : DomainMetadataPrivate(other, q)
{

}

} // namespace SimpleDB
} // namespace AWS
