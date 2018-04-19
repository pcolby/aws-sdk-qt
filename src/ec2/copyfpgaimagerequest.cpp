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

#include "copyfpgaimagerequest.h"
#include "copyfpgaimagerequest_p.h"
#include "copyfpgaimageresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CopyFpgaImageRequest
 * \brief The CopyFpgaImageRequest class provides an interface for EC2 CopyFpgaImage requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::copyFpgaImage
 */

/*!
 * Constructs a copy of \a other.
 */
CopyFpgaImageRequest::CopyFpgaImageRequest(const CopyFpgaImageRequest &other)
    : EC2Request(new CopyFpgaImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyFpgaImageRequest object.
 */
CopyFpgaImageRequest::CopyFpgaImageRequest()
    : EC2Request(new CopyFpgaImageRequestPrivate(EC2Request::CopyFpgaImageAction, this))
{

}

/*!
 * \reimp
 */
bool CopyFpgaImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyFpgaImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyFpgaImageRequest::response(QNetworkReply * const reply) const
{
    return new CopyFpgaImageResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CopyFpgaImageRequestPrivate
 * \brief The CopyFpgaImageRequestPrivate class provides private implementation for CopyFpgaImageRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CopyFpgaImageRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CopyFpgaImageRequestPrivate::CopyFpgaImageRequestPrivate(
    const EC2Request::Action action, CopyFpgaImageRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyFpgaImageRequest
 * class' copy constructor.
 */
CopyFpgaImageRequestPrivate::CopyFpgaImageRequestPrivate(
    const CopyFpgaImageRequestPrivate &other, CopyFpgaImageRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
