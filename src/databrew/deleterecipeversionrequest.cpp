// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterecipeversionrequest.h"
#include "deleterecipeversionrequest_p.h"
#include "deleterecipeversionresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteRecipeVersionRequest
 * \brief The DeleteRecipeVersionRequest class provides an interface for DataBrew DeleteRecipeVersion requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteRecipeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecipeVersionRequest::DeleteRecipeVersionRequest(const DeleteRecipeVersionRequest &other)
    : DataBrewRequest(new DeleteRecipeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecipeVersionRequest object.
 */
DeleteRecipeVersionRequest::DeleteRecipeVersionRequest()
    : DataBrewRequest(new DeleteRecipeVersionRequestPrivate(DataBrewRequest::DeleteRecipeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRecipeVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRecipeVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRecipeVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRecipeVersionResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DeleteRecipeVersionRequestPrivate
 * \brief The DeleteRecipeVersionRequestPrivate class provides private implementation for DeleteRecipeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteRecipeVersionRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DeleteRecipeVersionRequestPrivate::DeleteRecipeVersionRequestPrivate(
    const DataBrewRequest::Action action, DeleteRecipeVersionRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRecipeVersionRequest
 * class' copy constructor.
 */
DeleteRecipeVersionRequestPrivate::DeleteRecipeVersionRequestPrivate(
    const DeleteRecipeVersionRequestPrivate &other, DeleteRecipeVersionRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
