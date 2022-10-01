// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesecurityhubconfigurationrequest.h"
#include "updatesecurityhubconfigurationrequest_p.h"
#include "updatesecurityhubconfigurationresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::UpdateSecurityHubConfigurationRequest
 * \brief The UpdateSecurityHubConfigurationRequest class provides an interface for SecurityHub UpdateSecurityHubConfiguration requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  Security Hub provides you with a comprehensive view of the security state of your Amazon Web Services environment and
 *  resources. It also provides you with the readiness status of your environment based on controls from supported security
 *  standards. Security Hub collects security data from Amazon Web Services accounts, services, and integrated third-party
 *  products and helps you analyze security trends in your environment to identify the highest priority security issues. For
 *  more information about Security Hub, see the <a
 *  href="https://docs.aws.amazon.com/securityhub/latest/userguide/what-is-securityhub.html"> <i>Security HubUser Guide</i>
 * 
 *  </a>>
 * 
 *  When you use operations in the Security Hub API, the requests are executed only in the Amazon Web Services Region that
 *  is currently active or in the specific Amazon Web Services Region that you specify in your request. Any configuration or
 *  settings change that results from the operation is applied only to that Region. To make the same change in other
 *  Regions, execute the same command for each Region to apply the change
 * 
 *  to>
 * 
 *  For example, if your Region is set to <code>us-west-2</code>, when you use <code>CreateMembers</code> to add a member
 *  account to Security Hub, the association of the member account with the administrator account is created only in the
 *  <code>us-west-2</code> Region. Security Hub must be enabled for the member account in the same Region that the
 *  invitation was sent
 * 
 *  from>
 * 
 *  The following throttling limits apply to using Security Hub API
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchEnableStandards</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 1 request
 *  per
 * 
 *  second> </li> <li>
 * 
 *  <code>GetFindings</code> - <code>RateLimit</code> of 3 requests per second. <code>BurstLimit</code> of 6 requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchImportFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>BatchUpdateFindings</code> - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  <code>UpdateStandardsControl</code> - <code>RateLimit</code> of 1 request per second, <code>BurstLimit</code> of 5
 *  requests per
 * 
 *  second> </li> <li>
 * 
 *  All other operations - <code>RateLimit</code> of 10 requests per second. <code>BurstLimit</code> of 30 requests per
 *
 * \sa SecurityHubClient::updateSecurityHubConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSecurityHubConfigurationRequest::UpdateSecurityHubConfigurationRequest(const UpdateSecurityHubConfigurationRequest &other)
    : SecurityHubRequest(new UpdateSecurityHubConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSecurityHubConfigurationRequest object.
 */
UpdateSecurityHubConfigurationRequest::UpdateSecurityHubConfigurationRequest()
    : SecurityHubRequest(new UpdateSecurityHubConfigurationRequestPrivate(SecurityHubRequest::UpdateSecurityHubConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSecurityHubConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSecurityHubConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSecurityHubConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSecurityHubConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::UpdateSecurityHubConfigurationRequestPrivate
 * \brief The UpdateSecurityHubConfigurationRequestPrivate class provides private implementation for UpdateSecurityHubConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a UpdateSecurityHubConfigurationRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
UpdateSecurityHubConfigurationRequestPrivate::UpdateSecurityHubConfigurationRequestPrivate(
    const SecurityHubRequest::Action action, UpdateSecurityHubConfigurationRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSecurityHubConfigurationRequest
 * class' copy constructor.
 */
UpdateSecurityHubConfigurationRequestPrivate::UpdateSecurityHubConfigurationRequestPrivate(
    const UpdateSecurityHubConfigurationRequestPrivate &other, UpdateSecurityHubConfigurationRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
