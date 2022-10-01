// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcrawlerrequest.h"
#include "createcrawlerrequest_p.h"
#include "createcrawlerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateCrawlerRequest
 * \brief The CreateCrawlerRequest class provides an interface for Glue CreateCrawler requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createCrawler
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCrawlerRequest::CreateCrawlerRequest(const CreateCrawlerRequest &other)
    : GlueRequest(new CreateCrawlerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCrawlerRequest object.
 */
CreateCrawlerRequest::CreateCrawlerRequest()
    : GlueRequest(new CreateCrawlerRequestPrivate(GlueRequest::CreateCrawlerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCrawlerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCrawlerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCrawlerRequest::response(QNetworkReply * const reply) const
{
    return new CreateCrawlerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateCrawlerRequestPrivate
 * \brief The CreateCrawlerRequestPrivate class provides private implementation for CreateCrawlerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateCrawlerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateCrawlerRequestPrivate::CreateCrawlerRequestPrivate(
    const GlueRequest::Action action, CreateCrawlerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCrawlerRequest
 * class' copy constructor.
 */
CreateCrawlerRequestPrivate::CreateCrawlerRequestPrivate(
    const CreateCrawlerRequestPrivate &other, CreateCrawlerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
