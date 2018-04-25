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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
