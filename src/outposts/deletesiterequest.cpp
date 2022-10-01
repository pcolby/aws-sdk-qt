// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesiterequest.h"
#include "deletesiterequest_p.h"
#include "deletesiteresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::DeleteSiteRequest
 * \brief The DeleteSiteRequest class provides an interface for Outposts DeleteSite requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::deleteSite
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSiteRequest::DeleteSiteRequest(const DeleteSiteRequest &other)
    : OutpostsRequest(new DeleteSiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSiteRequest object.
 */
DeleteSiteRequest::DeleteSiteRequest()
    : OutpostsRequest(new DeleteSiteRequestPrivate(OutpostsRequest::DeleteSiteAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSiteRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSiteResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::DeleteSiteRequestPrivate
 * \brief The DeleteSiteRequestPrivate class provides private implementation for DeleteSiteRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a DeleteSiteRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
DeleteSiteRequestPrivate::DeleteSiteRequestPrivate(
    const OutpostsRequest::Action action, DeleteSiteRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSiteRequest
 * class' copy constructor.
 */
DeleteSiteRequestPrivate::DeleteSiteRequestPrivate(
    const DeleteSiteRequestPrivate &other, DeleteSiteRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
