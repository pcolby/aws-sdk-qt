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

#include "updaterulesetrequest.h"
#include "updaterulesetrequest_p.h"
#include "updaterulesetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::UpdateRulesetRequest
 * \brief The UpdateRulesetRequest class provides an interface for DataBrew UpdateRuleset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::updateRuleset
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRulesetRequest::UpdateRulesetRequest(const UpdateRulesetRequest &other)
    : DataBrewRequest(new UpdateRulesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRulesetRequest object.
 */
UpdateRulesetRequest::UpdateRulesetRequest()
    : DataBrewRequest(new UpdateRulesetRequestPrivate(DataBrewRequest::UpdateRulesetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRulesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRulesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRulesetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRulesetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::UpdateRulesetRequestPrivate
 * \brief The UpdateRulesetRequestPrivate class provides private implementation for UpdateRulesetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a UpdateRulesetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
UpdateRulesetRequestPrivate::UpdateRulesetRequestPrivate(
    const DataBrewRequest::Action action, UpdateRulesetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRulesetRequest
 * class' copy constructor.
 */
UpdateRulesetRequestPrivate::UpdateRulesetRequestPrivate(
    const UpdateRulesetRequestPrivate &other, UpdateRulesetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
