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

#include "updategraphqlapirequest.h"
#include "updategraphqlapirequest_p.h"
#include "updategraphqlapiresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiRequest
 *
 * \brief The UpdateGraphqlApiRequest class provides an interface for AppSync UpdateGraphqlApi requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateGraphqlApi
 */

/*!
 * @brief  Constructs a new UpdateGraphqlApiRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateGraphqlApiRequest::UpdateGraphqlApiRequest(const UpdateGraphqlApiRequest &other)
    : AppSyncRequest(new UpdateGraphqlApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateGraphqlApiRequest object.
 */
UpdateGraphqlApiRequest::UpdateGraphqlApiRequest()
    : AppSyncRequest(new UpdateGraphqlApiRequestPrivate(AppSyncRequest::UpdateGraphqlApiAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGraphqlApiRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateGraphqlApiResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateGraphqlApiResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGraphqlApiRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGraphqlApiResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateGraphqlApiRequestPrivate
 *
 * @brief  Private implementation for UpdateGraphqlApiRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateGraphqlApiRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public UpdateGraphqlApiRequest instance.
 */
UpdateGraphqlApiRequestPrivate::UpdateGraphqlApiRequestPrivate(
    const AppSyncRequest::Action action, UpdateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateGraphqlApiRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateGraphqlApiRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateGraphqlApiRequest instance.
 */
UpdateGraphqlApiRequestPrivate::UpdateGraphqlApiRequestPrivate(
    const UpdateGraphqlApiRequestPrivate &other, UpdateGraphqlApiRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
