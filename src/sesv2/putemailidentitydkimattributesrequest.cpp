// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putemailidentitydkimattributesrequest.h"
#include "putemailidentitydkimattributesrequest_p.h"
#include "putemailidentitydkimattributesresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimAttributesRequest
 * \brief The PutEmailIdentityDkimAttributesRequest class provides an interface for SESv2 PutEmailIdentityDkimAttributes requests.
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
 * \sa SESv2Client::putEmailIdentityDkimAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
PutEmailIdentityDkimAttributesRequest::PutEmailIdentityDkimAttributesRequest(const PutEmailIdentityDkimAttributesRequest &other)
    : SESv2Request(new PutEmailIdentityDkimAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutEmailIdentityDkimAttributesRequest object.
 */
PutEmailIdentityDkimAttributesRequest::PutEmailIdentityDkimAttributesRequest()
    : SESv2Request(new PutEmailIdentityDkimAttributesRequestPrivate(SESv2Request::PutEmailIdentityDkimAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutEmailIdentityDkimAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutEmailIdentityDkimAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutEmailIdentityDkimAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutEmailIdentityDkimAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::PutEmailIdentityDkimAttributesRequestPrivate
 * \brief The PutEmailIdentityDkimAttributesRequestPrivate class provides private implementation for PutEmailIdentityDkimAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a PutEmailIdentityDkimAttributesRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
PutEmailIdentityDkimAttributesRequestPrivate::PutEmailIdentityDkimAttributesRequestPrivate(
    const SESv2Request::Action action, PutEmailIdentityDkimAttributesRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutEmailIdentityDkimAttributesRequest
 * class' copy constructor.
 */
PutEmailIdentityDkimAttributesRequestPrivate::PutEmailIdentityDkimAttributesRequestPrivate(
    const PutEmailIdentityDkimAttributesRequestPrivate &other, PutEmailIdentityDkimAttributesRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
