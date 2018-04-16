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

#include "getbuiltinslottypesrequest.h"
#include "getbuiltinslottypesrequest_p.h"
#include "getbuiltinslottypesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinSlotTypesRequest
 *
 * \brief The GetBuiltinSlotTypesRequest class encapsulates LexModelBuildingService GetBuiltinSlotTypes requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBuiltinSlotTypes
 */

/*!
 * @brief  Constructs a new GetBuiltinSlotTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest(const GetBuiltinSlotTypesRequest &other)
    : LexModelBuildingServiceRequest(new GetBuiltinSlotTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBuiltinSlotTypesRequest object.
 */
GetBuiltinSlotTypesRequest::GetBuiltinSlotTypesRequest()
    : LexModelBuildingServiceRequest(new GetBuiltinSlotTypesRequestPrivate(LexModelBuildingServiceRequest::GetBuiltinSlotTypesAction, this))
{

}

/*!
 * \reimp
 */
bool GetBuiltinSlotTypesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBuiltinSlotTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBuiltinSlotTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBuiltinSlotTypesRequest::response(QNetworkReply * const reply) const
{
    return new GetBuiltinSlotTypesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBuiltinSlotTypesRequestPrivate
 *
 * @brief  Private implementation for GetBuiltinSlotTypesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBuiltinSlotTypesRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBuiltinSlotTypesRequest instance.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBuiltinSlotTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBuiltinSlotTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBuiltinSlotTypesRequest instance.
 */
GetBuiltinSlotTypesRequestPrivate::GetBuiltinSlotTypesRequestPrivate(
    const GetBuiltinSlotTypesRequestPrivate &other, GetBuiltinSlotTypesRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
