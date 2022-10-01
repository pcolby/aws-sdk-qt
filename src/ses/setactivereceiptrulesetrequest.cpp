// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setactivereceiptrulesetrequest.h"
#include "setactivereceiptrulesetrequest_p.h"
#include "setactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetActiveReceiptRuleSetRequest
 * \brief The SetActiveReceiptRuleSetRequest class provides an interface for Ses SetActiveReceiptRuleSet requests.
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
 * \sa SesClient::setActiveReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
SetActiveReceiptRuleSetRequest::SetActiveReceiptRuleSetRequest(const SetActiveReceiptRuleSetRequest &other)
    : SesRequest(new SetActiveReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetActiveReceiptRuleSetRequest object.
 */
SetActiveReceiptRuleSetRequest::SetActiveReceiptRuleSetRequest()
    : SesRequest(new SetActiveReceiptRuleSetRequestPrivate(SesRequest::SetActiveReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool SetActiveReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetActiveReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetActiveReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new SetActiveReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetActiveReceiptRuleSetRequestPrivate
 * \brief The SetActiveReceiptRuleSetRequestPrivate class provides private implementation for SetActiveReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetActiveReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetActiveReceiptRuleSetRequestPrivate::SetActiveReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, SetActiveReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetActiveReceiptRuleSetRequest
 * class' copy constructor.
 */
SetActiveReceiptRuleSetRequestPrivate::SetActiveReceiptRuleSetRequestPrivate(
    const SetActiveReceiptRuleSetRequestPrivate &other, SetActiveReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
