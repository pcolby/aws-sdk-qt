// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowoutputsrequest.h"
#include "addflowoutputsrequest_p.h"
#include "addflowoutputsresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsRequest
 * \brief The AddFlowOutputsRequest class provides an interface for MediaConnect AddFlowOutputs requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowOutputs
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowOutputsRequest::AddFlowOutputsRequest(const AddFlowOutputsRequest &other)
    : MediaConnectRequest(new AddFlowOutputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowOutputsRequest object.
 */
AddFlowOutputsRequest::AddFlowOutputsRequest()
    : MediaConnectRequest(new AddFlowOutputsRequestPrivate(MediaConnectRequest::AddFlowOutputsAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowOutputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowOutputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowOutputsRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowOutputsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsRequestPrivate
 * \brief The AddFlowOutputsRequestPrivate class provides private implementation for AddFlowOutputsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowOutputsRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowOutputsRequestPrivate::AddFlowOutputsRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowOutputsRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowOutputsRequest
 * class' copy constructor.
 */
AddFlowOutputsRequestPrivate::AddFlowOutputsRequestPrivate(
    const AddFlowOutputsRequestPrivate &other, AddFlowOutputsRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
