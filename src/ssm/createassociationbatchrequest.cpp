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

#include "createassociationbatchrequest.h"
#include "createassociationbatchrequest_p.h"
#include "createassociationbatchresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  CreateAssociationBatchRequest
 *
 * @brief  Implements SSM CreateAssociationBatch requests.
 *
 * @see    SSMClient::createAssociationBatch
 */

/**
 * @brief  Constructs a new CreateAssociationBatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAssociationBatchRequest::CreateAssociationBatchRequest(const CreateAssociationBatchRequest &other)
    : SSMRequest(new CreateAssociationBatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAssociationBatchRequest object.
 */
CreateAssociationBatchRequest::CreateAssociationBatchRequest()
    : SSMRequest(new CreateAssociationBatchRequestPrivate(SSMRequest::CreateAssociationBatchAction, this))
{

}

bool CreateAssociationBatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAssociationBatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAssociationBatchResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssociationBatchRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssociationBatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAssociationBatchRequestPrivate
 *
 * @brief  Private implementation for CreateAssociationBatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationBatchRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateAssociationBatchRequest instance.
 */
CreateAssociationBatchRequestPrivate::CreateAssociationBatchRequestPrivate(
    const SSMRequest::Action action, CreateAssociationBatchRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssociationBatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAssociationBatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAssociationBatchRequest instance.
 */
CreateAssociationBatchRequestPrivate::CreateAssociationBatchRequestPrivate(
    const CreateAssociationBatchRequestPrivate &other, CreateAssociationBatchRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
