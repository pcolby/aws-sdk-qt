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

#include "upgradepublishedschemarequest.h"
#include "upgradepublishedschemarequest_p.h"
#include "upgradepublishedschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  UpgradePublishedSchemaRequest
 *
 * @brief  Implements CloudDirectory UpgradePublishedSchema requests.
 *
 * @see    CloudDirectoryClient::upgradePublishedSchema
 */

/**
 * @brief  Constructs a new UpgradePublishedSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpgradePublishedSchemaRequest::UpgradePublishedSchemaRequest(const UpgradePublishedSchemaRequest &other)
    : CloudDirectoryRequest(new UpgradePublishedSchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpgradePublishedSchemaRequest object.
 */
UpgradePublishedSchemaRequest::UpgradePublishedSchemaRequest()
    : CloudDirectoryRequest(new UpgradePublishedSchemaRequestPrivate(CloudDirectoryRequest::UpgradePublishedSchemaAction, this))
{

}

bool UpgradePublishedSchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpgradePublishedSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpgradePublishedSchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * UpgradePublishedSchemaRequest::response(QNetworkReply * const reply) const
{
    return new UpgradePublishedSchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpgradePublishedSchemaRequestPrivate
 *
 * @brief  Private implementation for UpgradePublishedSchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpgradePublishedSchemaRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public UpgradePublishedSchemaRequest instance.
 */
UpgradePublishedSchemaRequestPrivate::UpgradePublishedSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, UpgradePublishedSchemaRequest * const q)
    : UpgradePublishedSchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpgradePublishedSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpgradePublishedSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpgradePublishedSchemaRequest instance.
 */
UpgradePublishedSchemaRequestPrivate::UpgradePublishedSchemaRequestPrivate(
    const UpgradePublishedSchemaRequestPrivate &other, UpgradePublishedSchemaRequest * const q)
    : UpgradePublishedSchemaPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
