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

#include "startcrawlerrequest.h"
#include "startcrawlerrequest_p.h"
#include "startcrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::StartCrawlerRequest
 * \brief The StartCrawlerRequest class provides an interface for Glue StartCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::startCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
StartCrawlerRequest::StartCrawlerRequest(const StartCrawlerRequest &other)
    : GlueRequest(new StartCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCrawlerRequest object.
 */
StartCrawlerRequest::StartCrawlerRequest()
    : GlueRequest(new StartCrawlerRequestPrivate(GlueRequest::StartCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool StartCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new StartCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::StartCrawlerRequestPrivate
 * \brief The StartCrawlerRequestPrivate class provides private implementation for StartCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a StartCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
StartCrawlerRequestPrivate::StartCrawlerRequestPrivate(
    const GlueRequest::Action action, StartCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCrawlerRequest
 * class' copy constructor.
 */
StartCrawlerRequestPrivate::StartCrawlerRequestPrivate(
    const StartCrawlerRequestPrivate &other, StartCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
