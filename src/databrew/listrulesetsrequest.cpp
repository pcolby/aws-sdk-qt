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

#include "listrulesetsrequest.h"
#include "listrulesetsrequest_p.h"
#include "listrulesetsresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListRulesetsRequest
 * \brief The ListRulesetsRequest class provides an interface for DataBrew ListRulesets requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listRulesets
 */

/*!
 * Constructs a copy of \a other.
 */
ListRulesetsRequest::ListRulesetsRequest(const ListRulesetsRequest &other)
    : DataBrewRequest(new ListRulesetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRulesetsRequest object.
 */
ListRulesetsRequest::ListRulesetsRequest()
    : DataBrewRequest(new ListRulesetsRequestPrivate(DataBrewRequest::ListRulesetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRulesetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRulesetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRulesetsRequest::response(QNetworkReply * const reply) const
{
    return new ListRulesetsResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListRulesetsRequestPrivate
 * \brief The ListRulesetsRequestPrivate class provides private implementation for ListRulesetsRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListRulesetsRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListRulesetsRequestPrivate::ListRulesetsRequestPrivate(
    const DataBrewRequest::Action action, ListRulesetsRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRulesetsRequest
 * class' copy constructor.
 */
ListRulesetsRequestPrivate::ListRulesetsRequestPrivate(
    const ListRulesetsRequestPrivate &other, ListRulesetsRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
