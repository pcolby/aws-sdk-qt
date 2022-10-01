// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
