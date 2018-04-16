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

#include "disassociateservicerolefromaccountrequest.h"
#include "disassociateservicerolefromaccountrequest_p.h"
#include "disassociateservicerolefromaccountresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DisassociateServiceRoleFromAccountRequest
 *
 * \brief The DisassociateServiceRoleFromAccountRequest class provides an interface for Greengrass DisassociateServiceRoleFromAccount requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::disassociateServiceRoleFromAccount
 */

/*!
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest(const DisassociateServiceRoleFromAccountRequest &other)
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequest object.
 */
DisassociateServiceRoleFromAccountRequest::DisassociateServiceRoleFromAccountRequest()
    : GreengrassRequest(new DisassociateServiceRoleFromAccountRequestPrivate(GreengrassRequest::DisassociateServiceRoleFromAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateServiceRoleFromAccountRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DisassociateServiceRoleFromAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateServiceRoleFromAccountResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateServiceRoleFromAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateServiceRoleFromAccountResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateServiceRoleFromAccountRequestPrivate
 *
 * @brief  Private implementation for DisassociateServiceRoleFromAccountRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public DisassociateServiceRoleFromAccountRequest instance.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const GreengrassRequest::Action action, DisassociateServiceRoleFromAccountRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateServiceRoleFromAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateServiceRoleFromAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateServiceRoleFromAccountRequest instance.
 */
DisassociateServiceRoleFromAccountRequestPrivate::DisassociateServiceRoleFromAccountRequestPrivate(
    const DisassociateServiceRoleFromAccountRequestPrivate &other, DisassociateServiceRoleFromAccountRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
