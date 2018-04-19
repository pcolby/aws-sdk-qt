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

#include "modifymounttargetsecuritygroupsrequest.h"
#include "modifymounttargetsecuritygroupsrequest_p.h"
#include "modifymounttargetsecuritygroupsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::ModifyMountTargetSecurityGroupsRequest
 * \brief The ModifyMountTargetSecurityGroupsRequest class provides an interface for EFS ModifyMountTargetSecurityGroups requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="http://docs.aws.amazon.com/efs/latest/ug/api-reference.html">User
 *
 * \sa EFSClient::modifyMountTargetSecurityGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyMountTargetSecurityGroupsRequest::ModifyMountTargetSecurityGroupsRequest(const ModifyMountTargetSecurityGroupsRequest &other)
    : EFSRequest(new ModifyMountTargetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyMountTargetSecurityGroupsRequest object.
 */
ModifyMountTargetSecurityGroupsRequest::ModifyMountTargetSecurityGroupsRequest()
    : EFSRequest(new ModifyMountTargetSecurityGroupsRequestPrivate(EFSRequest::ModifyMountTargetSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyMountTargetSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyMountTargetSecurityGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyMountTargetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyMountTargetSecurityGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::ModifyMountTargetSecurityGroupsRequestPrivate
 * \brief The ModifyMountTargetSecurityGroupsRequestPrivate class provides private implementation for ModifyMountTargetSecurityGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a ModifyMountTargetSecurityGroupsRequestPrivate object for EFS \a action,
 * with public implementation \a q.
 */
ModifyMountTargetSecurityGroupsRequestPrivate::ModifyMountTargetSecurityGroupsRequestPrivate(
    const EFSRequest::Action action, ModifyMountTargetSecurityGroupsRequest * const q)
    : EFSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyMountTargetSecurityGroupsRequest
 * class' copy constructor.
 */
ModifyMountTargetSecurityGroupsRequestPrivate::ModifyMountTargetSecurityGroupsRequestPrivate(
    const ModifyMountTargetSecurityGroupsRequestPrivate &other, ModifyMountTargetSecurityGroupsRequest * const q)
    : EFSRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
