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

#include "getcrawlersrequest.h"
#include "getcrawlersrequest_p.h"
#include "getcrawlersresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlersRequest
 * \brief The GetCrawlersRequest class provides an interface for Glue GetCrawlers requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCrawlers
 */

/*!
 * Constructs a copy of \a other.
 */
GetCrawlersRequest::GetCrawlersRequest(const GetCrawlersRequest &other)
    : GlueRequest(new GetCrawlersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCrawlersRequest object.
 */
GetCrawlersRequest::GetCrawlersRequest()
    : GlueRequest(new GetCrawlersRequestPrivate(GlueRequest::GetCrawlersAction, this))
{

}

/*!
 * \reimp
 */
bool GetCrawlersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCrawlersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCrawlersRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlersResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCrawlersRequestPrivate
 * \brief The GetCrawlersRequestPrivate class provides private implementation for GetCrawlersRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlersRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCrawlersRequestPrivate::GetCrawlersRequestPrivate(
    const GlueRequest::Action action, GetCrawlersRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlersRequest
 * class' copy constructor.
 */
GetCrawlersRequestPrivate::GetCrawlersRequestPrivate(
    const GetCrawlersRequestPrivate &other, GetCrawlersRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
