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

#include "updateloggerdefinitionrequest.h"
#include "updateloggerdefinitionrequest_p.h"
#include "updateloggerdefinitionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateLoggerDefinitionRequest
 *
 * \brief The UpdateLoggerDefinitionRequest class encapsulates Greengrass UpdateLoggerDefinition requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateLoggerDefinition
 */

/*!
 * @brief  Constructs a new UpdateLoggerDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateLoggerDefinitionRequest::UpdateLoggerDefinitionRequest(const UpdateLoggerDefinitionRequest &other)
    : GreengrassRequest(new UpdateLoggerDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateLoggerDefinitionRequest object.
 */
UpdateLoggerDefinitionRequest::UpdateLoggerDefinitionRequest()
    : GreengrassRequest(new UpdateLoggerDefinitionRequestPrivate(GreengrassRequest::UpdateLoggerDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLoggerDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateLoggerDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateLoggerDefinitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLoggerDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoggerDefinitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateLoggerDefinitionRequestPrivate
 *
 * @brief  Private implementation for UpdateLoggerDefinitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateLoggerDefinitionRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public UpdateLoggerDefinitionRequest instance.
 */
UpdateLoggerDefinitionRequestPrivate::UpdateLoggerDefinitionRequestPrivate(
    const GreengrassRequest::Action action, UpdateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateLoggerDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoggerDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateLoggerDefinitionRequest instance.
 */
UpdateLoggerDefinitionRequestPrivate::UpdateLoggerDefinitionRequestPrivate(
    const UpdateLoggerDefinitionRequestPrivate &other, UpdateLoggerDefinitionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
