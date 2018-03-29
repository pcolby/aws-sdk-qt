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

#include "createdocumentrequest.h"
#include "createdocumentrequest_p.h"
#include "createdocumentresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  CreateDocumentRequest
 *
 * @brief  Implements SSM CreateDocument requests.
 *
 * @see    SSMClient::createDocument
 */

/**
 * @brief  Constructs a new CreateDocumentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDocumentRequest::CreateDocumentRequest(const CreateDocumentRequest &other)
    : SSMRequest(new CreateDocumentRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDocumentRequest object.
 */
CreateDocumentRequest::CreateDocumentRequest()
    : SSMRequest(new CreateDocumentRequestPrivate(SSMRequest::CreateDocumentAction, this))
{

}

bool CreateDocumentRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDocumentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDocumentResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * CreateDocumentRequest::response(QNetworkReply * const reply) const
{
    return new CreateDocumentResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDocumentRequestPrivate
 *
 * @brief  Private implementation for CreateDocumentRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public CreateDocumentRequest instance.
 */
CreateDocumentRequestPrivate::CreateDocumentRequestPrivate(
    const SSMRequest::Action action, CreateDocumentRequest * const q)
    : CreateDocumentPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDocumentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDocumentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDocumentRequest instance.
 */
CreateDocumentRequestPrivate::CreateDocumentRequestPrivate(
    const CreateDocumentRequestPrivate &other, CreateDocumentRequest * const q)
    : CreateDocumentPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
