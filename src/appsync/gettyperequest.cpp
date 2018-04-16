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

#include "gettyperequest.h"
#include "gettyperequest_p.h"
#include "gettyperesponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetTypeRequest
 *
 * \brief The GetTypeRequest class encapsulates AppSync GetType requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getType
 */

/*!
 * @brief  Constructs a new GetTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTypeRequest::GetTypeRequest(const GetTypeRequest &other)
    : AppSyncRequest(new GetTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTypeRequest object.
 */
GetTypeRequest::GetTypeRequest()
    : AppSyncRequest(new GetTypeRequestPrivate(AppSyncRequest::GetTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTypeRequestPrivate
 *
 * @brief  Private implementation for GetTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTypeRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetTypeRequest instance.
 */
GetTypeRequestPrivate::GetTypeRequestPrivate(
    const AppSyncRequest::Action action, GetTypeRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTypeRequest instance.
 */
GetTypeRequestPrivate::GetTypeRequestPrivate(
    const GetTypeRequestPrivate &other, GetTypeRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
