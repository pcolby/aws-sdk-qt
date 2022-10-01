// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listemailtemplatesrequest.h"
#include "listemailtemplatesrequest_p.h"
#include "listemailtemplatesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListEmailTemplatesRequest
 * \brief The ListEmailTemplatesRequest class provides an interface for SESv2 ListEmailTemplates requests.
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
 * \sa SESv2Client::listEmailTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListEmailTemplatesRequest::ListEmailTemplatesRequest(const ListEmailTemplatesRequest &other)
    : SESv2Request(new ListEmailTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEmailTemplatesRequest object.
 */
ListEmailTemplatesRequest::ListEmailTemplatesRequest()
    : SESv2Request(new ListEmailTemplatesRequestPrivate(SESv2Request::ListEmailTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEmailTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEmailTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEmailTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListEmailTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListEmailTemplatesRequestPrivate
 * \brief The ListEmailTemplatesRequestPrivate class provides private implementation for ListEmailTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListEmailTemplatesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListEmailTemplatesRequestPrivate::ListEmailTemplatesRequestPrivate(
    const SESv2Request::Action action, ListEmailTemplatesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEmailTemplatesRequest
 * class' copy constructor.
 */
ListEmailTemplatesRequestPrivate::ListEmailTemplatesRequestPrivate(
    const ListEmailTemplatesRequestPrivate &other, ListEmailTemplatesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
