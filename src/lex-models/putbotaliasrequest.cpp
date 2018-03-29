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

#include "putbotaliasrequest.h"
#include "putbotaliasrequest_p.h"
#include "putbotaliasresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  PutBotAliasRequest
 *
 * @brief  Implements LexModelBuildingService PutBotAlias requests.
 *
 * @see    LexModelBuildingServiceClient::putBotAlias
 */

/**
 * @brief  Constructs a new PutBotAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBotAliasRequest::PutBotAliasRequest(const PutBotAliasRequest &other)
    : LexModelBuildingServiceRequest(new PutBotAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBotAliasRequest object.
 */
PutBotAliasRequest::PutBotAliasRequest()
    : LexModelBuildingServiceRequest(new PutBotAliasRequestPrivate(LexModelBuildingServiceRequest::PutBotAliasAction, this))
{

}

bool PutBotAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBotAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBotAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * PutBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new PutBotAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBotAliasRequestPrivate
 *
 * @brief  Private implementation for PutBotAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBotAliasRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public PutBotAliasRequest instance.
 */
PutBotAliasRequestPrivate::PutBotAliasRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, PutBotAliasRequest * const q)
    : PutBotAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBotAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBotAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBotAliasRequest instance.
 */
PutBotAliasRequestPrivate::PutBotAliasRequestPrivate(
    const PutBotAliasRequestPrivate &other, PutBotAliasRequest * const q)
    : PutBotAliasPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
