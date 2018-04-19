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

#include "createsecuritygrouprequest.h"
#include "createsecuritygrouprequest_p.h"
#include "createsecuritygroupresponse.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CreateSecurityGroupRequest
 * \brief The CreateSecurityGroupRequest class provides an interface for EC2 CreateSecurityGroup requests.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::createSecurityGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSecurityGroupRequest::CreateSecurityGroupRequest(const CreateSecurityGroupRequest &other)
    : EC2Request(new CreateSecurityGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSecurityGroupRequest object.
 */
CreateSecurityGroupRequest::CreateSecurityGroupRequest()
    : EC2Request(new CreateSecurityGroupRequestPrivate(EC2Request::CreateSecurityGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSecurityGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSecurityGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSecurityGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityGroupResponse(*this, reply);
}

/*!
 * \class QtAws::EC2::CreateSecurityGroupRequestPrivate
 * \brief The CreateSecurityGroupRequestPrivate class provides private implementation for CreateSecurityGroupRequest.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CreateSecurityGroupRequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
CreateSecurityGroupRequestPrivate::CreateSecurityGroupRequestPrivate(
    const EC2Request::Action action, CreateSecurityGroupRequest * const q)
    : EC2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityGroupRequest
 * class' copy constructor.
 */
CreateSecurityGroupRequestPrivate::CreateSecurityGroupRequestPrivate(
    const CreateSecurityGroupRequestPrivate &other, CreateSecurityGroupRequest * const q)
    : EC2RequestPrivate(other, q)
{

}

} // namespace EC2
} // namespace QtAws
