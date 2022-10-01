// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcrawlerrequest.h"
#include "getcrawlerrequest_p.h"
#include "getcrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlerRequest
 * \brief The GetCrawlerRequest class provides an interface for Glue GetCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
GetCrawlerRequest::GetCrawlerRequest(const GetCrawlerRequest &other)
    : GlueRequest(new GetCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCrawlerRequest object.
 */
GetCrawlerRequest::GetCrawlerRequest()
    : GlueRequest(new GetCrawlerRequestPrivate(GlueRequest::GetCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool GetCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCrawlerRequestPrivate
 * \brief The GetCrawlerRequestPrivate class provides private implementation for GetCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCrawlerRequestPrivate::GetCrawlerRequestPrivate(
    const GlueRequest::Action action, GetCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlerRequest
 * class' copy constructor.
 */
GetCrawlerRequestPrivate::GetCrawlerRequestPrivate(
    const GetCrawlerRequestPrivate &other, GetCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
