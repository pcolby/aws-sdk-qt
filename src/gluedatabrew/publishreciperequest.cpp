/*
    Copyright 2013-2021 Paul Colby

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

#include "publishreciperequest.h"
#include "publishreciperequest_p.h"
#include "publishreciperesponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::PublishRecipeRequest
 * \brief The PublishRecipeRequest class provides an interface for GlueDataBrew PublishRecipe requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::publishRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
PublishRecipeRequest::PublishRecipeRequest(const PublishRecipeRequest &other)
    : GlueDataBrewRequest(new PublishRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishRecipeRequest object.
 */
PublishRecipeRequest::PublishRecipeRequest()
    : GlueDataBrewRequest(new PublishRecipeRequestPrivate(GlueDataBrewRequest::PublishRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool PublishRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishRecipeRequest::response(QNetworkReply * const reply) const
{
    return new PublishRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::PublishRecipeRequestPrivate
 * \brief The PublishRecipeRequestPrivate class provides private implementation for PublishRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a PublishRecipeRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
PublishRecipeRequestPrivate::PublishRecipeRequestPrivate(
    const GlueDataBrewRequest::Action action, PublishRecipeRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishRecipeRequest
 * class' copy constructor.
 */
PublishRecipeRequestPrivate::PublishRecipeRequestPrivate(
    const PublishRecipeRequestPrivate &other, PublishRecipeRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
