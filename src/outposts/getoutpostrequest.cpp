// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoutpostrequest.h"
#include "getoutpostrequest_p.h"
#include "getoutpostresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetOutpostRequest
 * \brief The GetOutpostRequest class provides an interface for Outposts GetOutpost requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getOutpost
 */

/*!
 * Constructs a copy of \a other.
 */
GetOutpostRequest::GetOutpostRequest(const GetOutpostRequest &other)
    : OutpostsRequest(new GetOutpostRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOutpostRequest object.
 */
GetOutpostRequest::GetOutpostRequest()
    : OutpostsRequest(new GetOutpostRequestPrivate(OutpostsRequest::GetOutpostAction, this))
{

}

/*!
 * \reimp
 */
bool GetOutpostRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOutpostResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOutpostRequest::response(QNetworkReply * const reply) const
{
    return new GetOutpostResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetOutpostRequestPrivate
 * \brief The GetOutpostRequestPrivate class provides private implementation for GetOutpostRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetOutpostRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetOutpostRequestPrivate::GetOutpostRequestPrivate(
    const OutpostsRequest::Action action, GetOutpostRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOutpostRequest
 * class' copy constructor.
 */
GetOutpostRequestPrivate::GetOutpostRequestPrivate(
    const GetOutpostRequestPrivate &other, GetOutpostRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
