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

#include "detachnetworkinterfacerequest.h"
#include "detachnetworkinterfacerequest_p.h"
#include "detachnetworkinterfaceresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DetachNetworkInterfaceRequest
 * \brief The DetachNetworkInterfaceRequest class provides an interface for EC2 DetachNetworkInterface requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::detachNetworkInterface
 */

/*!
 * Constructs a copy of \a other.
 */
DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest(const DetachNetworkInterfaceRequest &other)
    : EC2Request(new DetachNetworkInterfaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachNetworkInterfaceRequest object.
 */
DetachNetworkInterfaceRequest::DetachNetworkInterfaceRequest()
    : EC2Request(new DetachNetworkInterfaceRequestPrivate(EC2Request::DetachNetworkInterfaceAction, this))
{

}

/*!
 * \reimp
 */
bool DetachNetworkInterfaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachNetworkInterfaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachNetworkInterfaceRequest::response(QNetworkReply * const reply) const
{
    return new DetachNetworkInterfaceResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DetachNetworkInterfaceRequestPrivate
 * \brief The DetachNetworkInterfaceRequestPrivate class provides private implementation for DetachNetworkInterfaceRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DetachNetworkInterfaceRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
DetachNetworkInterfaceRequestPrivate::DetachNetworkInterfaceRequestPrivate(
    const EC2Request::Action action, DetachNetworkInterfaceRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachNetworkInterfaceRequest
 * class' copy constructor.
 */
DetachNetworkInterfaceRequestPrivate::DetachNetworkInterfaceRequestPrivate(
    const DetachNetworkInterfaceRequestPrivate &other, DetachNetworkInterfaceRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
