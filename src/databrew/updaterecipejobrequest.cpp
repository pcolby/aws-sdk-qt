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

#include "updaterecipejobrequest.h"
#include "updaterecipejobrequest_p.h"
#include "updaterecipejobresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRecipeJobRequest
 * \brief The UpdateRecipeJobRequest class provides an interface for DataBrew UpdateRecipeJob requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRecipeJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRecipeJobRequest::UpdateRecipeJobRequest(const UpdateRecipeJobRequest &other)
    : DataBrewRequest(new UpdateRecipeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRecipeJobRequest object.
 */
UpdateRecipeJobRequest::UpdateRecipeJobRequest()
    : DataBrewRequest(new UpdateRecipeJobRequestPrivate(DataBrewRequest::UpdateRecipeJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRecipeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRecipeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRecipeJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecipeJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateRecipeJobRequestPrivate
 * \brief The UpdateRecipeJobRequestPrivate class provides private implementation for UpdateRecipeJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRecipeJobRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateRecipeJobRequestPrivate::UpdateRecipeJobRequestPrivate(
    const DataBrewRequest::Action action, UpdateRecipeJobRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecipeJobRequest
 * class' copy constructor.
 */
UpdateRecipeJobRequestPrivate::UpdateRecipeJobRequestPrivate(
    const UpdateRecipeJobRequestPrivate &other, UpdateRecipeJobRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
