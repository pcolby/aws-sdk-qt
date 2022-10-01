// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifydomainidentityrequest.h"
#include "verifydomainidentityrequest_p.h"
#include "verifydomainidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyDomainIdentityRequest
 * \brief The VerifyDomainIdentityRequest class provides an interface for Ses VerifyDomainIdentity requests.
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
 * \sa SesClient::verifyDomainIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyDomainIdentityRequest::VerifyDomainIdentityRequest(const VerifyDomainIdentityRequest &other)
    : SesRequest(new VerifyDomainIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyDomainIdentityRequest object.
 */
VerifyDomainIdentityRequest::VerifyDomainIdentityRequest()
    : SesRequest(new VerifyDomainIdentityRequestPrivate(SesRequest::VerifyDomainIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyDomainIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyDomainIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyDomainIdentityRequest::response(QNetworkReply * const reply) const
{
    return new VerifyDomainIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::VerifyDomainIdentityRequestPrivate
 * \brief The VerifyDomainIdentityRequestPrivate class provides private implementation for VerifyDomainIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyDomainIdentityRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
VerifyDomainIdentityRequestPrivate::VerifyDomainIdentityRequestPrivate(
    const SesRequest::Action action, VerifyDomainIdentityRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyDomainIdentityRequest
 * class' copy constructor.
 */
VerifyDomainIdentityRequestPrivate::VerifyDomainIdentityRequestPrivate(
    const VerifyDomainIdentityRequestPrivate &other, VerifyDomainIdentityRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
