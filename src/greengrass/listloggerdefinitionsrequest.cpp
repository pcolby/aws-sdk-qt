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

#include "listloggerdefinitionsrequest.h"
#include "listloggerdefinitionsrequest_p.h"
#include "listloggerdefinitionsresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListLoggerDefinitionsRequest
 *
 * \brief The ListLoggerDefinitionsRequest class encapsulates Greengrass ListLoggerDefinitions requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listLoggerDefinitions
 */

/*!
 * @brief  Constructs a new ListLoggerDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest(const ListLoggerDefinitionsRequest &other)
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListLoggerDefinitionsRequest object.
 */
ListLoggerDefinitionsRequest::ListLoggerDefinitionsRequest()
    : GreengrassRequest(new ListLoggerDefinitionsRequestPrivate(GreengrassRequest::ListLoggerDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLoggerDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListLoggerDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLoggerDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLoggerDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListLoggerDefinitionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListLoggerDefinitionsRequestPrivate
 *
 * @brief  Private implementation for ListLoggerDefinitionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionsRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListLoggerDefinitionsRequest instance.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const GreengrassRequest::Action action, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListLoggerDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLoggerDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLoggerDefinitionsRequest instance.
 */
ListLoggerDefinitionsRequestPrivate::ListLoggerDefinitionsRequestPrivate(
    const ListLoggerDefinitionsRequestPrivate &other, ListLoggerDefinitionsRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
