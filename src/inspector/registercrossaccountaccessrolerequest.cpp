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

#include "registercrossaccountaccessrolerequest.h"
#include "registercrossaccountaccessrolerequest_p.h"
#include "registercrossaccountaccessroleresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleRequest
 * \brief The RegisterCrossAccountAccessRoleRequest class provides an interface for Inspector RegisterCrossAccountAccessRole requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::registerCrossAccountAccessRole
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterCrossAccountAccessRoleRequest::RegisterCrossAccountAccessRoleRequest(const RegisterCrossAccountAccessRoleRequest &other)
    : InspectorRequest(new RegisterCrossAccountAccessRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterCrossAccountAccessRoleRequest object.
 */
RegisterCrossAccountAccessRoleRequest::RegisterCrossAccountAccessRoleRequest()
    : InspectorRequest(new RegisterCrossAccountAccessRoleRequestPrivate(InspectorRequest::RegisterCrossAccountAccessRoleAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterCrossAccountAccessRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterCrossAccountAccessRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterCrossAccountAccessRoleRequest::response(QNetworkReply * const reply) const
{
    return new RegisterCrossAccountAccessRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::RegisterCrossAccountAccessRoleRequestPrivate
 * \brief The RegisterCrossAccountAccessRoleRequestPrivate class provides private implementation for RegisterCrossAccountAccessRoleRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a RegisterCrossAccountAccessRoleRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
RegisterCrossAccountAccessRoleRequestPrivate::RegisterCrossAccountAccessRoleRequestPrivate(
    const InspectorRequest::Action action, RegisterCrossAccountAccessRoleRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterCrossAccountAccessRoleRequest
 * class' copy constructor.
 */
RegisterCrossAccountAccessRoleRequestPrivate::RegisterCrossAccountAccessRoleRequestPrivate(
    const RegisterCrossAccountAccessRoleRequestPrivate &other, RegisterCrossAccountAccessRoleRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
