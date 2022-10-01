// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
 * Constructs a UpdateCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
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
