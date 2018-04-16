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

#include "getbotsrequest.h"
#include "getbotsrequest_p.h"
#include "getbotsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotsRequest
 *
 * \brief The GetBotsRequest class provides an interface for LexModelBuildingService GetBots requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBots
 */

/*!
 * @brief  Constructs a new GetBotsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotsRequest::GetBotsRequest(const GetBotsRequest &other)
    : LexModelBuildingServiceRequest(new GetBotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBotsRequest object.
 */
GetBotsRequest::GetBotsRequest()
    : LexModelBuildingServiceRequest(new GetBotsRequestPrivate(LexModelBuildingServiceRequest::GetBotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBotsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBotsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBotsRequestPrivate
 *
 * @brief  Private implementation for GetBotsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBotsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotsRequest instance.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBotsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotsRequest instance.
 */
GetBotsRequestPrivate::GetBotsRequestPrivate(
    const GetBotsRequestPrivate &other, GetBotsRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
