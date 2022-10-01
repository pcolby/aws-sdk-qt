// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontactrequest.h"
#include "updatecontactrequest_p.h"
#include "updatecontactresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateContactRequest
 * \brief The UpdateContactRequest class provides an interface for SESv2 UpdateContact requests.
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
 * \sa SESv2Client::updateContact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactRequest::UpdateContactRequest(const UpdateContactRequest &other)
    : SESv2Request(new UpdateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactRequest object.
 */
UpdateContactRequest::UpdateContactRequest()
    : SESv2Request(new UpdateContactRequestPrivate(SESv2Request::UpdateContactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::UpdateContactRequestPrivate
 * \brief The UpdateContactRequestPrivate class provides private implementation for UpdateContactRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateContactRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const SESv2Request::Action action, UpdateContactRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactRequest
 * class' copy constructor.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const UpdateContactRequestPrivate &other, UpdateContactRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
