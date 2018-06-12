/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "setactivereceiptrulesetrequest.h"
#include "setactivereceiptrulesetrequest_p.h"
#include "setactivereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetActiveReceiptRuleSetRequest
 * \brief The SetActiveReceiptRuleSetRequest class provides an interface for SES SetActiveReceiptRuleSet requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * \class QtAws::SES::SetActiveReceiptRuleSetRequestPrivate
 * \brief The SetActiveReceiptRuleSetRequestPrivate class provides private implementation for SetActiveReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
