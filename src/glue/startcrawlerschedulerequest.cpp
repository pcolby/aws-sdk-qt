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

#include "startcrawlerschedulerequest.h"
#include "startcrawlerschedulerequest_p.h"
#include "startcrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartCrawlerScheduleRequest
 * \brief The StartCrawlerScheduleRequest class provides an interface for Glue StartCrawlerSchedule requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startCrawlerSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
StartCrawlerScheduleRequest::StartCrawlerScheduleRequest(const StartCrawlerScheduleRequest &other)
    : GlueRequest(new StartCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCrawlerScheduleRequest object.
 */
StartCrawlerScheduleRequest::StartCrawlerScheduleRequest()
    : GlueRequest(new StartCrawlerScheduleRequestPrivate(GlueRequest::StartCrawlerScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool StartCrawlerScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCrawlerScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StartCrawlerScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartCrawlerScheduleRequestPrivate
 * \brief The StartCrawlerScheduleRequestPrivate class provides private implementation for StartCrawlerScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartCrawlerScheduleRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartCrawlerScheduleRequestPrivate::StartCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, StartCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCrawlerScheduleRequest
 * class' copy constructor.
 */
StartCrawlerScheduleRequestPrivate::StartCrawlerScheduleRequestPrivate(
    const StartCrawlerScheduleRequestPrivate &other, StartCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
