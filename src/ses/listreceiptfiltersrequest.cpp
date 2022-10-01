// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreceiptfiltersrequest.h"
#include "listreceiptfiltersrequest_p.h"
#include "listreceiptfiltersresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::ListReceiptFiltersRequest
 * \brief The ListReceiptFiltersRequest class provides an interface for Ses ListReceiptFilters requests.
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
 * \sa SesClient::listReceiptFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest(const ListReceiptFiltersRequest &other)
    : SesRequest(new ListReceiptFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListReceiptFiltersRequest object.
 */
ListReceiptFiltersRequest::ListReceiptFiltersRequest()
    : SesRequest(new ListReceiptFiltersRequestPrivate(SesRequest::ListReceiptFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListReceiptFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListReceiptFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListReceiptFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListReceiptFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::ListReceiptFiltersRequestPrivate
 * \brief The ListReceiptFiltersRequestPrivate class provides private implementation for ListReceiptFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a ListReceiptFiltersRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const SesRequest::Action action, ListReceiptFiltersRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListReceiptFiltersRequest
 * class' copy constructor.
 */
ListReceiptFiltersRequestPrivate::ListReceiptFiltersRequestPrivate(
    const ListReceiptFiltersRequestPrivate &other, ListReceiptFiltersRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
