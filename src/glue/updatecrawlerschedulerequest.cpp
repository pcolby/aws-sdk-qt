/*
    Copyright 2013-2018 Paul Colby

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

#include "updatecrawlerschedulerequest.h"
#include "updatecrawlerschedulerequest_p.h"
#include "updatecrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleRequest
 * \brief The UpdateCrawlerScheduleRequest class provides an interface for Glue UpdateCrawlerSchedule requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateCrawlerSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCrawlerScheduleRequest::UpdateCrawlerScheduleRequest(const UpdateCrawlerScheduleRequest &other)
    : GlueRequest(new UpdateCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCrawlerScheduleRequest object.
 */
UpdateCrawlerScheduleRequest::UpdateCrawlerScheduleRequest()
    : GlueRequest(new UpdateCrawlerScheduleRequestPrivate(GlueRequest::UpdateCrawlerScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCrawlerScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCrawlerScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCrawlerScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateCrawlerScheduleRequestPrivate
 * \brief The UpdateCrawlerScheduleRequestPrivate class provides private implementation for UpdateCrawlerScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateCrawlerScheduleRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateCrawlerScheduleRequestPrivate::UpdateCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, UpdateCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCrawlerScheduleRequest
 * class' copy constructor.
 */
UpdateCrawlerScheduleRequestPrivate::UpdateCrawlerScheduleRequestPrivate(
    const UpdateCrawlerScheduleRequestPrivate &other, UpdateCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
