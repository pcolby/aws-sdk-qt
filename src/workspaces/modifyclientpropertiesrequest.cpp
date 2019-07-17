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

#include "modifyclientpropertiesrequest.h"
#include "modifyclientpropertiesrequest_p.h"
#include "modifyclientpropertiesresponse.h"
#include "workspacesrequest_p.h"

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesRequest
 * \brief The ModifyClientPropertiesRequest class provides an interface for WorkSpaces ModifyClientProperties requests.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::modifyClientProperties
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClientPropertiesRequest::ModifyClientPropertiesRequest(const ModifyClientPropertiesRequest &other)
    : WorkSpacesRequest(new ModifyClientPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClientPropertiesRequest object.
 */
ModifyClientPropertiesRequest::ModifyClientPropertiesRequest()
    : WorkSpacesRequest(new ModifyClientPropertiesRequestPrivate(WorkSpacesRequest::ModifyClientPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyClientPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyClientPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClientPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClientPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpaces::ModifyClientPropertiesRequestPrivate
 * \brief The ModifyClientPropertiesRequestPrivate class provides private implementation for ModifyClientPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a ModifyClientPropertiesRequestPrivate object for WorkSpaces \a action,
 * with public implementation \a q.
 */
ModifyClientPropertiesRequestPrivate::ModifyClientPropertiesRequestPrivate(
    const WorkSpacesRequest::Action action, ModifyClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyClientPropertiesRequest
 * class' copy constructor.
 */
ModifyClientPropertiesRequestPrivate::ModifyClientPropertiesRequestPrivate(
    const ModifyClientPropertiesRequestPrivate &other, ModifyClientPropertiesRequest * const q)
    : WorkSpacesRequestPrivate(other, q)
{

}

} // namespace WorkSpaces
} // namespace QtAws
