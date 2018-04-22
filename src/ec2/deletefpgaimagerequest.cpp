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

#include "deletefpgaimagerequest.h"
#include "deletefpgaimagerequest_p.h"
#include "deletefpgaimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DeleteFpgaImageRequest
 * \brief The DeleteFpgaImageRequest class provides an interface for EC2 DeleteFpgaImage requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::deleteFpgaImage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest(const DeleteFpgaImageRequest &other)
    : Ec2Request(new DeleteFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFpgaImageRequest object.
 */
DeleteFpgaImageRequest::DeleteFpgaImageRequest()
    : Ec2Request(new DeleteFpgaImageRequestPrivate(Ec2Request::DeleteFpgaImageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFpgaImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFpgaImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFpgaImageResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::DeleteFpgaImageRequestPrivate
 * \brief The DeleteFpgaImageRequestPrivate class provides private implementation for DeleteFpgaImageRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DeleteFpgaImageRequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const Ec2Request::Action action, DeleteFpgaImageRequest * const q)
    : Ec2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFpgaImageRequest
 * class' copy constructor.
 */
DeleteFpgaImageRequestPrivate::DeleteFpgaImageRequestPrivate(
    const DeleteFpgaImageRequestPrivate &other, DeleteFpgaImageRequest * const q)
    : Ec2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
