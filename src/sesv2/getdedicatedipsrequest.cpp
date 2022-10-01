// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdedicatedipsrequest.h"
#include "getdedicatedipsrequest_p.h"
#include "getdedicatedipsresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetDedicatedIpsRequest
 * \brief The GetDedicatedIpsRequest class provides an interface for SESv2 GetDedicatedIps requests.
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
 * \sa SESv2Client::getDedicatedIps
 */

/*!
 * Constructs a copy of \a other.
 */
GetDedicatedIpsRequest::GetDedicatedIpsRequest(const GetDedicatedIpsRequest &other)
    : SESv2Request(new GetDedicatedIpsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDedicatedIpsRequest object.
 */
GetDedicatedIpsRequest::GetDedicatedIpsRequest()
    : SESv2Request(new GetDedicatedIpsRequestPrivate(SESv2Request::GetDedicatedIpsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDedicatedIpsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDedicatedIpsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDedicatedIpsRequest::response(QNetworkReply * const reply) const
{
    return new GetDedicatedIpsResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetDedicatedIpsRequestPrivate
 * \brief The GetDedicatedIpsRequestPrivate class provides private implementation for GetDedicatedIpsRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetDedicatedIpsRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetDedicatedIpsRequestPrivate::GetDedicatedIpsRequestPrivate(
    const SESv2Request::Action action, GetDedicatedIpsRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDedicatedIpsRequest
 * class' copy constructor.
 */
GetDedicatedIpsRequestPrivate::GetDedicatedIpsRequestPrivate(
    const GetDedicatedIpsRequestPrivate &other, GetDedicatedIpsRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
