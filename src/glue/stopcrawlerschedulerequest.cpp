// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcrawlerschedulerequest.h"
#include "stopcrawlerschedulerequest_p.h"
#include "stopcrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerScheduleRequest
 * \brief The StopCrawlerScheduleRequest class provides an interface for Glue StopCrawlerSchedule requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopCrawlerSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest(const StopCrawlerScheduleRequest &other)
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCrawlerScheduleRequest object.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest()
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(GlueRequest::StopCrawlerScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool StopCrawlerScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCrawlerScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StopCrawlerScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopCrawlerScheduleRequestPrivate
 * \brief The StopCrawlerScheduleRequestPrivate class provides private implementation for StopCrawlerScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerScheduleRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, StopCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCrawlerScheduleRequest
 * class' copy constructor.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const StopCrawlerScheduleRequestPrivate &other, StopCrawlerScheduleRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
