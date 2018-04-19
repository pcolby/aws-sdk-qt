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

#include "deletedhcpoptionsrequest.h"
#include "deletedhcpoptionsrequest_p.h"
#include "deletedhcpoptionsresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteDhcpOptionsRequest
 * \brief The DeleteDhcpOptionsRequest class provides an interface for EC2 DeleteDhcpOptions requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::deleteDhcpOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDhcpOptionsRequest::DeleteDhcpOptionsRequest(const DeleteDhcpOptionsRequest &other)
    : EC2Request(new DeleteDhcpOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDhcpOptionsRequest object.
 */
DeleteDhcpOptionsRequest::DeleteDhcpOptionsRequest()
    : EC2Request(new DeleteDhcpOptionsRequestPrivate(EC2Request::DeleteDhcpOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDhcpOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDhcpOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDhcpOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDhcpOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteDhcpOptionsRequestPrivate
 * \brief The DeleteDhcpOptionsRequestPrivate class provides private implementation for DeleteDhcpOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteDhcpOptionsRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DeleteDhcpOptionsRequestPrivate::DeleteDhcpOptionsRequestPrivate(
    const EC2Request::Action action, DeleteDhcpOptionsRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDhcpOptionsRequest
 * class' copy constructor.
 */
DeleteDhcpOptionsRequestPrivate::DeleteDhcpOptionsRequestPrivate(
    const DeleteDhcpOptionsRequestPrivate &other, DeleteDhcpOptionsRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
