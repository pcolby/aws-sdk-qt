/*
    Copyright 2013-2018 Paul Colby

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

#include "createmembersrequest.h"
#include "createmembersrequest_p.h"
#include "createmembersresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::CreateMembersRequest
 * \brief The CreateMembersRequest class provides an interface for SecurityHub CreateMembers requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::createMembers
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMembersRequest::CreateMembersRequest(const CreateMembersRequest &other)
    : SecurityHubRequest(new CreateMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMembersRequest object.
 */
CreateMembersRequest::CreateMembersRequest()
    : SecurityHubRequest(new CreateMembersRequestPrivate(SecurityHubRequest::CreateMembersAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMembersRequest::response(QNetworkReply * const reply) const
{
    return new CreateMembersResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::CreateMembersRequestPrivate
 * \brief The CreateMembersRequestPrivate class provides private implementation for CreateMembersRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a CreateMembersRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const SecurityHubRequest::Action action, CreateMembersRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMembersRequest
 * class' copy constructor.
 */
CreateMembersRequestPrivate::CreateMembersRequestPrivate(
    const CreateMembersRequestPrivate &other, CreateMembersRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
