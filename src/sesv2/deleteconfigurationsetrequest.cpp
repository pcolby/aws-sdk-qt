// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsetrequest.h"
#include "deleteconfigurationsetrequest_p.h"
#include "deleteconfigurationsetresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteConfigurationSetRequest
 * \brief The DeleteConfigurationSetRequest class provides an interface for SESv2 DeleteConfigurationSet requests.
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
 * \sa SESv2Client::deleteConfigurationSet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest(const DeleteConfigurationSetRequest &other)
    : SESv2Request(new DeleteConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigurationSetRequest object.
 */
DeleteConfigurationSetRequest::DeleteConfigurationSetRequest()
    : SESv2Request(new DeleteConfigurationSetRequestPrivate(SESv2Request::DeleteConfigurationSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigurationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteConfigurationSetRequestPrivate
 * \brief The DeleteConfigurationSetRequestPrivate class provides private implementation for DeleteConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteConfigurationSetRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const SESv2Request::Action action, DeleteConfigurationSetRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetRequest
 * class' copy constructor.
 */
DeleteConfigurationSetRequestPrivate::DeleteConfigurationSetRequestPrivate(
    const DeleteConfigurationSetRequestPrivate &other, DeleteConfigurationSetRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
