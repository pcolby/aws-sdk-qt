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

#include "modifyaccountrequest.h"
#include "modifyaccountrequest_p.h"
#include "modifyaccountresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyAccountRequest
 * \brief The ModifyAccountRequest class provides an interface for WorkSpaces ModifyAccount requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyAccount
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyAccountRequest::ModifyAccountRequest(const ModifyAccountRequest &other)
    : WorkSpacesRequest(new ModifyAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyAccountRequest object.
 */
ModifyAccountRequest::ModifyAccountRequest()
    : WorkSpacesRequest(new ModifyAccountRequestPrivate(WorkSpacesRequest::ModifyAccountAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyAccountRequest::response(QNetworkReply * const reply) const
{
    return new ModifyAccountResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyAccountRequestPrivate
 * \brief The ModifyAccountRequestPrivate class provides private implementation for ModifyAccountRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyAccountRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyAccountRequestPrivate::ModifyAccountRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyAccountRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyAccountRequest
 * class' copy constructor.
 */
ModifyAccountRequestPrivate::ModifyAccountRequestPrivate(
    const ModifyAccountRequestPrivate &other, ModifyAccountRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
