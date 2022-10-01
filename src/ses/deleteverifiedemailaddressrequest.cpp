// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteverifiedemailaddressrequest.h"
#include "deleteverifiedemailaddressrequest_p.h"
#include "deleteverifiedemailaddressresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteVerifiedEmailAddressRequest
 * \brief The DeleteVerifiedEmailAddressRequest class provides an interface for Ses DeleteVerifiedEmailAddress requests.
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
 * \sa SesClient::deleteVerifiedEmailAddress
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest(const DeleteVerifiedEmailAddressRequest &other)
    : SesRequest(new DeleteVerifiedEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVerifiedEmailAddressRequest object.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest()
    : SesRequest(new DeleteVerifiedEmailAddressRequestPrivate(SesRequest::DeleteVerifiedEmailAddressAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVerifiedEmailAddressRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVerifiedEmailAddressResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVerifiedEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVerifiedEmailAddressResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteVerifiedEmailAddressRequestPrivate
 * \brief The DeleteVerifiedEmailAddressRequestPrivate class provides private implementation for DeleteVerifiedEmailAddressRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteVerifiedEmailAddressRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const SesRequest::Action action, DeleteVerifiedEmailAddressRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVerifiedEmailAddressRequest
 * class' copy constructor.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const DeleteVerifiedEmailAddressRequestPrivate &other, DeleteVerifiedEmailAddressRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
