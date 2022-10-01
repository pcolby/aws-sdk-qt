// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsiteaddressrequest.h"
#include "getsiteaddressrequest_p.h"
#include "getsiteaddressresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetSiteAddressRequest
 * \brief The GetSiteAddressRequest class provides an interface for Outposts GetSiteAddress requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getSiteAddress
 */

/*!
 * Constructs a copy of \a other.
 */
GetSiteAddressRequest::GetSiteAddressRequest(const GetSiteAddressRequest &other)
    : OutpostsRequest(new GetSiteAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSiteAddressRequest object.
 */
GetSiteAddressRequest::GetSiteAddressRequest()
    : OutpostsRequest(new GetSiteAddressRequestPrivate(OutpostsRequest::GetSiteAddressAction, this))
{

}

/*!
 * \reimp
 */
bool GetSiteAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSiteAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSiteAddressRequest::response(QNetworkReply * const reply) const
{
    return new GetSiteAddressResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetSiteAddressRequestPrivate
 * \brief The GetSiteAddressRequestPrivate class provides private implementation for GetSiteAddressRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetSiteAddressRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetSiteAddressRequestPrivate::GetSiteAddressRequestPrivate(
    const OutpostsRequest::Action action, GetSiteAddressRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSiteAddressRequest
 * class' copy constructor.
 */
GetSiteAddressRequestPrivate::GetSiteAddressRequestPrivate(
    const GetSiteAddressRequestPrivate &other, GetSiteAddressRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
