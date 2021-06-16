/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsendstatisticsrequest.h"
#include "getsendstatisticsrequest_p.h"
#include "getsendstatisticsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::GetSendStatisticsRequest
 * \brief The GetSendStatisticsRequest class provides an interface for SES GetSendStatistics requests.
 *
 * \inmodule QtAwsSES
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
 * \class QtAws::SES::GetSendStatisticsRequestPrivate
 * \brief The GetSendStatisticsRequestPrivate class provides private implementation for GetSendStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
