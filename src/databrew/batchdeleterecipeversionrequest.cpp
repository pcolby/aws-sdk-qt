// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleterecipeversionrequest.h"
#include "batchdeleterecipeversionrequest_p.h"
#include "batchdeleterecipeversionresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionRequest
 * \brief The BatchDeleteRecipeVersionRequest class provides an interface for DataBrew BatchDeleteRecipeVersion requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::batchDeleteRecipeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteRecipeVersionRequest::BatchDeleteRecipeVersionRequest(const BatchDeleteRecipeVersionRequest &other)
    : DataBrewRequest(new BatchDeleteRecipeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteRecipeVersionRequest object.
 */
BatchDeleteRecipeVersionRequest::BatchDeleteRecipeVersionRequest()
    : DataBrewRequest(new BatchDeleteRecipeVersionRequestPrivate(DataBrewRequest::BatchDeleteRecipeVersionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteRecipeVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteRecipeVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteRecipeVersionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteRecipeVersionResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::BatchDeleteRecipeVersionRequestPrivate
 * \brief The BatchDeleteRecipeVersionRequestPrivate class provides private implementation for BatchDeleteRecipeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a BatchDeleteRecipeVersionRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
BatchDeleteRecipeVersionRequestPrivate::BatchDeleteRecipeVersionRequestPrivate(
    const DataBrewRequest::Action action, BatchDeleteRecipeVersionRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteRecipeVersionRequest
 * class' copy constructor.
 */
BatchDeleteRecipeVersionRequestPrivate::BatchDeleteRecipeVersionRequestPrivate(
    const BatchDeleteRecipeVersionRequestPrivate &other, BatchDeleteRecipeVersionRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
