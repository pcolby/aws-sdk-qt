// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactrequest.h"
#include "deletecontactrequest_p.h"
#include "deletecontactresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteContactRequest
 * \brief The DeleteContactRequest class provides an interface for SESv2 DeleteContact requests.
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
 * \sa SESv2Client::deleteContact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContactRequest::DeleteContactRequest(const DeleteContactRequest &other)
    : SESv2Request(new DeleteContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContactRequest object.
 */
DeleteContactRequest::DeleteContactRequest()
    : SESv2Request(new DeleteContactRequestPrivate(SESv2Request::DeleteContactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContactResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteContactRequestPrivate
 * \brief The DeleteContactRequestPrivate class provides private implementation for DeleteContactRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteContactRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const SESv2Request::Action action, DeleteContactRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContactRequest
 * class' copy constructor.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const DeleteContactRequestPrivate &other, DeleteContactRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
