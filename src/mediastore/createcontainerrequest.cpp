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

#include "createcontainerrequest.h"
#include "createcontainerrequest_p.h"
#include "createcontainerresponse.h"
#include "mediastorerequest_p.h"

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::CreateContainerRequest
 *
 * \brief The CreateContainerRequest class encapsulates MediaStore CreateContainer requests.
 *
 * \ingroup MediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::createContainer
 */

/*!
 * @brief  Constructs a new CreateContainerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateContainerRequest::CreateContainerRequest(const CreateContainerRequest &other)
    : MediaStoreRequest(new CreateContainerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateContainerRequest object.
 */
CreateContainerRequest::CreateContainerRequest()
    : MediaStoreRequest(new CreateContainerRequestPrivate(MediaStoreRequest::CreateContainerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContainerRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateContainerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateContainerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MediaStoreClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContainerRequest::response(QNetworkReply * const reply) const
{
    return new CreateContainerResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateContainerRequestPrivate
 *
 * @brief  Private implementation for CreateContainerRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateContainerRequestPrivate object.
 *
 * @param  action  MediaStore action being performed.
 * @param  q       Pointer to this object's public CreateContainerRequest instance.
 */
CreateContainerRequestPrivate::CreateContainerRequestPrivate(
    const MediaStoreRequest::Action action, CreateContainerRequest * const q)
    : MediaStoreRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateContainerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateContainerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateContainerRequest instance.
 */
CreateContainerRequestPrivate::CreateContainerRequestPrivate(
    const CreateContainerRequestPrivate &other, CreateContainerRequest * const q)
    : MediaStoreRequestPrivate(other, q)
{

}

} // namespace MediaStore
} // namespace QtAws
