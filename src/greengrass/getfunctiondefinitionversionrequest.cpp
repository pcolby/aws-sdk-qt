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

#include "getfunctiondefinitionversionrequest.h"
#include "getfunctiondefinitionversionrequest_p.h"
#include "getfunctiondefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionRequest
 *
 * \brief The GetFunctionDefinitionVersionRequest class provides an interface for Greengrass GetFunctionDefinitionVersion requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getFunctionDefinitionVersion
 */

/*!
 * @brief  Constructs a new GetFunctionDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest(const GetFunctionDefinitionVersionRequest &other)
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetFunctionDefinitionVersionRequest object.
 */
GetFunctionDefinitionVersionRequest::GetFunctionDefinitionVersionRequest()
    : GreengrassRequest(new GetFunctionDefinitionVersionRequestPrivate(GreengrassRequest::GetFunctionDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetFunctionDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetFunctionDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetFunctionDefinitionVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFunctionDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetFunctionDefinitionVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetFunctionDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetFunctionDefinitionVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetFunctionDefinitionVersionRequest instance.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetFunctionDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetFunctionDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetFunctionDefinitionVersionRequest instance.
 */
GetFunctionDefinitionVersionRequestPrivate::GetFunctionDefinitionVersionRequestPrivate(
    const GetFunctionDefinitionVersionRequestPrivate &other, GetFunctionDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
