// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
