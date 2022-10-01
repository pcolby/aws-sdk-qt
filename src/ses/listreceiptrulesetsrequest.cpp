// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceiptrulesetsrequest.h"
#include "listreceiptrulesetsrequest_p.h"
#include "listreceiptrulesetsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListReceiptRuleSetsRequest
 * \brief The ListReceiptRuleSetsRequest class provides an interface for Ses ListReceiptRuleSets requests.
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
 * \sa SesClient::listReceiptRuleSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListReceiptRuleSetsRequest::ListReceiptRuleSetsRequest(const ListReceiptRuleSetsRequest &other)
    : SesRequest(new ListReceiptRuleSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReceiptRuleSetsRequest object.
 */
ListReceiptRuleSetsRequest::ListReceiptRuleSetsRequest()
    : SesRequest(new ListReceiptRuleSetsRequestPrivate(SesRequest::ListReceiptRuleSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListReceiptRuleSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReceiptRuleSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReceiptRuleSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListReceiptRuleSetsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListReceiptRuleSetsRequestPrivate
 * \brief The ListReceiptRuleSetsRequestPrivate class provides private implementation for ListReceiptRuleSetsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListReceiptRuleSetsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListReceiptRuleSetsRequestPrivate::ListReceiptRuleSetsRequestPrivate(
    const SesRequest::Action action, ListReceiptRuleSetsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReceiptRuleSetsRequest
 * class' copy constructor.
 */
ListReceiptRuleSetsRequestPrivate::ListReceiptRuleSetsRequestPrivate(
    const ListReceiptRuleSetsRequestPrivate &other, ListReceiptRuleSetsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
