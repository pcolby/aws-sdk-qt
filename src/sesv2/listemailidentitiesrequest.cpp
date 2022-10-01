// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listemailidentitiesrequest.h"
#include "listemailidentitiesrequest_p.h"
#include "listemailidentitiesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListEmailIdentitiesRequest
 * \brief The ListEmailIdentitiesRequest class provides an interface for SESv2 ListEmailIdentities requests.
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
 * \sa SESv2Client::listEmailIdentities
 */

/*!
 * Constructs a copy of \a other.
 */
ListEmailIdentitiesRequest::ListEmailIdentitiesRequest(const ListEmailIdentitiesRequest &other)
    : SESv2Request(new ListEmailIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEmailIdentitiesRequest object.
 */
ListEmailIdentitiesRequest::ListEmailIdentitiesRequest()
    : SESv2Request(new ListEmailIdentitiesRequestPrivate(SESv2Request::ListEmailIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListEmailIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEmailIdentitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEmailIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListEmailIdentitiesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::ListEmailIdentitiesRequestPrivate
 * \brief The ListEmailIdentitiesRequestPrivate class provides private implementation for ListEmailIdentitiesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListEmailIdentitiesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
ListEmailIdentitiesRequestPrivate::ListEmailIdentitiesRequestPrivate(
    const SESv2Request::Action action, ListEmailIdentitiesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEmailIdentitiesRequest
 * class' copy constructor.
 */
ListEmailIdentitiesRequestPrivate::ListEmailIdentitiesRequestPrivate(
    const ListEmailIdentitiesRequestPrivate &other, ListEmailIdentitiesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
