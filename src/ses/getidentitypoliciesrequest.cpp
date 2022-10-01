// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitypoliciesrequest.h"
#include "getidentitypoliciesrequest_p.h"
#include "getidentitypoliciesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityPoliciesRequest
 * \brief The GetIdentityPoliciesRequest class provides an interface for Ses GetIdentityPolicies requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getIdentityPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityPoliciesRequest::GetIdentityPoliciesRequest(const GetIdentityPoliciesRequest &other)
    : SesRequest(new GetIdentityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityPoliciesRequest object.
 */
GetIdentityPoliciesRequest::GetIdentityPoliciesRequest()
    : SesRequest(new GetIdentityPoliciesRequestPrivate(SesRequest::GetIdentityPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetIdentityPoliciesRequestPrivate
 * \brief The GetIdentityPoliciesRequestPrivate class provides private implementation for GetIdentityPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityPoliciesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityPoliciesRequestPrivate::GetIdentityPoliciesRequestPrivate(
    const SesRequest::Action action, GetIdentityPoliciesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityPoliciesRequest
 * class' copy constructor.
 */
GetIdentityPoliciesRequestPrivate::GetIdentityPoliciesRequestPrivate(
    const GetIdentityPoliciesRequestPrivate &other, GetIdentityPoliciesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
