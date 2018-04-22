/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createreceiptrulesetrequest.h"
#include "createreceiptrulesetrequest_p.h"
#include "createreceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::CreateReceiptRuleSetRequest
 * \brief The CreateReceiptRuleSetRequest class provides an interface for SES CreateReceiptRuleSet requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
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
 * \class QtAws::SES::CreateReceiptRuleSetRequestPrivate
 * \brief The CreateReceiptRuleSetRequestPrivate class provides private implementation for CreateReceiptRuleSetRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
