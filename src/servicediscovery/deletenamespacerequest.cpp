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

#include "deletenamespacerequest.h"
#include "deletenamespacerequest_p.h"
#include "deletenamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  DeleteNamespaceRequest
 *
 * @brief  Implements ServiceDiscovery DeleteNamespace requests.
 *
 * @see    ServiceDiscoveryClient::deleteNamespace
 */

/**
 * @brief  Constructs a new DeleteNamespaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNamespaceResponse::DeleteNamespaceResponse(

/**
 * @brief  Constructs a new DeleteNamespaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest(const DeleteNamespaceRequest &other)
    : ServiceDiscoveryRequest(new DeleteNamespaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteNamespaceRequest object.
 */
DeleteNamespaceRequest::DeleteNamespaceRequest()
    : ServiceDiscoveryRequest(new DeleteNamespaceRequestPrivate(ServiceDiscoveryRequest::DeleteNamespaceAction, this))
{

}

bool DeleteNamespaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteNamespaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNamespaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * DeleteNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNamespaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteNamespaceRequestPrivate
 *
 * @brief  Private implementation for DeleteNamespaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamespaceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public DeleteNamespaceRequest instance.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeleteNamespaceRequest * const q)
    : DeleteNamespacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamespaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNamespaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNamespaceRequest instance.
 */
DeleteNamespaceRequestPrivate::DeleteNamespaceRequestPrivate(
    const DeleteNamespaceRequestPrivate &other, DeleteNamespaceRequest * const q)
    : DeleteNamespacePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
