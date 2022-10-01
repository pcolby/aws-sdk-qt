// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
