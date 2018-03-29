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

#include "addcustomattributesrequest.h"
#include "addcustomattributesrequest_p.h"
#include "addcustomattributesresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  AddCustomAttributesRequest
 *
 * @brief  Implements CognitoIdentityProvider AddCustomAttributes requests.
 *
 * @see    CognitoIdentityProviderClient::addCustomAttributes
 */

/**
 * @brief  Constructs a new AddCustomAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddCustomAttributesRequest::AddCustomAttributesRequest(const AddCustomAttributesRequest &other)
    : CognitoIdentityProviderRequest(new AddCustomAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddCustomAttributesRequest object.
 */
AddCustomAttributesRequest::AddCustomAttributesRequest()
    : CognitoIdentityProviderRequest(new AddCustomAttributesRequestPrivate(CognitoIdentityProviderRequest::AddCustomAttributesAction, this))
{

}

bool AddCustomAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddCustomAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddCustomAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * AddCustomAttributesRequest::response(QNetworkReply * const reply) const
{
    return new AddCustomAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddCustomAttributesRequestPrivate
 *
 * @brief  Private implementation for AddCustomAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCustomAttributesRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public AddCustomAttributesRequest instance.
 */
AddCustomAttributesRequestPrivate::AddCustomAttributesRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, AddCustomAttributesRequest * const q)
    : AddCustomAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddCustomAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddCustomAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddCustomAttributesRequest instance.
 */
AddCustomAttributesRequestPrivate::AddCustomAttributesRequestPrivate(
    const AddCustomAttributesRequestPrivate &other, AddCustomAttributesRequest * const q)
    : AddCustomAttributesPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
