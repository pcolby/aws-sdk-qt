// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapprequest.h"
#include "deleteapprequest_p.h"
#include "deleteappresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAppRequest
 * \brief The DeleteAppRequest class provides an interface for Pinpoint DeleteApp requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteApp
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAppRequest::DeleteAppRequest(const DeleteAppRequest &other)
    : PinpointRequest(new DeleteAppRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAppRequest object.
 */
DeleteAppRequest::DeleteAppRequest()
    : PinpointRequest(new DeleteAppRequestPrivate(PinpointRequest::DeleteAppAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAppRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAppResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAppRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAppResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteAppRequestPrivate
 * \brief The DeleteAppRequestPrivate class provides private implementation for DeleteAppRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAppRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const PinpointRequest::Action action, DeleteAppRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAppRequest
 * class' copy constructor.
 */
DeleteAppRequestPrivate::DeleteAppRequestPrivate(
    const DeleteAppRequestPrivate &other, DeleteAppRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
