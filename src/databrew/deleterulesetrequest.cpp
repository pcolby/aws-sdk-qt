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
