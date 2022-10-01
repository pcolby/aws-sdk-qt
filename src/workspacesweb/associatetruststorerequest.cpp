/*
    Copyright 2013-2021 Paul Colby

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

#include "associatetruststorerequest.h"
#include "associatetruststorerequest_p.h"
#include "associatetruststoreresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateTrustStoreRequest
 * \brief The AssociateTrustStoreRequest class provides an interface for WorkSpacesWeb AssociateTrustStore requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateTrustStore
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTrustStoreRequest::AssociateTrustStoreRequest(const AssociateTrustStoreRequest &other)
    : WorkSpacesWebRequest(new AssociateTrustStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTrustStoreRequest object.
 */
AssociateTrustStoreRequest::AssociateTrustStoreRequest()
    : WorkSpacesWebRequest(new AssociateTrustStoreRequestPrivate(WorkSpacesWebRequest::AssociateTrustStoreAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTrustStoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTrustStoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTrustStoreRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTrustStoreResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateTrustStoreRequestPrivate
 * \brief The AssociateTrustStoreRequestPrivate class provides private implementation for AssociateTrustStoreRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateTrustStoreRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
AssociateTrustStoreRequestPrivate::AssociateTrustStoreRequestPrivate(
    const WorkSpacesWebRequest::Action action, AssociateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTrustStoreRequest
 * class' copy constructor.
 */
AssociateTrustStoreRequestPrivate::AssociateTrustStoreRequestPrivate(
    const AssociateTrustStoreRequestPrivate &other, AssociateTrustStoreRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
