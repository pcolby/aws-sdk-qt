// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsiterequest.h"
#include "getsiterequest_p.h"
#include "getsiteresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetSiteRequest
 * \brief The GetSiteRequest class provides an interface for Outposts GetSite requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getSite
 */

/*!
 * Constructs a copy of \a other.
 */
GetSiteRequest::GetSiteRequest(const GetSiteRequest &other)
    : OutpostsRequest(new GetSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSiteRequest object.
 */
GetSiteRequest::GetSiteRequest()
    : OutpostsRequest(new GetSiteRequestPrivate(OutpostsRequest::GetSiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSiteRequest::response(QNetworkReply * const reply) const
{
    return new GetSiteResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetSiteRequestPrivate
 * \brief The GetSiteRequestPrivate class provides private implementation for GetSiteRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetSiteRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetSiteRequestPrivate::GetSiteRequestPrivate(
    const OutpostsRequest::Action action, GetSiteRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSiteRequest
 * class' copy constructor.
 */
GetSiteRequestPrivate::GetSiteRequestPrivate(
    const GetSiteRequestPrivate &other, GetSiteRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
