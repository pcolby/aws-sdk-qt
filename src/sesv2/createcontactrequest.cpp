// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcontactrequest.h"
#include "createcontactrequest_p.h"
#include "createcontactresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateContactRequest
 * \brief The CreateContactRequest class provides an interface for SESv2 CreateContact requests.
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
 * \sa SESv2Client::createContact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContactRequest::CreateContactRequest(const CreateContactRequest &other)
    : SESv2Request(new CreateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContactRequest object.
 */
CreateContactRequest::CreateContactRequest()
    : SESv2Request(new CreateContactRequestPrivate(SESv2Request::CreateContactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::CreateContactRequestPrivate
 * \brief The CreateContactRequestPrivate class provides private implementation for CreateContactRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateContactRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const SESv2Request::Action action, CreateContactRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContactRequest
 * class' copy constructor.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const CreateContactRequestPrivate &other, CreateContactRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
