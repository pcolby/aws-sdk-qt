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

#include "createpresignednotebookinstanceurlrequest.h"
#include "createpresignednotebookinstanceurlrequest_p.h"
#include "createpresignednotebookinstanceurlresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreatePresignedNotebookInstanceUrlRequest
 *
 * @brief  Implements SageMaker CreatePresignedNotebookInstanceUrl requests.
 *
 * @see    SageMakerClient::createPresignedNotebookInstanceUrl
 */

/**
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest(const CreatePresignedNotebookInstanceUrlRequest &other)
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlRequest object.
 */
CreatePresignedNotebookInstanceUrlRequest::CreatePresignedNotebookInstanceUrlRequest()
    : SageMakerRequest(new CreatePresignedNotebookInstanceUrlRequestPrivate(SageMakerRequest::CreatePresignedNotebookInstanceUrlAction, this))
{

}

bool CreatePresignedNotebookInstanceUrlRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePresignedNotebookInstanceUrlResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePresignedNotebookInstanceUrlResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresignedNotebookInstanceUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresignedNotebookInstanceUrlResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePresignedNotebookInstanceUrlRequestPrivate
 *
 * @brief  Private implementation for CreatePresignedNotebookInstanceUrlRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public CreatePresignedNotebookInstanceUrlRequest instance.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const SageMakerRequest::Action action, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePresignedNotebookInstanceUrlRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePresignedNotebookInstanceUrlRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePresignedNotebookInstanceUrlRequest instance.
 */
CreatePresignedNotebookInstanceUrlRequestPrivate::CreatePresignedNotebookInstanceUrlRequestPrivate(
    const CreatePresignedNotebookInstanceUrlRequestPrivate &other, CreatePresignedNotebookInstanceUrlRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
