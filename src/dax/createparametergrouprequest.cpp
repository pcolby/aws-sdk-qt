/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createparametergrouprequest.h"
#include "createparametergrouprequest_p.h"
#include "createparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::CreateParameterGroupRequest
 * \brief The CreateParameterGroupRequest class provides an interface for DAX CreateParameterGroup requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest(const CreateParameterGroupRequest &other)
    : DaxRequest(new CreateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParameterGroupRequest object.
 */
CreateParameterGroupRequest::CreateParameterGroupRequest()
    : DaxRequest(new CreateParameterGroupRequestPrivate(DaxRequest::CreateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::CreateParameterGroupRequestPrivate
 * \brief The CreateParameterGroupRequestPrivate class provides private implementation for CreateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a CreateParameterGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const DaxRequest::Action action, CreateParameterGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParameterGroupRequest
 * class' copy constructor.
 */
CreateParameterGroupRequestPrivate::CreateParameterGroupRequestPrivate(
    const CreateParameterGroupRequestPrivate &other, CreateParameterGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
