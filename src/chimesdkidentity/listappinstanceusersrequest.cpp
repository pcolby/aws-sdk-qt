// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappinstanceusersrequest.h"
#include "listappinstanceusersrequest_p.h"
#include "listappinstanceusersresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUsersRequest
 * \brief The ListAppInstanceUsersRequest class provides an interface for ChimeSdkIdentity ListAppInstanceUsers requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstanceUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppInstanceUsersRequest::ListAppInstanceUsersRequest(const ListAppInstanceUsersRequest &other)
    : ChimeSdkIdentityRequest(new ListAppInstanceUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppInstanceUsersRequest object.
 */
ListAppInstanceUsersRequest::ListAppInstanceUsersRequest()
    : ChimeSdkIdentityRequest(new ListAppInstanceUsersRequestPrivate(ChimeSdkIdentityRequest::ListAppInstanceUsersAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppInstanceUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppInstanceUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppInstanceUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListAppInstanceUsersResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUsersRequestPrivate
 * \brief The ListAppInstanceUsersRequestPrivate class provides private implementation for ListAppInstanceUsersRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstanceUsersRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
ListAppInstanceUsersRequestPrivate::ListAppInstanceUsersRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, ListAppInstanceUsersRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppInstanceUsersRequest
 * class' copy constructor.
 */
ListAppInstanceUsersRequestPrivate::ListAppInstanceUsersRequestPrivate(
    const ListAppInstanceUsersRequestPrivate &other, ListAppInstanceUsersRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
