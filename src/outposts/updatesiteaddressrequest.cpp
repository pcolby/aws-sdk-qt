// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesiteaddressrequest.h"
#include "updatesiteaddressrequest_p.h"
#include "updatesiteaddressresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::UpdateSiteAddressRequest
 * \brief The UpdateSiteAddressRequest class provides an interface for Outposts UpdateSiteAddress requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::updateSiteAddress
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSiteAddressRequest::UpdateSiteAddressRequest(const UpdateSiteAddressRequest &other)
    : OutpostsRequest(new UpdateSiteAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSiteAddressRequest object.
 */
UpdateSiteAddressRequest::UpdateSiteAddressRequest()
    : OutpostsRequest(new UpdateSiteAddressRequestPrivate(OutpostsRequest::UpdateSiteAddressAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSiteAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSiteAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSiteAddressRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSiteAddressResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::UpdateSiteAddressRequestPrivate
 * \brief The UpdateSiteAddressRequestPrivate class provides private implementation for UpdateSiteAddressRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a UpdateSiteAddressRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
UpdateSiteAddressRequestPrivate::UpdateSiteAddressRequestPrivate(
    const OutpostsRequest::Action action, UpdateSiteAddressRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSiteAddressRequest
 * class' copy constructor.
 */
UpdateSiteAddressRequestPrivate::UpdateSiteAddressRequestPrivate(
    const UpdateSiteAddressRequestPrivate &other, UpdateSiteAddressRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
