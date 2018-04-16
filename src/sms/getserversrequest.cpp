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

#include "getserversrequest.h"
#include "getserversrequest_p.h"
#include "getserversresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetServersRequest
 *
 * \brief The GetServersRequest class provides an interface for SMS GetServers requests.
 *
 * \ingroup SMS
 *
 *
 * \sa SMSClient::getServers
 */

/*!
 * @brief  Constructs a new GetServersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetServersRequest::GetServersRequest(const GetServersRequest &other)
    : SMSRequest(new GetServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetServersRequest object.
 */
GetServersRequest::GetServersRequest()
    : SMSRequest(new GetServersRequestPrivate(SMSRequest::GetServersAction, this))
{

}

/*!
 * \reimp
 */
bool GetServersRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetServersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetServersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetServersRequest::response(QNetworkReply * const reply) const
{
    return new GetServersResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetServersRequestPrivate
 *
 * @brief  Private implementation for GetServersRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetServersRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public GetServersRequest instance.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const SMSRequest::Action action, GetServersRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetServersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetServersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetServersRequest instance.
 */
GetServersRequestPrivate::GetServersRequestPrivate(
    const GetServersRequestPrivate &other, GetServersRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
