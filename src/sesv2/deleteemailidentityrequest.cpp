// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailidentityrequest.h"
#include "deleteemailidentityrequest_p.h"
#include "deleteemailidentityresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityRequest
 * \brief The DeleteEmailIdentityRequest class provides an interface for SESv2 DeleteEmailIdentity requests.
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
 * \sa SESv2Client::deleteEmailIdentity
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEmailIdentityRequest::DeleteEmailIdentityRequest(const DeleteEmailIdentityRequest &other)
    : SESv2Request(new DeleteEmailIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEmailIdentityRequest object.
 */
DeleteEmailIdentityRequest::DeleteEmailIdentityRequest()
    : SESv2Request(new DeleteEmailIdentityRequestPrivate(SESv2Request::DeleteEmailIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEmailIdentityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEmailIdentityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEmailIdentityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEmailIdentityResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityRequestPrivate
 * \brief The DeleteEmailIdentityRequestPrivate class provides private implementation for DeleteEmailIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailIdentityRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteEmailIdentityRequestPrivate::DeleteEmailIdentityRequestPrivate(
    const SESv2Request::Action action, DeleteEmailIdentityRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEmailIdentityRequest
 * class' copy constructor.
 */
DeleteEmailIdentityRequestPrivate::DeleteEmailIdentityRequestPrivate(
    const DeleteEmailIdentityRequestPrivate &other, DeleteEmailIdentityRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
