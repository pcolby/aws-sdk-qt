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

#include "createreciperequest.h"
#include "createreciperequest_p.h"
#include "createreciperesponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::CreateRecipeRequest
 * \brief The CreateRecipeRequest class provides an interface for GlueDataBrew CreateRecipe requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::createRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecipeRequest::CreateRecipeRequest(const CreateRecipeRequest &other)
    : GlueDataBrewRequest(new CreateRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecipeRequest object.
 */
CreateRecipeRequest::CreateRecipeRequest()
    : GlueDataBrewRequest(new CreateRecipeRequestPrivate(GlueDataBrewRequest::CreateRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecipeRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::CreateRecipeRequestPrivate
 * \brief The CreateRecipeRequestPrivate class provides private implementation for CreateRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a CreateRecipeRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
CreateRecipeRequestPrivate::CreateRecipeRequestPrivate(
    const GlueDataBrewRequest::Action action, CreateRecipeRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecipeRequest
 * class' copy constructor.
 */
CreateRecipeRequestPrivate::CreateRecipeRequestPrivate(
    const CreateRecipeRequestPrivate &other, CreateRecipeRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
