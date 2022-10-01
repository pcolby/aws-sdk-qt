// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptfilterrequest.h"
#include "deletereceiptfilterrequest_p.h"
#include "deletereceiptfilterresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptFilterRequest
 * \brief The DeleteReceiptFilterRequest class provides an interface for Ses DeleteReceiptFilter requests.
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
 * \sa SesClient::deleteReceiptFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest(const DeleteReceiptFilterRequest &other)
    : SesRequest(new DeleteReceiptFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReceiptFilterRequest object.
 */
DeleteReceiptFilterRequest::DeleteReceiptFilterRequest()
    : SesRequest(new DeleteReceiptFilterRequestPrivate(SesRequest::DeleteReceiptFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReceiptFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteReceiptFilterRequestPrivate
 * \brief The DeleteReceiptFilterRequestPrivate class provides private implementation for DeleteReceiptFilterRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptFilterRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const SesRequest::Action action, DeleteReceiptFilterRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptFilterRequest
 * class' copy constructor.
 */
DeleteReceiptFilterRequestPrivate::DeleteReceiptFilterRequestPrivate(
    const DeleteReceiptFilterRequestPrivate &other, DeleteReceiptFilterRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
