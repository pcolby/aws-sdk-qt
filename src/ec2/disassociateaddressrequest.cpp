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

#include "disassociateaddressrequest.h"
#include "disassociateaddressrequest_p.h"
#include "disassociateaddressresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateAddressRequest
 * \brief The DisassociateAddressRequest class provides an interface for EC2 DisassociateAddress requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::disassociateAddress
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAddressRequest::DisassociateAddressRequest(const DisassociateAddressRequest &other)
    : EC2Request(new DisassociateAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAddressRequest object.
 */
DisassociateAddressRequest::DisassociateAddressRequest()
    : EC2Request(new DisassociateAddressRequestPrivate(EC2Request::DisassociateAddressAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAddressRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAddressResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DisassociateAddressRequestPrivate
 * \brief The DisassociateAddressRequestPrivate class provides private implementation for DisassociateAddressRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a DisassociateAddressRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
DisassociateAddressRequestPrivate::DisassociateAddressRequestPrivate(
    const EC2Request::Action action, DisassociateAddressRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAddressRequest
 * class' copy constructor.
 */
DisassociateAddressRequestPrivate::DisassociateAddressRequestPrivate(
    const DisassociateAddressRequestPrivate &other, DisassociateAddressRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
