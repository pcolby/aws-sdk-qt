// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigurationsetrequest.h"
#include "getconfigurationsetrequest_p.h"
#include "getconfigurationsetresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetConfigurationSetRequest
 * \brief The GetConfigurationSetRequest class provides an interface for SESv2 GetConfigurationSet requests.
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
 * \sa SESv2Client::getConfigurationSet
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationSetRequest::GetConfigurationSetRequest(const GetConfigurationSetRequest &other)
    : SESv2Request(new GetConfigurationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationSetRequest object.
 */
GetConfigurationSetRequest::GetConfigurationSetRequest()
    : SESv2Request(new GetConfigurationSetRequestPrivate(SESv2Request::GetConfigurationSetAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationSetRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationSetResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetConfigurationSetRequestPrivate
 * \brief The GetConfigurationSetRequestPrivate class provides private implementation for GetConfigurationSetRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetConfigurationSetRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetConfigurationSetRequestPrivate::GetConfigurationSetRequestPrivate(
    const SESv2Request::Action action, GetConfigurationSetRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationSetRequest
 * class' copy constructor.
 */
GetConfigurationSetRequestPrivate::GetConfigurationSetRequestPrivate(
    const GetConfigurationSetRequestPrivate &other, GetConfigurationSetRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
