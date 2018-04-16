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

#include "createslottypeversionrequest.h"
#include "createslottypeversionrequest_p.h"
#include "createslottypeversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateSlotTypeVersionRequest
 *
 * \brief The CreateSlotTypeVersionRequest class provides an interface for LexModelBuildingService CreateSlotTypeVersion requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createSlotTypeVersion
 */

/*!
 * @brief  Constructs a new CreateSlotTypeVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest(const CreateSlotTypeVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateSlotTypeVersionRequest object.
 */
CreateSlotTypeVersionRequest::CreateSlotTypeVersionRequest()
    : LexModelBuildingServiceRequest(new CreateSlotTypeVersionRequestPrivate(LexModelBuildingServiceRequest::CreateSlotTypeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSlotTypeVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateSlotTypeVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateSlotTypeVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSlotTypeVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlotTypeVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateSlotTypeVersionRequestPrivate
 *
 * @brief  Private implementation for CreateSlotTypeVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSlotTypeVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public CreateSlotTypeVersionRequest instance.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSlotTypeVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateSlotTypeVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateSlotTypeVersionRequest instance.
 */
CreateSlotTypeVersionRequestPrivate::CreateSlotTypeVersionRequestPrivate(
    const CreateSlotTypeVersionRequestPrivate &other, CreateSlotTypeVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
