// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitymailfromdomainrequest.h"
#include "setidentitymailfromdomainrequest_p.h"
#include "setidentitymailfromdomainresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityMailFromDomainRequest
 * \brief The SetIdentityMailFromDomainRequest class provides an interface for Ses SetIdentityMailFromDomain requests.
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
 * \sa SesClient::setIdentityMailFromDomain
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityMailFromDomainRequest::SetIdentityMailFromDomainRequest(const SetIdentityMailFromDomainRequest &other)
    : SesRequest(new SetIdentityMailFromDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityMailFromDomainRequest object.
 */
SetIdentityMailFromDomainRequest::SetIdentityMailFromDomainRequest()
    : SesRequest(new SetIdentityMailFromDomainRequestPrivate(SesRequest::SetIdentityMailFromDomainAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityMailFromDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityMailFromDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityMailFromDomainRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityMailFromDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetIdentityMailFromDomainRequestPrivate
 * \brief The SetIdentityMailFromDomainRequestPrivate class provides private implementation for SetIdentityMailFromDomainRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityMailFromDomainRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityMailFromDomainRequestPrivate::SetIdentityMailFromDomainRequestPrivate(
    const SesRequest::Action action, SetIdentityMailFromDomainRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityMailFromDomainRequest
 * class' copy constructor.
 */
SetIdentityMailFromDomainRequestPrivate::SetIdentityMailFromDomainRequestPrivate(
    const SetIdentityMailFromDomainRequestPrivate &other, SetIdentityMailFromDomainRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
