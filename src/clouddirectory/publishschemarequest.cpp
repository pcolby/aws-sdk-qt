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

#include "publishschemarequest.h"
#include "publishschemarequest_p.h"
#include "publishschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  PublishSchemaRequest
 *
 * @brief  Implements CloudDirectory PublishSchema requests.
 *
 * @see    CloudDirectoryClient::publishSchema
 */

/**
 * @brief  Constructs a new PublishSchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PublishSchemaResponse::PublishSchemaResponse(

/**
 * @brief  Constructs a new PublishSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PublishSchemaRequest::PublishSchemaRequest(const PublishSchemaRequest &other)
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PublishSchemaRequest object.
 */
PublishSchemaRequest::PublishSchemaRequest()
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(CloudDirectoryRequest::PublishSchemaAction, this))
{

}

bool PublishSchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PublishSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PublishSchemaResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * PublishSchemaRequest::response(QNetworkReply * const reply) const
{
    return new PublishSchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PublishSchemaRequestPrivate
 *
 * @brief  Private implementation for PublishSchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PublishSchemaRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public PublishSchemaRequest instance.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, PublishSchemaRequest * const q)
    : PublishSchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PublishSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PublishSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PublishSchemaRequest instance.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const PublishSchemaRequestPrivate &other, PublishSchemaRequest * const q)
    : PublishSchemaPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
