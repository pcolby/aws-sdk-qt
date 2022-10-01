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

#include "listcustomverificationemailtemplatesrequest.h"
#include "listcustomverificationemailtemplatesrequest_p.h"
#include "listcustomverificationemailtemplatesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListCustomVerificationEmailTemplatesRequest
 * \brief The ListCustomVerificationEmailTemplatesRequest class provides an interface for SESv2 ListCustomVerificationEmailTemplates requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::listCustomVerificationEmailTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest(const ListCustomVerificationEmailTemplatesRequest &other)
    : SESv2Request(new ListCustomVerificationEmailTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCustomVerificationEmailTemplatesRequest object.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest()
    : SESv2Request(new ListCustomVerificationEmailTemplatesRequestPrivate(SESv2Request::ListCustomVerificationEmailTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomVerificationEmailTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCustomVerificationEmailTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomVerificationEmailTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomVerificationEmailTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListCustomVerificationEmailTemplatesRequestPrivate
 * \brief The ListCustomVerificationEmailTemplatesRequestPrivate class provides private implementation for ListCustomVerificationEmailTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListCustomVerificationEmailTemplatesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const SESv2Request::Action action, ListCustomVerificationEmailTemplatesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCustomVerificationEmailTemplatesRequest
 * class' copy constructor.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const ListCustomVerificationEmailTemplatesRequestPrivate &other, ListCustomVerificationEmailTemplatesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
