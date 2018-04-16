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

#include "getschemacreationstatusrequest.h"
#include "getschemacreationstatusrequest_p.h"
#include "getschemacreationstatusresponse.h"
#include "appsyncrequest_p.h"

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusRequest
 *
 * \brief The GetSchemaCreationStatusRequest class provides an interface for AppSync GetSchemaCreationStatus requests.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getSchemaCreationStatus
 */

/*!
 * @brief  Constructs a new GetSchemaCreationStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest(const GetSchemaCreationStatusRequest &other)
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSchemaCreationStatusRequest object.
 */
GetSchemaCreationStatusRequest::GetSchemaCreationStatusRequest()
    : AppSyncRequest(new GetSchemaCreationStatusRequestPrivate(AppSyncRequest::GetSchemaCreationStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaCreationStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSchemaCreationStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSchemaCreationStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AppSyncClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaCreationStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaCreationStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSchemaCreationStatusRequestPrivate
 *
 * @brief  Private implementation for GetSchemaCreationStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSchemaCreationStatusRequestPrivate object.
 *
 * @param  action  AppSync action being performed.
 * @param  q       Pointer to this object's public GetSchemaCreationStatusRequest instance.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const AppSyncRequest::Action action, GetSchemaCreationStatusRequest * const q)
    : AppSyncRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSchemaCreationStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaCreationStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSchemaCreationStatusRequest instance.
 */
GetSchemaCreationStatusRequestPrivate::GetSchemaCreationStatusRequestPrivate(
    const GetSchemaCreationStatusRequestPrivate &other, GetSchemaCreationStatusRequest * const q)
    : AppSyncRequestPrivate(other, q)
{

}

} // namespace AppSync
} // namespace QtAws
