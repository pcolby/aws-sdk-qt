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

#include "createrulesetrequest.h"
#include "createrulesetrequest_p.h"
#include "createrulesetresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::CreateRulesetRequest
 * \brief The CreateRulesetRequest class provides an interface for DataBrew CreateRuleset requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::createRuleset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRulesetRequest::CreateRulesetRequest(const CreateRulesetRequest &other)
    : DataBrewRequest(new CreateRulesetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRulesetRequest object.
 */
CreateRulesetRequest::CreateRulesetRequest()
    : DataBrewRequest(new CreateRulesetRequestPrivate(DataBrewRequest::CreateRulesetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRulesetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRulesetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRulesetRequest::response(QNetworkReply * const reply) const
{
    return new CreateRulesetResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::CreateRulesetRequestPrivate
 * \brief The CreateRulesetRequestPrivate class provides private implementation for CreateRulesetRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a CreateRulesetRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
CreateRulesetRequestPrivate::CreateRulesetRequestPrivate(
    const DataBrewRequest::Action action, CreateRulesetRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRulesetRequest
 * class' copy constructor.
 */
CreateRulesetRequestPrivate::CreateRulesetRequestPrivate(
    const CreateRulesetRequestPrivate &other, CreateRulesetRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
