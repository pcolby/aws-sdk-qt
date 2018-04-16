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

#include "batchdeleteimagerequest.h"
#include "batchdeleteimagerequest_p.h"
#include "batchdeleteimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::BatchDeleteImageRequest
 *
 * \brief The BatchDeleteImageRequest class encapsulates ECR BatchDeleteImage requests.
 *
 * \ingroup ECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::batchDeleteImage
 */

/*!
 * @brief  Constructs a new BatchDeleteImageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest(const BatchDeleteImageRequest &other)
    : ECRRequest(new BatchDeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new BatchDeleteImageRequest object.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest()
    : ECRRequest(new BatchDeleteImageRequestPrivate(ECRRequest::BatchDeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an BatchDeleteImageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchDeleteImageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteImageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  BatchDeleteImageRequestPrivate
 *
 * @brief  Private implementation for BatchDeleteImageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchDeleteImageRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public BatchDeleteImageRequest instance.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const ECRRequest::Action action, BatchDeleteImageRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchDeleteImageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteImageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchDeleteImageRequest instance.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const BatchDeleteImageRequestPrivate &other, BatchDeleteImageRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
