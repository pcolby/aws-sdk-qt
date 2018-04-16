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

#include "deleterepositoryrequest.h"
#include "deleterepositoryrequest_p.h"
#include "deleterepositoryresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::DeleteRepositoryRequest
 *
 * \brief The DeleteRepositoryRequest class provides an interface for ECR DeleteRepository requests.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::deleteRepository
 */

/*!
 * @brief  Constructs a new DeleteRepositoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest(const DeleteRepositoryRequest &other)
    : ECRRequest(new DeleteRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteRepositoryRequest object.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest()
    : ECRRequest(new DeleteRepositoryRequestPrivate(ECRRequest::DeleteRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteRepositoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteRepositoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteRepositoryRequestPrivate
 *
 * @brief  Private implementation for DeleteRepositoryRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const ECRRequest::Action action, DeleteRepositoryRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteRepositoryRequest instance.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const DeleteRepositoryRequestPrivate &other, DeleteRepositoryRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
