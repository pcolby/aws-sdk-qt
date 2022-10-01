// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconnectionrequest.h"
#include "getconnectionrequest_p.h"
#include "getconnectionresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetConnectionRequest
 * \brief The GetConnectionRequest class provides an interface for Outposts GetConnection requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getConnection
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectionRequest::GetConnectionRequest(const GetConnectionRequest &other)
    : OutpostsRequest(new GetConnectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectionRequest object.
 */
GetConnectionRequest::GetConnectionRequest()
    : OutpostsRequest(new GetConnectionRequestPrivate(OutpostsRequest::GetConnectionAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectionRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectionResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetConnectionRequestPrivate
 * \brief The GetConnectionRequestPrivate class provides private implementation for GetConnectionRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetConnectionRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const OutpostsRequest::Action action, GetConnectionRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectionRequest
 * class' copy constructor.
 */
GetConnectionRequestPrivate::GetConnectionRequestPrivate(
    const GetConnectionRequestPrivate &other, GetConnectionRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
