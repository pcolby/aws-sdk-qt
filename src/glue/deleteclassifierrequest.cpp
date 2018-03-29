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

#include "deleteclassifierrequest.h"
#include "deleteclassifierrequest_p.h"
#include "deleteclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/**
 * @class  DeleteClassifierRequest
 *
 * @brief  Implements Glue DeleteClassifier requests.
 *
 * @see    GlueClient::deleteClassifier
 */

/**
 * @brief  Constructs a new DeleteClassifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteClassifierRequest::DeleteClassifierRequest(const DeleteClassifierRequest &other)
    : GlueRequest(new DeleteClassifierRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteClassifierRequest object.
 */
DeleteClassifierRequest::DeleteClassifierRequest()
    : GlueRequest(new DeleteClassifierRequestPrivate(GlueRequest::DeleteClassifierAction, this))
{

}

bool DeleteClassifierRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteClassifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteClassifierResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * DeleteClassifierRequest::response(QNetworkReply * const reply) const
{
    return new DeleteClassifierResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteClassifierRequestPrivate
 *
 * @brief  Private implementation for DeleteClassifierRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClassifierRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteClassifierRequest instance.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const GlueRequest::Action action, DeleteClassifierRequest * const q)
    : DeleteClassifierPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClassifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteClassifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteClassifierRequest instance.
 */
DeleteClassifierRequestPrivate::DeleteClassifierRequestPrivate(
    const DeleteClassifierRequestPrivate &other, DeleteClassifierRequest * const q)
    : DeleteClassifierPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
