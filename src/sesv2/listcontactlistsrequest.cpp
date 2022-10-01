// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontactlistsrequest.h"
#include "listcontactlistsrequest_p.h"
#include "listcontactlistsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListContactListsRequest
 * \brief The ListContactListsRequest class provides an interface for SESv2 ListContactLists requests.
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
 * \sa SESv2Client::listContactLists
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactListsRequest::ListContactListsRequest(const ListContactListsRequest &other)
    : SESv2Request(new ListContactListsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactListsRequest object.
 */
ListContactListsRequest::ListContactListsRequest()
    : SESv2Request(new ListContactListsRequestPrivate(SESv2Request::ListContactListsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactListsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactListsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactListsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactListsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListContactListsRequestPrivate
 * \brief The ListContactListsRequestPrivate class provides private implementation for ListContactListsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListContactListsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListContactListsRequestPrivate::ListContactListsRequestPrivate(
    const SESv2Request::Action action, ListContactListsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactListsRequest
 * class' copy constructor.
 */
ListContactListsRequestPrivate::ListContactListsRequestPrivate(
    const ListContactListsRequestPrivate &other, ListContactListsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
