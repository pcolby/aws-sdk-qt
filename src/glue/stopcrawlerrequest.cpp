// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcrawlerrequest.h"
#include "stopcrawlerrequest_p.h"
#include "stopcrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StopCrawlerRequest
 * \brief The StopCrawlerRequest class provides an interface for Glue StopCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::stopCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
StopCrawlerRequest::StopCrawlerRequest(const StopCrawlerRequest &other)
    : GlueRequest(new StopCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCrawlerRequest object.
 */
StopCrawlerRequest::StopCrawlerRequest()
    : GlueRequest(new StopCrawlerRequestPrivate(GlueRequest::StopCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool StopCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new StopCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StopCrawlerRequestPrivate
 * \brief The StopCrawlerRequestPrivate class provides private implementation for StopCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StopCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StopCrawlerRequestPrivate::StopCrawlerRequestPrivate(
    const GlueRequest::Action action, StopCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCrawlerRequest
 * class' copy constructor.
 */
StopCrawlerRequestPrivate::StopCrawlerRequestPrivate(
    const StopCrawlerRequestPrivate &other, StopCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
