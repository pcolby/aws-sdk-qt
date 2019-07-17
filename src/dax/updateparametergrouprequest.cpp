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

#include "updateparametergrouprequest.h"
#include "updateparametergrouprequest_p.h"
#include "updateparametergroupresponse.h"
#include "daxrequest_p.h"

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::UpdateParameterGroupRequest
 * \brief The UpdateParameterGroupRequest class provides an interface for DAX UpdateParameterGroup requests.
 *
 * \inmodule QtAwsDAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::updateParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest(const UpdateParameterGroupRequest &other)
    : DaxRequest(new UpdateParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateParameterGroupRequest object.
 */
UpdateParameterGroupRequest::UpdateParameterGroupRequest()
    : DaxRequest(new UpdateParameterGroupRequestPrivate(DaxRequest::UpdateParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::DAX::UpdateParameterGroupRequestPrivate
 * \brief The UpdateParameterGroupRequestPrivate class provides private implementation for UpdateParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsDAX
 */

/*!
 * Constructs a UpdateParameterGroupRequestPrivate object for Dax \a action,
 * with public implementation \a q.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const DaxRequest::Action action, UpdateParameterGroupRequest * const q)
    : DaxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateParameterGroupRequest
 * class' copy constructor.
 */
UpdateParameterGroupRequestPrivate::UpdateParameterGroupRequestPrivate(
    const UpdateParameterGroupRequestPrivate &other, UpdateParameterGroupRequest * const q)
    : DaxRequestPrivate(other, q)
{

}

} // namespace DAX
} // namespace QtAws
