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

#include "confirmproductinstancerequest.h"
#include "confirmproductinstancerequest_p.h"
#include "confirmproductinstanceresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ConfirmProductInstanceRequest
 * \brief The ConfirmProductInstanceRequest class provides an interface for EC2 ConfirmProductInstance requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::confirmProductInstance
 */

/*!
 * Constructs a copy of \a other.
 */
ConfirmProductInstanceRequest::ConfirmProductInstanceRequest(const ConfirmProductInstanceRequest &other)
    : EC2Request(new ConfirmProductInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfirmProductInstanceRequest object.
 */
ConfirmProductInstanceRequest::ConfirmProductInstanceRequest()
    : EC2Request(new ConfirmProductInstanceRequestPrivate(EC2Request::ConfirmProductInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool ConfirmProductInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfirmProductInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfirmProductInstanceRequest::response(QNetworkReply * const reply) const
{
    return new ConfirmProductInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ConfirmProductInstanceRequestPrivate
 * \brief The ConfirmProductInstanceRequestPrivate class provides private implementation for ConfirmProductInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a ConfirmProductInstanceRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
ConfirmProductInstanceRequestPrivate::ConfirmProductInstanceRequestPrivate(
    const EC2Request::Action action, ConfirmProductInstanceRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfirmProductInstanceRequest
 * class' copy constructor.
 */
ConfirmProductInstanceRequestPrivate::ConfirmProductInstanceRequestPrivate(
    const ConfirmProductInstanceRequestPrivate &other, ConfirmProductInstanceRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
