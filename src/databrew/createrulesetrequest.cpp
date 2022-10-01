// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
