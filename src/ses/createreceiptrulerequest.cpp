/*
    Copyright 2013-2021 Paul Colby

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

#include "createreceiptrulerequest.h"
#include "createreceiptrulerequest_p.h"
#include "createreceiptruleresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateReceiptRuleRequest
 * \brief The CreateReceiptRuleRequest class provides an interface for Ses CreateReceiptRule requests.
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
 * \sa SesClient::createReceiptRule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReceiptRuleRequest::CreateReceiptRuleRequest(const CreateReceiptRuleRequest &other)
    : SesRequest(new CreateReceiptRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReceiptRuleRequest object.
 */
CreateReceiptRuleRequest::CreateReceiptRuleRequest()
    : SesRequest(new CreateReceiptRuleRequestPrivate(SesRequest::CreateReceiptRuleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReceiptRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReceiptRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReceiptRuleRequest::response(QNetworkReply * const reply) const
{
    return new CreateReceiptRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CreateReceiptRuleRequestPrivate
 * \brief The CreateReceiptRuleRequestPrivate class provides private implementation for CreateReceiptRuleRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateReceiptRuleRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateReceiptRuleRequestPrivate::CreateReceiptRuleRequestPrivate(
    const SesRequest::Action action, CreateReceiptRuleRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReceiptRuleRequest
 * class' copy constructor.
 */
CreateReceiptRuleRequestPrivate::CreateReceiptRuleRequestPrivate(
    const CreateReceiptRuleRequestPrivate &other, CreateReceiptRuleRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
