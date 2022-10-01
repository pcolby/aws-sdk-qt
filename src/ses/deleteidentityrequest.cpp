// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteidentityrequest.h"
#include "deleteidentityrequest_p.h"
#include "deleteidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteIdentityRequest
 * \brief The DeleteIdentityRequest class provides an interface for Ses DeleteIdentity requests.
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
 * \sa SesClient::deleteIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteIdentityRequest::DeleteIdentityRequest(const DeleteIdentityRequest &other)
    : SesRequest(new DeleteIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteIdentityRequest object.
 */
DeleteIdentityRequest::DeleteIdentityRequest()
    : SesRequest(new DeleteIdentityRequestPrivate(SesRequest::DeleteIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteIdentityRequestPrivate
 * \brief The DeleteIdentityRequestPrivate class provides private implementation for DeleteIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteIdentityRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const SesRequest::Action action, DeleteIdentityRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteIdentityRequest
 * class' copy constructor.
 */
DeleteIdentityRequestPrivate::DeleteIdentityRequestPrivate(
    const DeleteIdentityRequestPrivate &other, DeleteIdentityRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
