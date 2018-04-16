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

#include "getfunctiondefinitionrequest.h"
#include "getfunctiondefinitionrequest_p.h"
#include "getfunctiondefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionRequest
 *
 * \brief The GetFunctionDefinitionRequest class provides an interface for Greengrass GetFunctionDefinition requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getFunctionDefinition
 */

/*!
 * @brief  Constructs a new GetFunctionDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest(const GetFunctionDefinitionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFunctionDefinitionRequest object.
 */
GetFunctionDefinitionRequest::GetFunctionDefinitionRequest()
    : GreengrassRequest(new GetFunctionDefinitionRequestPrivate(GreengrassRequest::GetFunctionDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFunctionDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFunctionDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFunctionDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetFunctionDefinitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetFunctionDefinitionRequest instance.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFunctionDefinitionRequest instance.
 */
GetFunctionDefinitionRequestPrivate::GetFunctionDefinitionRequestPrivate(
    const GetFunctionDefinitionRequestPrivate &other, GetFunctionDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
