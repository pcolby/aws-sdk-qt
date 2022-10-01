// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterulesetrequest.h"
#include "deleterulesetrequest_p.h"
#include "deleterulesetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::DeleteRulesetRequest
 * \brief The DeleteRulesetRequest class provides an interface for DataBrew DeleteRuleset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::deleteRuleset
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRulesetRequest::DeleteRulesetRequest(const DeleteRulesetRequest &other)
    : DataBrewRequest(new DeleteRulesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRulesetRequest object.
 */
DeleteRulesetRequest::DeleteRulesetRequest()
    : DataBrewRequest(new DeleteRulesetRequestPrivate(DataBrewRequest::DeleteRulesetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRulesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRulesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRulesetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRulesetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::DeleteRulesetRequestPrivate
 * \brief The DeleteRulesetRequestPrivate class provides private implementation for DeleteRulesetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a DeleteRulesetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
DeleteRulesetRequestPrivate::DeleteRulesetRequestPrivate(
    const DataBrewRequest::Action action, DeleteRulesetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRulesetRequest
 * class' copy constructor.
 */
DeleteRulesetRequestPrivate::DeleteRulesetRequestPrivate(
    const DeleteRulesetRequestPrivate &other, DeleteRulesetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
