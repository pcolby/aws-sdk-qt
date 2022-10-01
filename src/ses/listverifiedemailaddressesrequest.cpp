// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listverifiedemailaddressesrequest.h"
#include "listverifiedemailaddressesrequest_p.h"
#include "listverifiedemailaddressesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListVerifiedEmailAddressesRequest
 * \brief The ListVerifiedEmailAddressesRequest class provides an interface for Ses ListVerifiedEmailAddresses requests.
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
 * \sa SesClient::listVerifiedEmailAddresses
 */

/*!
 * Constructs a copy of \a other.
 */
ListVerifiedEmailAddressesRequest::ListVerifiedEmailAddressesRequest(const ListVerifiedEmailAddressesRequest &other)
    : SesRequest(new ListVerifiedEmailAddressesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVerifiedEmailAddressesRequest object.
 */
ListVerifiedEmailAddressesRequest::ListVerifiedEmailAddressesRequest()
    : SesRequest(new ListVerifiedEmailAddressesRequestPrivate(SesRequest::ListVerifiedEmailAddressesAction, this))
{

}

/*!
 * \reimp
 */
bool ListVerifiedEmailAddressesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVerifiedEmailAddressesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVerifiedEmailAddressesRequest::response(QNetworkReply * const reply) const
{
    return new ListVerifiedEmailAddressesResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListVerifiedEmailAddressesRequestPrivate
 * \brief The ListVerifiedEmailAddressesRequestPrivate class provides private implementation for ListVerifiedEmailAddressesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListVerifiedEmailAddressesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListVerifiedEmailAddressesRequestPrivate::ListVerifiedEmailAddressesRequestPrivate(
    const SesRequest::Action action, ListVerifiedEmailAddressesRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVerifiedEmailAddressesRequest
 * class' copy constructor.
 */
ListVerifiedEmailAddressesRequestPrivate::ListVerifiedEmailAddressesRequestPrivate(
    const ListVerifiedEmailAddressesRequestPrivate &other, ListVerifiedEmailAddressesRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
