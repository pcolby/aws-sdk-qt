// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
