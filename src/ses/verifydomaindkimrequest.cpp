// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifydomaindkimrequest.h"
#include "verifydomaindkimrequest_p.h"
#include "verifydomaindkimresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyDomainDkimRequest
 * \brief The VerifyDomainDkimRequest class provides an interface for Ses VerifyDomainDkim requests.
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
 * \sa SesClient::verifyDomainDkim
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyDomainDkimRequest::VerifyDomainDkimRequest(const VerifyDomainDkimRequest &other)
    : SesRequest(new VerifyDomainDkimRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyDomainDkimRequest object.
 */
VerifyDomainDkimRequest::VerifyDomainDkimRequest()
    : SesRequest(new VerifyDomainDkimRequestPrivate(SesRequest::VerifyDomainDkimAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyDomainDkimRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyDomainDkimResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyDomainDkimRequest::response(QNetworkReply * const reply) const
{
    return new VerifyDomainDkimResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::VerifyDomainDkimRequestPrivate
 * \brief The VerifyDomainDkimRequestPrivate class provides private implementation for VerifyDomainDkimRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyDomainDkimRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
VerifyDomainDkimRequestPrivate::VerifyDomainDkimRequestPrivate(
    const SesRequest::Action action, VerifyDomainDkimRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyDomainDkimRequest
 * class' copy constructor.
 */
VerifyDomainDkimRequestPrivate::VerifyDomainDkimRequestPrivate(
    const VerifyDomainDkimRequestPrivate &other, VerifyDomainDkimRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
