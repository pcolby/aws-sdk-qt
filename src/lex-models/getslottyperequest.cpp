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

#include "getslottyperequest.h"
#include "getslottyperequest_p.h"
#include "getslottyperesponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetSlotTypeRequest
 *
 * \brief The GetSlotTypeRequest class encapsulates LexModelBuildingService GetSlotType requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getSlotType
 */

/*!
 * @brief  Constructs a new GetSlotTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSlotTypeRequest::GetSlotTypeRequest(const GetSlotTypeRequest &other)
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSlotTypeRequest object.
 */
GetSlotTypeRequest::GetSlotTypeRequest()
    : LexModelBuildingServiceRequest(new GetSlotTypeRequestPrivate(LexModelBuildingServiceRequest::GetSlotTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetSlotTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSlotTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSlotTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSlotTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetSlotTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSlotTypeRequestPrivate
 *
 * @brief  Private implementation for GetSlotTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetSlotTypeRequest instance.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSlotTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSlotTypeRequest instance.
 */
GetSlotTypeRequestPrivate::GetSlotTypeRequestPrivate(
    const GetSlotTypeRequestPrivate &other, GetSlotTypeRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
