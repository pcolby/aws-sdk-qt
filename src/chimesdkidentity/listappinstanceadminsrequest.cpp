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

#include "listappinstanceadminsrequest.h"
#include "listappinstanceadminsrequest_p.h"
#include "listappinstanceadminsresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceAdminsRequest
 * \brief The ListAppInstanceAdminsRequest class provides an interface for ChimeSdkIdentity ListAppInstanceAdmins requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstanceAdmins
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppInstanceAdminsRequest::ListAppInstanceAdminsRequest(const ListAppInstanceAdminsRequest &other)
    : ChimeSdkIdentityRequest(new ListAppInstanceAdminsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppInstanceAdminsRequest object.
 */
ListAppInstanceAdminsRequest::ListAppInstanceAdminsRequest()
    : ChimeSdkIdentityRequest(new ListAppInstanceAdminsRequestPrivate(ChimeSdkIdentityRequest::ListAppInstanceAdminsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppInstanceAdminsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppInstanceAdminsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppInstanceAdminsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppInstanceAdminsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceAdminsRequestPrivate
 * \brief The ListAppInstanceAdminsRequestPrivate class provides private implementation for ListAppInstanceAdminsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstanceAdminsRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
ListAppInstanceAdminsRequestPrivate::ListAppInstanceAdminsRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, ListAppInstanceAdminsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppInstanceAdminsRequest
 * class' copy constructor.
 */
ListAppInstanceAdminsRequestPrivate::ListAppInstanceAdminsRequestPrivate(
    const ListAppInstanceAdminsRequestPrivate &other, ListAppInstanceAdminsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
