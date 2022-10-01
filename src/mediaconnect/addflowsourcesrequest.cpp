// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowsourcesrequest.h"
#include "addflowsourcesrequest_p.h"
#include "addflowsourcesresponse.h"
#include "mediaconnectrequest_p.h"

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesRequest
 * \brief The AddFlowSourcesRequest class provides an interface for MediaConnect AddFlowSources requests.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowSources
 */

/*!
 * Constructs a copy of \a other.
 */
AddFlowSourcesRequest::AddFlowSourcesRequest(const AddFlowSourcesRequest &other)
    : MediaConnectRequest(new AddFlowSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFlowSourcesRequest object.
 */
AddFlowSourcesRequest::AddFlowSourcesRequest()
    : MediaConnectRequest(new AddFlowSourcesRequestPrivate(MediaConnectRequest::AddFlowSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool AddFlowSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFlowSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFlowSourcesRequest::response(QNetworkReply * const reply) const
{
    return new AddFlowSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesRequestPrivate
 * \brief The AddFlowSourcesRequestPrivate class provides private implementation for AddFlowSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowSourcesRequestPrivate object for MediaConnect \a action,
 * with public implementation \a q.
 */
AddFlowSourcesRequestPrivate::AddFlowSourcesRequestPrivate(
    const MediaConnectRequest::Action action, AddFlowSourcesRequest * const q)
    : MediaConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFlowSourcesRequest
 * class' copy constructor.
 */
AddFlowSourcesRequestPrivate::AddFlowSourcesRequestPrivate(
    const AddFlowSourcesRequestPrivate &other, AddFlowSourcesRequest * const q)
    : MediaConnectRequestPrivate(other, q)
{

}

} // namespace MediaConnect
} // namespace QtAws
