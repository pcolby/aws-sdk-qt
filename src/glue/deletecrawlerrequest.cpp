// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecrawlerrequest.h"
#include "deletecrawlerrequest_p.h"
#include "deletecrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteCrawlerRequest
 * \brief The DeleteCrawlerRequest class provides an interface for Glue DeleteCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCrawlerRequest::DeleteCrawlerRequest(const DeleteCrawlerRequest &other)
    : GlueRequest(new DeleteCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCrawlerRequest object.
 */
DeleteCrawlerRequest::DeleteCrawlerRequest()
    : GlueRequest(new DeleteCrawlerRequestPrivate(GlueRequest::DeleteCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteCrawlerRequestPrivate
 * \brief The DeleteCrawlerRequestPrivate class provides private implementation for DeleteCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteCrawlerRequestPrivate::DeleteCrawlerRequestPrivate(
    const GlueRequest::Action action, DeleteCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCrawlerRequest
 * class' copy constructor.
 */
DeleteCrawlerRequestPrivate::DeleteCrawlerRequestPrivate(
    const DeleteCrawlerRequestPrivate &other, DeleteCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
