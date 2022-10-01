// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereceiptrulesetrequest.h"
#include "deletereceiptrulesetrequest_p.h"
#include "deletereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteReceiptRuleSetRequest
 * \brief The DeleteReceiptRuleSetRequest class provides an interface for Ses DeleteReceiptRuleSet requests.
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
 * \sa SesClient::deleteReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest(const DeleteReceiptRuleSetRequest &other)
    : SesRequest(new DeleteReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReceiptRuleSetRequest object.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest()
    : SesRequest(new DeleteReceiptRuleSetRequestPrivate(SesRequest::DeleteReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteReceiptRuleSetRequestPrivate
 * \brief The DeleteReceiptRuleSetRequestPrivate class provides private implementation for DeleteReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, DeleteReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptRuleSetRequest
 * class' copy constructor.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const DeleteReceiptRuleSetRequestPrivate &other, DeleteReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
