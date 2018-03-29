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

#include "disassociateconnectorrequest.h"
#include "disassociateconnectorrequest_p.h"
#include "disassociateconnectorresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  DisassociateConnectorRequest
 *
 * @brief  Implements SMS DisassociateConnector requests.
 *
 * @see    SMSClient::disassociateConnector
 */

/**
 * @brief  Constructs a new DisassociateConnectorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateConnectorRequest::DisassociateConnectorRequest(const DisassociateConnectorRequest &other)
    : SMSRequest(new DisassociateConnectorRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateConnectorRequest object.
 */
DisassociateConnectorRequest::DisassociateConnectorRequest()
    : SMSRequest(new DisassociateConnectorRequestPrivate(SMSRequest::DisassociateConnectorAction, this))
{

}

bool DisassociateConnectorRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateConnectorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateConnectorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateConnectorRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConnectorResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateConnectorRequestPrivate
 *
 * @brief  Private implementation for DisassociateConnectorRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectorRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public DisassociateConnectorRequest instance.
 */
DisassociateConnectorRequestPrivate::DisassociateConnectorRequestPrivate(
    const SMSRequest::Action action, DisassociateConnectorRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConnectorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateConnectorRequest instance.
 */
DisassociateConnectorRequestPrivate::DisassociateConnectorRequestPrivate(
    const DisassociateConnectorRequestPrivate &other, DisassociateConnectorRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
