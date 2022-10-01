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
