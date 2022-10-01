// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startconnectionrequest.h"
#include "startconnectionrequest_p.h"
#include "startconnectionresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::StartConnectionRequest
 * \brief The StartConnectionRequest class provides an interface for Outposts StartConnection requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::startConnection
 */

/*!
 * Constructs a copy of \a other.
 */
StartConnectionRequest::StartConnectionRequest(const StartConnectionRequest &other)
    : OutpostsRequest(new StartConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartConnectionRequest object.
 */
StartConnectionRequest::StartConnectionRequest()
    : OutpostsRequest(new StartConnectionRequestPrivate(OutpostsRequest::StartConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool StartConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartConnectionRequest::response(QNetworkReply * const reply) const
{
    return new StartConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::StartConnectionRequestPrivate
 * \brief The StartConnectionRequestPrivate class provides private implementation for StartConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a StartConnectionRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
StartConnectionRequestPrivate::StartConnectionRequestPrivate(
    const OutpostsRequest::Action action, StartConnectionRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartConnectionRequest
 * class' copy constructor.
 */
StartConnectionRequestPrivate::StartConnectionRequestPrivate(
    const StartConnectionRequestPrivate &other, StartConnectionRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
