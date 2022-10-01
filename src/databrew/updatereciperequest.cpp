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

#include "updatereciperequest.h"
#include "updatereciperequest_p.h"
#include "updatereciperesponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRecipeRequest
 * \brief The UpdateRecipeRequest class provides an interface for DataBrew UpdateRecipe requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecipeRequest::UpdateRecipeRequest(const UpdateRecipeRequest &other)
    : DataBrewRequest(new UpdateRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecipeRequest object.
 */
UpdateRecipeRequest::UpdateRecipeRequest()
    : DataBrewRequest(new UpdateRecipeRequestPrivate(DataBrewRequest::UpdateRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecipeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateRecipeRequestPrivate
 * \brief The UpdateRecipeRequestPrivate class provides private implementation for UpdateRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRecipeRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateRecipeRequestPrivate::UpdateRecipeRequestPrivate(
    const DataBrewRequest::Action action, UpdateRecipeRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecipeRequest
 * class' copy constructor.
 */
UpdateRecipeRequestPrivate::UpdateRecipeRequestPrivate(
    const UpdateRecipeRequestPrivate &other, UpdateRecipeRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
