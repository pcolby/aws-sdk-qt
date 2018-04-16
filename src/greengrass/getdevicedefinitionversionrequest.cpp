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

#include "getdevicedefinitionversionrequest.h"
#include "getdevicedefinitionversionrequest_p.h"
#include "getdevicedefinitionversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionVersionRequest
 *
 * \brief The GetDeviceDefinitionVersionRequest class provides an interface for Greengrass GetDeviceDefinitionVersion requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getDeviceDefinitionVersion
 */

/*!
 * @brief  Constructs a new GetDeviceDefinitionVersionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest(const GetDeviceDefinitionVersionRequest &other)
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDeviceDefinitionVersionRequest object.
 */
GetDeviceDefinitionVersionRequest::GetDeviceDefinitionVersionRequest()
    : GreengrassRequest(new GetDeviceDefinitionVersionRequestPrivate(GreengrassRequest::GetDeviceDefinitionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeviceDefinitionVersionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDeviceDefinitionVersionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDeviceDefinitionVersionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeviceDefinitionVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetDeviceDefinitionVersionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDeviceDefinitionVersionRequestPrivate
 *
 * @brief  Private implementation for GetDeviceDefinitionVersionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionVersionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public GetDeviceDefinitionVersionRequest instance.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GreengrassRequest::Action action, GetDeviceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDeviceDefinitionVersionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDeviceDefinitionVersionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDeviceDefinitionVersionRequest instance.
 */
GetDeviceDefinitionVersionRequestPrivate::GetDeviceDefinitionVersionRequestPrivate(
    const GetDeviceDefinitionVersionRequestPrivate &other, GetDeviceDefinitionVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
