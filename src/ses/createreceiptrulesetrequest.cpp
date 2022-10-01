// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreceiptrulesetrequest.h"
#include "createreceiptrulesetrequest_p.h"
#include "createreceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateReceiptRuleSetRequest
 * \brief The CreateReceiptRuleSetRequest class provides an interface for Ses CreateReceiptRuleSet requests.
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
 * \sa SesClient::createReceiptRuleSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReceiptRuleSetRequest::CreateReceiptRuleSetRequest(const CreateReceiptRuleSetRequest &other)
    : SesRequest(new CreateReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReceiptRuleSetRequest object.
 */
CreateReceiptRuleSetRequest::CreateReceiptRuleSetRequest()
    : SesRequest(new CreateReceiptRuleSetRequestPrivate(SesRequest::CreateReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReceiptRuleSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateReceiptRuleSetResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CreateReceiptRuleSetRequestPrivate
 * \brief The CreateReceiptRuleSetRequestPrivate class provides private implementation for CreateReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateReceiptRuleSetRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateReceiptRuleSetRequestPrivate::CreateReceiptRuleSetRequestPrivate(
    const SesRequest::Action action, CreateReceiptRuleSetRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReceiptRuleSetRequest
 * class' copy constructor.
 */
CreateReceiptRuleSetRequestPrivate::CreateReceiptRuleSetRequestPrivate(
    const CreateReceiptRuleSetRequestPrivate &other, CreateReceiptRuleSetRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
