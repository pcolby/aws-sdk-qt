// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishreciperequest.h"
#include "publishreciperequest_p.h"
#include "publishreciperesponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::PublishRecipeRequest
 * \brief The PublishRecipeRequest class provides an interface for DataBrew PublishRecipe requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::publishRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
PublishRecipeRequest::PublishRecipeRequest(const PublishRecipeRequest &other)
    : DataBrewRequest(new PublishRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishRecipeRequest object.
 */
PublishRecipeRequest::PublishRecipeRequest()
    : DataBrewRequest(new PublishRecipeRequestPrivate(DataBrewRequest::PublishRecipeAction, this))
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
 * \class QtAws::DataBrew::PublishRecipeRequestPrivate
 * \brief The PublishRecipeRequestPrivate class provides private implementation for PublishRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a PublishRecipeRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
PublishRecipeRequestPrivate::PublishRecipeRequestPrivate(
    const DataBrewRequest::Action action, PublishRecipeRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
