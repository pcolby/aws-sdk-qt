// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowmediastreamsrequest.h"
#include "addflowmediastreamsrequest_p.h"
#include "addflowmediastreamsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsRequest
 * \brief The AddFlowMediaStreamsRequest class provides an interface for MediaConnect AddFlowMediaStreams requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowMediaStreams
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowMediaStreamsRequest::AddFlowMediaStreamsRequest(const AddFlowMediaStreamsRequest &other)
    : MediaConnectRequest(new AddFlowMediaStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowMediaStreamsRequest object.
 */
AddFlowMediaStreamsRequest::AddFlowMediaStreamsRequest()
    : MediaConnectRequest(new AddFlowMediaStreamsRequestPrivate(MediaConnectRequest::AddFlowMediaStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowMediaStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowMediaStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowMediaStreamsRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowMediaStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsRequestPrivate
 * \brief The AddFlowMediaStreamsRequestPrivate class provides private implementation for AddFlowMediaStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowMediaStreamsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowMediaStreamsRequestPrivate::AddFlowMediaStreamsRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowMediaStreamsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowMediaStreamsRequest
 * class' copy constructor.
 */
AddFlowMediaStreamsRequestPrivate::AddFlowMediaStreamsRequestPrivate(
    const AddFlowMediaStreamsRequestPrivate &other, AddFlowMediaStreamsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
