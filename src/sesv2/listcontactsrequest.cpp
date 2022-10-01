// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactsrequest.h"
#include "listcontactsrequest_p.h"
#include "listcontactsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListContactsRequest
 * \brief The ListContactsRequest class provides an interface for SESv2 ListContacts requests.
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
 * \sa SESv2Client::listContacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactsRequest::ListContactsRequest(const ListContactsRequest &other)
    : SESv2Request(new ListContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactsRequest object.
 */
ListContactsRequest::ListContactsRequest()
    : SESv2Request(new ListContactsRequestPrivate(SESv2Request::ListContactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListContactsRequestPrivate
 * \brief The ListContactsRequestPrivate class provides private implementation for ListContactsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListContactsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const SESv2Request::Action action, ListContactsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactsRequest
 * class' copy constructor.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const ListContactsRequestPrivate &other, ListContactsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
