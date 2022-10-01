// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
