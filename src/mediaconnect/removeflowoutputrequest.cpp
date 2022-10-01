// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowoutputrequest.h"
#include "removeflowoutputrequest_p.h"
#include "removeflowoutputresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputRequest
 * \brief The RemoveFlowOutputRequest class provides an interface for MediaConnect RemoveFlowOutput requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowOutput
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveFlowOutputRequest::RemoveFlowOutputRequest(const RemoveFlowOutputRequest &other)
    : MediaConnectRequest(new RemoveFlowOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveFlowOutputRequest object.
 */
RemoveFlowOutputRequest::RemoveFlowOutputRequest()
    : MediaConnectRequest(new RemoveFlowOutputRequestPrivate(MediaConnectRequest::RemoveFlowOutputAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveFlowOutputRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveFlowOutputResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveFlowOutputRequest::response(QNetworkReply * const reply) const
{
    return new RemoveFlowOutputResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputRequestPrivate
 * \brief The RemoveFlowOutputRequestPrivate class provides private implementation for RemoveFlowOutputRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowOutputRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
RemoveFlowOutputRequestPrivate::RemoveFlowOutputRequestPrivate(
    const MediaConnectRequest::Action action, RemoveFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveFlowOutputRequest
 * class' copy constructor.
 */
RemoveFlowOutputRequestPrivate::RemoveFlowOutputRequestPrivate(
    const RemoveFlowOutputRequestPrivate &other, RemoveFlowOutputRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
