// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationcomponentconfigrequest.h"
#include "updateapplicationcomponentconfigrequest_p.h"
#include "updateapplicationcomponentconfigresponse.h"
#include "migrationhubstrategyrequest_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

/*!
 * \class QtAws::MigrationHubStrategy::UpdateApplicationComponentConfigRequest
 * \brief The UpdateApplicationComponentConfigRequest class provides an interface for MigrationHubStrategy UpdateApplicationComponentConfig requests.
 *
 * \inmodule QtAwsMigrationHubStrategy
 *
 *  <fullname>Migration Hub Strategy Recommendations</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for
 *  Migration Hub Strategy Recommendations (Strategy Recommendations). The topic for each action shows the API request
 *  parameters and the response. Alternatively, you can use one of the AWS SDKs to access an API that is tailored to the
 *  programming language or platform that you're using. For more information, see <a
 *  href="http://aws.amazon.com/tools/#SDKs">AWS
 *
 * \sa MigrationHubStrategyClient::updateApplicationComponentConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationComponentConfigRequest::UpdateApplicationComponentConfigRequest(const UpdateApplicationComponentConfigRequest &other)
    : MigrationHubStrategyRequest(new UpdateApplicationComponentConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationComponentConfigRequest object.
 */
UpdateApplicationComponentConfigRequest::UpdateApplicationComponentConfigRequest()
    : MigrationHubStrategyRequest(new UpdateApplicationComponentConfigRequestPrivate(MigrationHubStrategyRequest::UpdateApplicationComponentConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationComponentConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationComponentConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationComponentConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationComponentConfigResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHubStrategy::UpdateApplicationComponentConfigRequestPrivate
 * \brief The UpdateApplicationComponentConfigRequestPrivate class provides private implementation for UpdateApplicationComponentConfigRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHubStrategy
 */

/*!
 * Constructs a UpdateApplicationComponentConfigRequestPrivate object for MigrationHubStrategy \a action,
 * with public implementation \a q.
 */
UpdateApplicationComponentConfigRequestPrivate::UpdateApplicationComponentConfigRequestPrivate(
    const MigrationHubStrategyRequest::Action action, UpdateApplicationComponentConfigRequest * const q)
    : MigrationHubStrategyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationComponentConfigRequest
 * class' copy constructor.
 */
UpdateApplicationComponentConfigRequestPrivate::UpdateApplicationComponentConfigRequestPrivate(
    const UpdateApplicationComponentConfigRequestPrivate &other, UpdateApplicationComponentConfigRequest * const q)
    : MigrationHubStrategyRequestPrivate(other, q)
{

}

} // namespace MigrationHubStrategy
} // namespace QtAws
