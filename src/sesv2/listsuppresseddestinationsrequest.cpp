// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsuppresseddestinationsrequest.h"
#include "listsuppresseddestinationsrequest_p.h"
#include "listsuppresseddestinationsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListSuppressedDestinationsRequest
 * \brief The ListSuppressedDestinationsRequest class provides an interface for SESv2 ListSuppressedDestinations requests.
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
 * \sa SESv2Client::listSuppressedDestinations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSuppressedDestinationsRequest::ListSuppressedDestinationsRequest(const ListSuppressedDestinationsRequest &other)
    : SESv2Request(new ListSuppressedDestinationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSuppressedDestinationsRequest object.
 */
ListSuppressedDestinationsRequest::ListSuppressedDestinationsRequest()
    : SESv2Request(new ListSuppressedDestinationsRequestPrivate(SESv2Request::ListSuppressedDestinationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSuppressedDestinationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSuppressedDestinationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSuppressedDestinationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSuppressedDestinationsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListSuppressedDestinationsRequestPrivate
 * \brief The ListSuppressedDestinationsRequestPrivate class provides private implementation for ListSuppressedDestinationsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListSuppressedDestinationsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListSuppressedDestinationsRequestPrivate::ListSuppressedDestinationsRequestPrivate(
    const SESv2Request::Action action, ListSuppressedDestinationsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSuppressedDestinationsRequest
 * class' copy constructor.
 */
ListSuppressedDestinationsRequestPrivate::ListSuppressedDestinationsRequestPrivate(
    const ListSuppressedDestinationsRequestPrivate &other, ListSuppressedDestinationsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
