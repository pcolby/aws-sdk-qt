// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactrequest.h"
#include "getcontactrequest_p.h"
#include "getcontactresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetContactRequest
 * \brief The GetContactRequest class provides an interface for SESv2 GetContact requests.
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
 * \sa SESv2Client::getContact
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactRequest::GetContactRequest(const GetContactRequest &other)
    : SESv2Request(new GetContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactRequest object.
 */
GetContactRequest::GetContactRequest()
    : SESv2Request(new GetContactRequestPrivate(SESv2Request::GetContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactRequest::response(QNetworkReply * const reply) const
{
    return new GetContactResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetContactRequestPrivate
 * \brief The GetContactRequestPrivate class provides private implementation for GetContactRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetContactRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const SESv2Request::Action action, GetContactRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactRequest
 * class' copy constructor.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const GetContactRequestPrivate &other, GetContactRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
