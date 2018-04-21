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

#include "describemounttargetsrequest.h"
#include "describemounttargetsrequest_p.h"
#include "describemounttargetsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeMountTargetsRequest
 * \brief The DescribeMountTargetsRequest class provides an interface for EFS DescribeMountTargets requests.
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
 * \sa EfsClient::describeMountTargets
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMountTargetsRequest::DescribeMountTargetsRequest(const DescribeMountTargetsRequest &other)
    : EFSRequest(new DescribeMountTargetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMountTargetsRequest object.
 */
DescribeMountTargetsRequest::DescribeMountTargetsRequest()
    : EFSRequest(new DescribeMountTargetsRequestPrivate(EFSRequest::DescribeMountTargetsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMountTargetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMountTargetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMountTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMountTargetsResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::DescribeMountTargetsRequestPrivate
 * \brief The DescribeMountTargetsRequestPrivate class provides private implementation for DescribeMountTargetsRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeMountTargetsRequestPrivate object for EFS \a action,
 * with public implementation \a q.
 */
DescribeMountTargetsRequestPrivate::DescribeMountTargetsRequestPrivate(
    const EFSRequest::Action action, DescribeMountTargetsRequest * const q)
    : EFSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMountTargetsRequest
 * class' copy constructor.
 */
DescribeMountTargetsRequestPrivate::DescribeMountTargetsRequestPrivate(
    const DescribeMountTargetsRequestPrivate &other, DescribeMountTargetsRequest * const q)
    : EFSRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
