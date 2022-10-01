// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptrulerequest.h"
#include "deletereceiptrulerequest_p.h"
#include "deletereceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptRuleRequest
 * \brief The DeleteReceiptRuleRequest class provides an interface for Ses DeleteReceiptRule requests.
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
 * \sa SesClient::deleteReceiptRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReceiptRuleRequest::DeleteReceiptRuleRequest(const DeleteReceiptRuleRequest &other)
    : SesRequest(new DeleteReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReceiptRuleRequest object.
 */
DeleteReceiptRuleRequest::DeleteReceiptRuleRequest()
    : SesRequest(new DeleteReceiptRuleRequestPrivate(SesRequest::DeleteReceiptRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReceiptRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteReceiptRuleRequestPrivate
 * \brief The DeleteReceiptRuleRequestPrivate class provides private implementation for DeleteReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptRuleRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteReceiptRuleRequestPrivate::DeleteReceiptRuleRequestPrivate(
    const SesRequest::Action action, DeleteReceiptRuleRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptRuleRequest
 * class' copy constructor.
 */
DeleteReceiptRuleRequestPrivate::DeleteReceiptRuleRequestPrivate(
    const DeleteReceiptRuleRequestPrivate &other, DeleteReceiptRuleRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
