// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitymailfromdomainattributesrequest.h"
#include "getidentitymailfromdomainattributesrequest_p.h"
#include "getidentitymailfromdomainattributesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityMailFromDomainAttributesRequest
 * \brief The GetIdentityMailFromDomainAttributesRequest class provides an interface for Ses GetIdentityMailFromDomainAttributes requests.
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
 * \sa SesClient::getIdentityMailFromDomainAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetIdentityMailFromDomainAttributesRequest::GetIdentityMailFromDomainAttributesRequest(const GetIdentityMailFromDomainAttributesRequest &other)
    : SesRequest(new GetIdentityMailFromDomainAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetIdentityMailFromDomainAttributesRequest object.
 */
GetIdentityMailFromDomainAttributesRequest::GetIdentityMailFromDomainAttributesRequest()
    : SesRequest(new GetIdentityMailFromDomainAttributesRequestPrivate(SesRequest::GetIdentityMailFromDomainAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetIdentityMailFromDomainAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetIdentityMailFromDomainAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetIdentityMailFromDomainAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetIdentityMailFromDomainAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetIdentityMailFromDomainAttributesRequestPrivate
 * \brief The GetIdentityMailFromDomainAttributesRequestPrivate class provides private implementation for GetIdentityMailFromDomainAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityMailFromDomainAttributesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetIdentityMailFromDomainAttributesRequestPrivate::GetIdentityMailFromDomainAttributesRequestPrivate(
    const SesRequest::Action action, GetIdentityMailFromDomainAttributesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetIdentityMailFromDomainAttributesRequest
 * class' copy constructor.
 */
GetIdentityMailFromDomainAttributesRequestPrivate::GetIdentityMailFromDomainAttributesRequestPrivate(
    const GetIdentityMailFromDomainAttributesRequestPrivate &other, GetIdentityMailFromDomainAttributesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
