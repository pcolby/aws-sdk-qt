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

#include "deletearchiverequest.h"
#include "deletearchiverequest_p.h"
#include "deletearchiveresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  DeleteArchiveRequest
 *
 * @brief  Implements Glacier DeleteArchive requests.
 *
 * @see    GlacierClient::deleteArchive
 */

/**
 * @brief  Constructs a new DeleteArchiveRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteArchiveRequest::DeleteArchiveRequest(const DeleteArchiveRequest &other)
    : GlacierRequest(new DeleteArchiveRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteArchiveRequest object.
 */
DeleteArchiveRequest::DeleteArchiveRequest()
    : GlacierRequest(new DeleteArchiveRequestPrivate(GlacierRequest::DeleteArchiveAction, this))
{

}

bool DeleteArchiveRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteArchiveResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteArchiveResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlacierClient::send
 */
AwsAbstractResponse * DeleteArchiveRequest::response(QNetworkReply * const reply) const
{
    return new DeleteArchiveResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteArchiveRequestPrivate
 *
 * @brief  Private implementation for DeleteArchiveRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteArchiveRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public DeleteArchiveRequest instance.
 */
DeleteArchiveRequestPrivate::DeleteArchiveRequestPrivate(
    const GlacierRequest::Action action, DeleteArchiveRequest * const q)
    : DeleteArchivePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteArchiveRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteArchiveRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteArchiveRequest instance.
 */
DeleteArchiveRequestPrivate::DeleteArchiveRequestPrivate(
    const DeleteArchiveRequestPrivate &other, DeleteArchiveRequest * const q)
    : DeleteArchivePrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
