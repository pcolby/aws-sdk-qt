// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsendquotarequest.h"
#include "getsendquotarequest_p.h"
#include "getsendquotaresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetSendQuotaRequest
 * \brief The GetSendQuotaRequest class provides an interface for Ses GetSendQuota requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::getSendQuota
 */

/*!
 * Constructs a copy of \a other.
 */
GetSendQuotaRequest::GetSendQuotaRequest(const GetSendQuotaRequest &other)
    : SesRequest(new GetSendQuotaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSendQuotaRequest object.
 */
GetSendQuotaRequest::GetSendQuotaRequest()
    : SesRequest(new GetSendQuotaRequestPrivate(SesRequest::GetSendQuotaAction, this))
{

}

/*!
 * \reimp
 */
bool GetSendQuotaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSendQuotaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSendQuotaRequest::response(QNetworkReply * const reply) const
{
    return new GetSendQuotaResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetSendQuotaRequestPrivate
 * \brief The GetSendQuotaRequestPrivate class provides private implementation for GetSendQuotaRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetSendQuotaRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetSendQuotaRequestPrivate::GetSendQuotaRequestPrivate(
    const SesRequest::Action action, GetSendQuotaRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSendQuotaRequest
 * class' copy constructor.
 */
GetSendQuotaRequestPrivate::GetSendQuotaRequestPrivate(
    const GetSendQuotaRequestPrivate &other, GetSendQuotaRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
