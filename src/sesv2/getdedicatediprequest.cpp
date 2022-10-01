// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdedicatediprequest.h"
#include "getdedicatediprequest_p.h"
#include "getdedicatedipresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDedicatedIpRequest
 * \brief The GetDedicatedIpRequest class provides an interface for SESv2 GetDedicatedIp requests.
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
 * \sa SESv2Client::getDedicatedIp
 */

/*!
 * Constructs a copy of \a other.
 */
GetDedicatedIpRequest::GetDedicatedIpRequest(const GetDedicatedIpRequest &other)
    : SESv2Request(new GetDedicatedIpRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDedicatedIpRequest object.
 */
GetDedicatedIpRequest::GetDedicatedIpRequest()
    : SESv2Request(new GetDedicatedIpRequestPrivate(SESv2Request::GetDedicatedIpAction, this))
{

}

/*!
 * \reimp
 */
bool GetDedicatedIpRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDedicatedIpResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDedicatedIpRequest::response(QNetworkReply * const reply) const
{
    return new GetDedicatedIpResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDedicatedIpRequestPrivate
 * \brief The GetDedicatedIpRequestPrivate class provides private implementation for GetDedicatedIpRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDedicatedIpRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDedicatedIpRequestPrivate::GetDedicatedIpRequestPrivate(
    const SESv2Request::Action action, GetDedicatedIpRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDedicatedIpRequest
 * class' copy constructor.
 */
GetDedicatedIpRequestPrivate::GetDedicatedIpRequestPrivate(
    const GetDedicatedIpRequestPrivate &other, GetDedicatedIpRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
