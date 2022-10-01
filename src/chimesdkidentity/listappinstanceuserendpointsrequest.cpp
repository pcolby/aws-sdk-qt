// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listappinstanceuserendpointsrequest.h"
#include "listappinstanceuserendpointsrequest_p.h"
#include "listappinstanceuserendpointsresponse.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUserEndpointsRequest
 * \brief The ListAppInstanceUserEndpointsRequest class provides an interface for ChimeSdkIdentity ListAppInstanceUserEndpoints requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkIdentityClient::listAppInstanceUserEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
ListAppInstanceUserEndpointsRequest::ListAppInstanceUserEndpointsRequest(const ListAppInstanceUserEndpointsRequest &other)
    : ChimeSdkIdentityRequest(new ListAppInstanceUserEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAppInstanceUserEndpointsRequest object.
 */
ListAppInstanceUserEndpointsRequest::ListAppInstanceUserEndpointsRequest()
    : ChimeSdkIdentityRequest(new ListAppInstanceUserEndpointsRequestPrivate(ChimeSdkIdentityRequest::ListAppInstanceUserEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool ListAppInstanceUserEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAppInstanceUserEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAppInstanceUserEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new ListAppInstanceUserEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkIdentity::ListAppInstanceUserEndpointsRequestPrivate
 * \brief The ListAppInstanceUserEndpointsRequestPrivate class provides private implementation for ListAppInstanceUserEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ListAppInstanceUserEndpointsRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
ListAppInstanceUserEndpointsRequestPrivate::ListAppInstanceUserEndpointsRequestPrivate(
    const ChimeSdkIdentityRequest::Action action, ListAppInstanceUserEndpointsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAppInstanceUserEndpointsRequest
 * class' copy constructor.
 */
ListAppInstanceUserEndpointsRequestPrivate::ListAppInstanceUserEndpointsRequestPrivate(
    const ListAppInstanceUserEndpointsRequestPrivate &other, ListAppInstanceUserEndpointsRequest * const q)
    : ChimeSdkIdentityRequestPrivate(other, q)
{

}

} // namespace ChimeSdkIdentity
} // namespace QtAws
