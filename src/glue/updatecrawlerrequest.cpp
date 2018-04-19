/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatecrawlerrequest.h"
#include "updatecrawlerrequest_p.h"
#include "updatecrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateCrawlerRequest
 * \brief The UpdateCrawlerRequest class provides an interface for Glue UpdateCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCrawlerRequest::UpdateCrawlerRequest(const UpdateCrawlerRequest &other)
    : GlueRequest(new UpdateCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCrawlerRequest object.
 */
UpdateCrawlerRequest::UpdateCrawlerRequest()
    : GlueRequest(new UpdateCrawlerRequestPrivate(GlueRequest::UpdateCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateCrawlerRequestPrivate
 * \brief The UpdateCrawlerRequestPrivate class provides private implementation for UpdateCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a UpdateCrawlerRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
UpdateCrawlerRequestPrivate::UpdateCrawlerRequestPrivate(
    const GlueRequest::Action action, UpdateCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCrawlerRequest
 * class' copy constructor.
 */
UpdateCrawlerRequestPrivate::UpdateCrawlerRequestPrivate(
    const UpdateCrawlerRequestPrivate &other, UpdateCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
