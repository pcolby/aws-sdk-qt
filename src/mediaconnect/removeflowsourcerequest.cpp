// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowsourcerequest.h"
#include "removeflowsourcerequest_p.h"
#include "removeflowsourceresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceRequest
 * \brief The RemoveFlowSourceRequest class provides an interface for MediaConnect RemoveFlowSource requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowSource
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFlowSourceRequest::RemoveFlowSourceRequest(const RemoveFlowSourceRequest &other)
    : MediaConnectRequest(new RemoveFlowSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFlowSourceRequest object.
 */
RemoveFlowSourceRequest::RemoveFlowSourceRequest()
    : MediaConnectRequest(new RemoveFlowSourceRequestPrivate(MediaConnectRequest::RemoveFlowSourceAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFlowSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFlowSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFlowSourceRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFlowSourceResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceRequestPrivate
 * \brief The RemoveFlowSourceRequestPrivate class provides private implementation for RemoveFlowSourceRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowSourceRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RemoveFlowSourceRequestPrivate::RemoveFlowSourceRequestPrivate(
    const MediaConnectRequest::Action action, RemoveFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFlowSourceRequest
 * class' copy constructor.
 */
RemoveFlowSourceRequestPrivate::RemoveFlowSourceRequestPrivate(
    const RemoveFlowSourceRequestPrivate &other, RemoveFlowSourceRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
