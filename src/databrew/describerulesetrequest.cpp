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

#include "describerulesetrequest.h"
#include "describerulesetrequest_p.h"
#include "describerulesetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DescribeRulesetRequest
 * \brief The DescribeRulesetRequest class provides an interface for DataBrew DescribeRuleset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::describeRuleset
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRulesetRequest::DescribeRulesetRequest(const DescribeRulesetRequest &other)
    : DataBrewRequest(new DescribeRulesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRulesetRequest object.
 */
DescribeRulesetRequest::DescribeRulesetRequest()
    : DataBrewRequest(new DescribeRulesetRequestPrivate(DataBrewRequest::DescribeRulesetAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRulesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRulesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRulesetRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRulesetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DescribeRulesetRequestPrivate
 * \brief The DescribeRulesetRequestPrivate class provides private implementation for DescribeRulesetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DescribeRulesetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DescribeRulesetRequestPrivate::DescribeRulesetRequestPrivate(
    const DataBrewRequest::Action action, DescribeRulesetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRulesetRequest
 * class' copy constructor.
 */
DescribeRulesetRequestPrivate::DescribeRulesetRequestPrivate(
    const DescribeRulesetRequestPrivate &other, DescribeRulesetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
