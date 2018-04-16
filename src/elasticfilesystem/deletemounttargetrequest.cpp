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

#include "deletemounttargetrequest.h"
#include "deletemounttargetrequest_p.h"
#include "deletemounttargetresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DeleteMountTargetRequest
 *
 * \brief The DeleteMountTargetRequest class provides an interface for EFS DeleteMountTarget requests.
 *
 * \ingroup EFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EFSClient::deleteMountTarget
 */

/*!
 * @brief  Constructs a new DeleteMountTargetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest(const DeleteMountTargetRequest &other)
    : EFSRequest(new DeleteMountTargetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteMountTargetRequest object.
 */
DeleteMountTargetRequest::DeleteMountTargetRequest()
    : EFSRequest(new DeleteMountTargetRequestPrivate(EFSRequest::DeleteMountTargetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMountTargetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteMountTargetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteMountTargetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  EFSClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMountTargetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMountTargetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteMountTargetRequestPrivate
 *
 * @brief  Private implementation for DeleteMountTargetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteMountTargetRequestPrivate object.
 *
 * @param  action  EFS action being performed.
 * @param  q       Pointer to this object's public DeleteMountTargetRequest instance.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const EFSRequest::Action action, DeleteMountTargetRequest * const q)
    : EFSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteMountTargetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteMountTargetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteMountTargetRequest instance.
 */
DeleteMountTargetRequestPrivate::DeleteMountTargetRequestPrivate(
    const DeleteMountTargetRequestPrivate &other, DeleteMountTargetRequest * const q)
    : EFSRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
