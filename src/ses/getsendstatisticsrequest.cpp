// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsendstatisticsrequest.h"
#include "getsendstatisticsrequest_p.h"
#include "getsendstatisticsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetSendStatisticsRequest
 * \brief The GetSendStatisticsRequest class provides an interface for Ses GetSendStatistics requests.
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
 * \sa SesClient::getSendStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
GetSendStatisticsRequest::GetSendStatisticsRequest(const GetSendStatisticsRequest &other)
    : SesRequest(new GetSendStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSendStatisticsRequest object.
 */
GetSendStatisticsRequest::GetSendStatisticsRequest()
    : SesRequest(new GetSendStatisticsRequestPrivate(SesRequest::GetSendStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSendStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSendStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSendStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new GetSendStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::GetSendStatisticsRequestPrivate
 * \brief The GetSendStatisticsRequestPrivate class provides private implementation for GetSendStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetSendStatisticsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
GetSendStatisticsRequestPrivate::GetSendStatisticsRequestPrivate(
    const SesRequest::Action action, GetSendStatisticsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSendStatisticsRequest
 * class' copy constructor.
 */
GetSendStatisticsRequestPrivate::GetSendStatisticsRequestPrivate(
    const GetSendStatisticsRequestPrivate &other, GetSendStatisticsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
