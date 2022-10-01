// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesuppresseddestinationrequest.h"
#include "deletesuppresseddestinationrequest_p.h"
#include "deletesuppresseddestinationresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteSuppressedDestinationRequest
 * \brief The DeleteSuppressedDestinationRequest class provides an interface for SESv2 DeleteSuppressedDestination requests.
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
 * \sa SESv2Client::deleteSuppressedDestination
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSuppressedDestinationRequest::DeleteSuppressedDestinationRequest(const DeleteSuppressedDestinationRequest &other)
    : SESv2Request(new DeleteSuppressedDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSuppressedDestinationRequest object.
 */
DeleteSuppressedDestinationRequest::DeleteSuppressedDestinationRequest()
    : SESv2Request(new DeleteSuppressedDestinationRequestPrivate(SESv2Request::DeleteSuppressedDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSuppressedDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSuppressedDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSuppressedDestinationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSuppressedDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteSuppressedDestinationRequestPrivate
 * \brief The DeleteSuppressedDestinationRequestPrivate class provides private implementation for DeleteSuppressedDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteSuppressedDestinationRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteSuppressedDestinationRequestPrivate::DeleteSuppressedDestinationRequestPrivate(
    const SESv2Request::Action action, DeleteSuppressedDestinationRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSuppressedDestinationRequest
 * class' copy constructor.
 */
DeleteSuppressedDestinationRequestPrivate::DeleteSuppressedDestinationRequestPrivate(
    const DeleteSuppressedDestinationRequestPrivate &other, DeleteSuppressedDestinationRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
