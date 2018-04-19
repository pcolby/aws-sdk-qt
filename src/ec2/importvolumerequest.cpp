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

#include "importvolumerequest.h"
#include "importvolumerequest_p.h"
#include "importvolumeresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportVolumeRequest
 * \brief The ImportVolumeRequest class provides an interface for EC2 ImportVolume requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::importVolume
 */

/*!
 * Constructs a copy of \a other.
 */
ImportVolumeRequest::ImportVolumeRequest(const ImportVolumeRequest &other)
    : EC2Request(new ImportVolumeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportVolumeRequest object.
 */
ImportVolumeRequest::ImportVolumeRequest()
    : EC2Request(new ImportVolumeRequestPrivate(EC2Request::ImportVolumeAction, this))
{

}

/*!
 * \reimp
 */
bool ImportVolumeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportVolumeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportVolumeRequest::response(QNetworkReply * const reply) const
{
    return new ImportVolumeResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::ImportVolumeRequestPrivate
 * \brief The ImportVolumeRequestPrivate class provides private implementation for ImportVolumeRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 *
 * Constructs a ImportVolumeRequestPrivate object for EC2 \a action with,
 * public implementation \a q.
 */
ImportVolumeRequestPrivate::ImportVolumeRequestPrivate(
    const EC2Request::Action action, ImportVolumeRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportVolumeRequest
 * class' copy constructor.
 */
ImportVolumeRequestPrivate::ImportVolumeRequestPrivate(
    const ImportVolumeRequestPrivate &other, ImportVolumeRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
