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

#include "deleteprojectrequest.h"
#include "deleteprojectrequest_p.h"
#include "deleteprojectresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteProjectRequest
 *
 * \brief The DeleteProjectRequest class encapsulates DeviceFarm DeleteProject requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteProject
 */

/*!
 * @brief  Constructs a new DeleteProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteProjectRequest::DeleteProjectRequest(const DeleteProjectRequest &other)
    : DeviceFarmRequest(new DeleteProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteProjectRequest object.
 */
DeleteProjectRequest::DeleteProjectRequest()
    : DeviceFarmRequest(new DeleteProjectRequestPrivate(DeviceFarmRequest::DeleteProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProjectRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteProjectRequestPrivate
 *
 * @brief  Private implementation for DeleteProjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProjectRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteProjectRequest instance.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteProjectRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteProjectRequest instance.
 */
DeleteProjectRequestPrivate::DeleteProjectRequestPrivate(
    const DeleteProjectRequestPrivate &other, DeleteProjectRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
