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

#include "createsubnetgrouprequest.h"
#include "createsubnetgrouprequest_p.h"
#include "createsubnetgroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::CreateSubnetGroupRequest
 * \brief The CreateSubnetGroupRequest class provides an interface for DAX CreateSubnetGroup requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createSubnetGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other)
    : DaxRequest(new CreateSubnetGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSubnetGroupRequest object.
 */
CreateSubnetGroupRequest::CreateSubnetGroupRequest()
    : DaxRequest(new CreateSubnetGroupRequestPrivate(DaxRequest::CreateSubnetGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSubnetGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSubnetGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSubnetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateSubnetGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::CreateSubnetGroupRequestPrivate
 * \brief The CreateSubnetGroupRequestPrivate class provides private implementation for CreateSubnetGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a CreateSubnetGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const DaxRequest::Action action, CreateSubnetGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSubnetGroupRequest
 * class' copy constructor.
 */
CreateSubnetGroupRequestPrivate::CreateSubnetGroupRequestPrivate(
    const CreateSubnetGroupRequestPrivate &other, CreateSubnetGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
