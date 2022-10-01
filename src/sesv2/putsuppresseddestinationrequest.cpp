// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsuppresseddestinationrequest.h"
#include "putsuppresseddestinationrequest_p.h"
#include "putsuppresseddestinationresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutSuppressedDestinationRequest
 * \brief The PutSuppressedDestinationRequest class provides an interface for SESv2 PutSuppressedDestination requests.
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
 * \sa SESv2Client::putSuppressedDestination
 */

/*!
 * Constructs a copy of \a other.
 */
PutSuppressedDestinationRequest::PutSuppressedDestinationRequest(const PutSuppressedDestinationRequest &other)
    : SESv2Request(new PutSuppressedDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSuppressedDestinationRequest object.
 */
PutSuppressedDestinationRequest::PutSuppressedDestinationRequest()
    : SESv2Request(new PutSuppressedDestinationRequestPrivate(SESv2Request::PutSuppressedDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool PutSuppressedDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSuppressedDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSuppressedDestinationRequest::response(QNetworkReply * const reply) const
{
    return new PutSuppressedDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutSuppressedDestinationRequestPrivate
 * \brief The PutSuppressedDestinationRequestPrivate class provides private implementation for PutSuppressedDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutSuppressedDestinationRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutSuppressedDestinationRequestPrivate::PutSuppressedDestinationRequestPrivate(
    const SESv2Request::Action action, PutSuppressedDestinationRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSuppressedDestinationRequest
 * class' copy constructor.
 */
PutSuppressedDestinationRequestPrivate::PutSuppressedDestinationRequestPrivate(
    const PutSuppressedDestinationRequestPrivate &other, PutSuppressedDestinationRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
