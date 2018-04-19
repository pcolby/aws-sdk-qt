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

#include "createvolumerequest.h"
#include "createvolumerequest_p.h"
#include "createvolumeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateVolumeRequest
 * \brief The CreateVolumeRequest class provides an interface for EC2 CreateVolume requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::createVolume
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVolumeRequest::CreateVolumeRequest(const CreateVolumeRequest &other)
    : EC2Request(new CreateVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVolumeRequest object.
 */
CreateVolumeRequest::CreateVolumeRequest()
    : EC2Request(new CreateVolumeRequestPrivate(EC2Request::CreateVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVolumeRequest::response(QNetworkReply * const reply) const
{
    return new CreateVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateVolumeRequestPrivate
 * \brief The CreateVolumeRequestPrivate class provides private implementation for CreateVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateVolumeRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const EC2Request::Action action, CreateVolumeRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVolumeRequest
 * class' copy constructor.
 */
CreateVolumeRequestPrivate::CreateVolumeRequestPrivate(
    const CreateVolumeRequestPrivate &other, CreateVolumeRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
