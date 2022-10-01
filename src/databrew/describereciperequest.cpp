// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereciperequest.h"
#include "describereciperequest_p.h"
#include "describereciperesponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeRecipeRequest
 * \brief The DescribeRecipeRequest class provides an interface for DataBrew DescribeRecipe requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeRecipe
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecipeRequest::DescribeRecipeRequest(const DescribeRecipeRequest &other)
    : DataBrewRequest(new DescribeRecipeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecipeRequest object.
 */
DescribeRecipeRequest::DescribeRecipeRequest()
    : DataBrewRequest(new DescribeRecipeRequestPrivate(DataBrewRequest::DescribeRecipeAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecipeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecipeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecipeRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecipeResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DescribeRecipeRequestPrivate
 * \brief The DescribeRecipeRequestPrivate class provides private implementation for DescribeRecipeRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeRecipeRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeRecipeRequestPrivate::DescribeRecipeRequestPrivate(
    const DataBrewRequest::Action action, DescribeRecipeRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecipeRequest
 * class' copy constructor.
 */
DescribeRecipeRequestPrivate::DescribeRecipeRequestPrivate(
    const DescribeRecipeRequestPrivate &other, DescribeRecipeRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
