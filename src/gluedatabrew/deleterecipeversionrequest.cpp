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

#include "deleterecipeversionrequest.h"
#include "deleterecipeversionrequest_p.h"
#include "deleterecipeversionresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::DeleteRecipeVersionRequest
 * \brief The DeleteRecipeVersionRequest class provides an interface for GlueDataBrew DeleteRecipeVersion requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::deleteRecipeVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRecipeVersionRequest::DeleteRecipeVersionRequest(const DeleteRecipeVersionRequest &other)
    : GlueDataBrewRequest(new DeleteRecipeVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRecipeVersionRequest object.
 */
DeleteRecipeVersionRequest::DeleteRecipeVersionRequest()
    : GlueDataBrewRequest(new DeleteRecipeVersionRequestPrivate(GlueDataBrewRequest::DeleteRecipeVersionAction, this))
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
 * \class QtAws::GlueDataBrew::DeleteRecipeVersionRequestPrivate
 * \brief The DeleteRecipeVersionRequestPrivate class provides private implementation for DeleteRecipeVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a DeleteRecipeVersionRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
DeleteRecipeVersionRequestPrivate::DeleteRecipeVersionRequestPrivate(
    const GlueDataBrewRequest::Action action, DeleteRecipeVersionRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
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
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
