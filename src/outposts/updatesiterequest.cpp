// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiterequest.h"
#include "updatesiterequest_p.h"
#include "updatesiteresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteRequest
 * \brief The UpdateSiteRequest class provides an interface for Outposts UpdateSite requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSite
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSiteRequest::UpdateSiteRequest(const UpdateSiteRequest &other)
    : OutpostsRequest(new UpdateSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSiteRequest object.
 */
UpdateSiteRequest::UpdateSiteRequest()
    : OutpostsRequest(new UpdateSiteRequestPrivate(OutpostsRequest::UpdateSiteAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSiteRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSiteResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::UpdateSiteRequestPrivate
 * \brief The UpdateSiteRequestPrivate class provides private implementation for UpdateSiteRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
UpdateSiteRequestPrivate::UpdateSiteRequestPrivate(
    const OutpostsRequest::Action action, UpdateSiteRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSiteRequest
 * class' copy constructor.
 */
UpdateSiteRequestPrivate::UpdateSiteRequestPrivate(
    const UpdateSiteRequestPrivate &other, UpdateSiteRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
