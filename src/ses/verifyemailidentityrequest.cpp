// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyemailidentityrequest.h"
#include "verifyemailidentityrequest_p.h"
#include "verifyemailidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyEmailIdentityRequest
 * \brief The VerifyEmailIdentityRequest class provides an interface for Ses VerifyEmailIdentity requests.
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
 * \sa SesClient::verifyEmailIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest(const VerifyEmailIdentityRequest &other)
    : SesRequest(new VerifyEmailIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyEmailIdentityRequest object.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest()
    : SesRequest(new VerifyEmailIdentityRequestPrivate(SesRequest::VerifyEmailIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyEmailIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyEmailIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyEmailIdentityRequest::response(QNetworkReply * const reply) const
{
    return new VerifyEmailIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::VerifyEmailIdentityRequestPrivate
 * \brief The VerifyEmailIdentityRequestPrivate class provides private implementation for VerifyEmailIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyEmailIdentityRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const SesRequest::Action action, VerifyEmailIdentityRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyEmailIdentityRequest
 * class' copy constructor.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const VerifyEmailIdentityRequestPrivate &other, VerifyEmailIdentityRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
