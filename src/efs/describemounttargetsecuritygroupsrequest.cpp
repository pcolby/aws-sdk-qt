// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemounttargetsecuritygroupsrequest.h"
#include "describemounttargetsecuritygroupsrequest_p.h"
#include "describemounttargetsecuritygroupsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeMountTargetSecurityGroupsRequest
 * \brief The DescribeMountTargetSecurityGroupsRequest class provides an interface for Efs DescribeMountTargetSecurityGroups requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeMountTargetSecurityGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest(const DescribeMountTargetSecurityGroupsRequest &other)
    : EfsRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMountTargetSecurityGroupsRequest object.
 */
DescribeMountTargetSecurityGroupsRequest::DescribeMountTargetSecurityGroupsRequest()
    : EfsRequest(new DescribeMountTargetSecurityGroupsRequestPrivate(EfsRequest::DescribeMountTargetSecurityGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMountTargetSecurityGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMountTargetSecurityGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMountTargetSecurityGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMountTargetSecurityGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::DescribeMountTargetSecurityGroupsRequestPrivate
 * \brief The DescribeMountTargetSecurityGroupsRequestPrivate class provides private implementation for DescribeMountTargetSecurityGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeMountTargetSecurityGroupsRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const EfsRequest::Action action, DescribeMountTargetSecurityGroupsRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMountTargetSecurityGroupsRequest
 * class' copy constructor.
 */
DescribeMountTargetSecurityGroupsRequestPrivate::DescribeMountTargetSecurityGroupsRequestPrivate(
    const DescribeMountTargetSecurityGroupsRequestPrivate &other, DescribeMountTargetSecurityGroupsRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
