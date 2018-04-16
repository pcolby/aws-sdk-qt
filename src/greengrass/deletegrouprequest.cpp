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

#include "deletegrouprequest.h"
#include "deletegrouprequest_p.h"
#include "deletegroupresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteGroupRequest
 *
 * \brief The DeleteGroupRequest class encapsulates Greengrass DeleteGroup requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteGroup
 */

/*!
 * @brief  Constructs a new DeleteGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGroupRequest::DeleteGroupRequest(const DeleteGroupRequest &other)
    : GreengrassRequest(new DeleteGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteGroupRequest object.
 */
DeleteGroupRequest::DeleteGroupRequest()
    : GreengrassRequest(new DeleteGroupRequestPrivate(GreengrassRequest::DeleteGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteGroupRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGroupResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGroupResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteGroupRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const GreengrassRequest::Action action, DeleteGroupRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGroupRequest instance.
 */
DeleteGroupRequestPrivate::DeleteGroupRequestPrivate(
    const DeleteGroupRequestPrivate &other, DeleteGroupRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
