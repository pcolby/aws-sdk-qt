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

#include "createrecipejobrequest.h"
#include "createrecipejobrequest_p.h"
#include "createrecipejobresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRecipeJobRequest
 * \brief The CreateRecipeJobRequest class provides an interface for DataBrew CreateRecipeJob requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRecipeJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecipeJobRequest::CreateRecipeJobRequest(const CreateRecipeJobRequest &other)
    : DataBrewRequest(new CreateRecipeJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecipeJobRequest object.
 */
CreateRecipeJobRequest::CreateRecipeJobRequest()
    : DataBrewRequest(new CreateRecipeJobRequestPrivate(DataBrewRequest::CreateRecipeJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRecipeJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRecipeJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRecipeJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateRecipeJobResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateRecipeJobRequestPrivate
 * \brief The CreateRecipeJobRequestPrivate class provides private implementation for CreateRecipeJobRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRecipeJobRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateRecipeJobRequestPrivate::CreateRecipeJobRequestPrivate(
    const DataBrewRequest::Action action, CreateRecipeJobRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRecipeJobRequest
 * class' copy constructor.
 */
CreateRecipeJobRequestPrivate::CreateRecipeJobRequestPrivate(
    const CreateRecipeJobRequestPrivate &other, CreateRecipeJobRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
