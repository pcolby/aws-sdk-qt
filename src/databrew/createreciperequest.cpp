// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreciperequest.h"
#include "createreciperequest_p.h"
#include "createreciperesponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRecipeRequest
 * \brief The CreateRecipeRequest class provides an interface for DataBrew CreateRecipe requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRecipeRequest::CreateRecipeRequest(const CreateRecipeRequest &other)
    : DataBrewRequest(new CreateRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRecipeRequest object.
 */
CreateRecipeRequest::CreateRecipeRequest()
    : DataBrewRequest(new CreateRecipeRequestPrivate(DataBrewRequest::CreateRecipeAction, this))
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
 * \class QtAws::DataBrew::CreateRecipeRequestPrivate
 * \brief The CreateRecipeRequestPrivate class provides private implementation for CreateRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRecipeRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateRecipeRequestPrivate::CreateRecipeRequestPrivate(
    const DataBrewRequest::Action action, CreateRecipeRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
