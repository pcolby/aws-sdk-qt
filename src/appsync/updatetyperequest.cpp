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

#include "updatetyperequest.h"
#include "updatetyperequest_p.h"
#include "updatetyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateTypeRequest
 *
 * \brief The UpdateTypeRequest class provides an interface for AppSync UpdateType requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateType
 */

/*!
 * @brief  Constructs a new UpdateTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateTypeRequest::UpdateTypeRequest(const UpdateTypeRequest &other)
    : AppSyncRequest(new UpdateTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateTypeRequest object.
 */
UpdateTypeRequest::UpdateTypeRequest()
    : AppSyncRequest(new UpdateTypeRequestPrivate(AppSyncRequest::UpdateTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateTypeRequestPrivate
 *
 * @brief  Private implementation for UpdateTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTypeRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public UpdateTypeRequest instance.
 */
UpdateTypeRequestPrivate::UpdateTypeRequestPrivate(
    const AppSyncRequest::Action action, UpdateTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateTypeRequest instance.
 */
UpdateTypeRequestPrivate::UpdateTypeRequestPrivate(
    const UpdateTypeRequestPrivate &other, UpdateTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
