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

#include "stopcontactrequest.h"
#include "stopcontactrequest_p.h"
#include "stopcontactresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::StopContactRequest
 *
 * \brief The StopContactRequest class encapsulates Connect StopContact requests.
 *
 * \ingroup Connect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 *
 * \sa ConnectClient::stopContact
 */

/*!
 * @brief  Constructs a new StopContactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopContactRequest::StopContactRequest(const StopContactRequest &other)
    : ConnectRequest(new StopContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StopContactRequest object.
 */
StopContactRequest::StopContactRequest()
    : ConnectRequest(new StopContactRequestPrivate(ConnectRequest::StopContactAction, this))
{

}

/*!
 * \reimp
 */
bool StopContactRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StopContactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopContactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConnectClient::send
 */
QtAws::Core::AwsAbstractResponse * StopContactRequest::response(QNetworkReply * const reply) const
{
    return new StopContactResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StopContactRequestPrivate
 *
 * @brief  Private implementation for StopContactRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopContactRequestPrivate object.
 *
 * @param  action  Connect action being performed.
 * @param  q       Pointer to this object's public StopContactRequest instance.
 */
StopContactRequestPrivate::StopContactRequestPrivate(
    const ConnectRequest::Action action, StopContactRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StopContactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopContactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopContactRequest instance.
 */
StopContactRequestPrivate::StopContactRequestPrivate(
    const StopContactRequestPrivate &other, StopContactRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
