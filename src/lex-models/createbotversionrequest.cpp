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

#include "createbotversionrequest.h"
#include "createbotversionrequest_p.h"
#include "createbotversionresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateBotVersionRequest
 *
 * \brief The CreateBotVersionRequest class encapsulates LexModelBuildingService CreateBotVersion requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createBotVersion
 */

/*!
 * @brief  Constructs a new CreateBotVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateBotVersionRequest::CreateBotVersionRequest(const CreateBotVersionRequest &other)
    : LexModelBuildingServiceRequest(new CreateBotVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateBotVersionRequest object.
 */
CreateBotVersionRequest::CreateBotVersionRequest()
    : LexModelBuildingServiceRequest(new CreateBotVersionRequestPrivate(LexModelBuildingServiceRequest::CreateBotVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBotVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateBotVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateBotVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBotVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateBotVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateBotVersionRequestPrivate
 *
 * @brief  Private implementation for CreateBotVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateBotVersionRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public CreateBotVersionRequest instance.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, CreateBotVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateBotVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateBotVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateBotVersionRequest instance.
 */
CreateBotVersionRequestPrivate::CreateBotVersionRequestPrivate(
    const CreateBotVersionRequestPrivate &other, CreateBotVersionRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
