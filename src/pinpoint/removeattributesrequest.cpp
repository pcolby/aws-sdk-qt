// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeattributesrequest.h"
#include "removeattributesrequest_p.h"
#include "removeattributesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::RemoveAttributesRequest
 * \brief The RemoveAttributesRequest class provides an interface for Pinpoint RemoveAttributes requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::removeAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAttributesRequest::RemoveAttributesRequest(const RemoveAttributesRequest &other)
    : PinpointRequest(new RemoveAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAttributesRequest object.
 */
RemoveAttributesRequest::RemoveAttributesRequest()
    : PinpointRequest(new RemoveAttributesRequestPrivate(PinpointRequest::RemoveAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAttributesRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::RemoveAttributesRequestPrivate
 * \brief The RemoveAttributesRequestPrivate class provides private implementation for RemoveAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a RemoveAttributesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
RemoveAttributesRequestPrivate::RemoveAttributesRequestPrivate(
    const PinpointRequest::Action action, RemoveAttributesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAttributesRequest
 * class' copy constructor.
 */
RemoveAttributesRequestPrivate::RemoveAttributesRequestPrivate(
    const RemoveAttributesRequestPrivate &other, RemoveAttributesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
