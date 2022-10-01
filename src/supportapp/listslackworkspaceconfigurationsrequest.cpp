// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listslackworkspaceconfigurationsrequest.h"
#include "listslackworkspaceconfigurationsrequest_p.h"
#include "listslackworkspaceconfigurationsresponse.h"
#include "supportapprequest_p.h"

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::ListSlackWorkspaceConfigurationsRequest
 * \brief The ListSlackWorkspaceConfigurationsRequest class provides an interface for SupportApp ListSlackWorkspaceConfigurations requests.
 *
 * \inmodule QtAwsSupportApp
 *
 *  <fullname>Amazon Web Services Support App in Slack</fullname>
 * 
 *  You can use the Amazon Web Services Support App in Slack API to manage your support cases in Slack for your Amazon Web
 *  Services account. After you configure your Slack workspace and channel with the Amazon Web Services Support App, you can
 *  perform the following tasks directly in your Slack
 * 
 *  channel> <ul> <li>
 * 
 *  Create, search, update, and resolve your support
 * 
 *  case> </li> <li>
 * 
 *  Request service quota increases for your
 * 
 *  accoun> </li> <li>
 * 
 *  Invite Amazon Web Services Support agents to your channel so that you can chat directly about your support
 * 
 *  case> </li> </ul>
 * 
 *  For more information about how to perform these actions in Slack, see the following documentation in the <i>Amazon Web
 *  Services Support User
 * 
 *  Guide</i>> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/aws-support-app-for-slack.html">Amazon Web Services Support
 *  App in Slack</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/joining-a-live-chat-session.html">Joining a live chat
 *  session with Amazon Web Services Support</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/service-quota-increase.html">Requesting service quota
 *  increases</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/awssupport/latest/user/support-app-commands.html">Amazon Web Services Support App
 *  commands in Slack</a>
 * 
 *  </p </li> </ul>
 * 
 *  You can also use the Amazon Web Services Management Console instead of the Amazon Web Services Support App API to manage
 *  your Slack configurations. For more information, see <a
 *  href="https://docs.aws.amazon.com/awssupport/latest/user/authorize-slack-workspace.html">Authorize a Slack workspace to
 *  enable the Amazon Web Services Support
 * 
 *  App</a>> <note> <ul> <li>
 * 
 *  You must have a Business or Enterprise Support plan to use the Amazon Web Services Support App API.
 * 
 *  </p </li> <li>
 * 
 *  For more information about the Amazon Web Services Support App endpoints, see the <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/awssupport.html#awssupport_app_region">Amazon Web Services Support
 *  App in Slack endpoints</a> in the <i>Amazon Web Services General
 *
 * \sa SupportAppClient::listSlackWorkspaceConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSlackWorkspaceConfigurationsRequest::ListSlackWorkspaceConfigurationsRequest(const ListSlackWorkspaceConfigurationsRequest &other)
    : SupportAppRequest(new ListSlackWorkspaceConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSlackWorkspaceConfigurationsRequest object.
 */
ListSlackWorkspaceConfigurationsRequest::ListSlackWorkspaceConfigurationsRequest()
    : SupportAppRequest(new ListSlackWorkspaceConfigurationsRequestPrivate(SupportAppRequest::ListSlackWorkspaceConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSlackWorkspaceConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSlackWorkspaceConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSlackWorkspaceConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSlackWorkspaceConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::SupportApp::ListSlackWorkspaceConfigurationsRequestPrivate
 * \brief The ListSlackWorkspaceConfigurationsRequestPrivate class provides private implementation for ListSlackWorkspaceConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a ListSlackWorkspaceConfigurationsRequestPrivate object for SupportApp \a action,
 * with public implementation \a q.
 */
ListSlackWorkspaceConfigurationsRequestPrivate::ListSlackWorkspaceConfigurationsRequestPrivate(
    const SupportAppRequest::Action action, ListSlackWorkspaceConfigurationsRequest * const q)
    : SupportAppRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSlackWorkspaceConfigurationsRequest
 * class' copy constructor.
 */
ListSlackWorkspaceConfigurationsRequestPrivate::ListSlackWorkspaceConfigurationsRequestPrivate(
    const ListSlackWorkspaceConfigurationsRequestPrivate &other, ListSlackWorkspaceConfigurationsRequest * const q)
    : SupportAppRequestPrivate(other, q)
{

}

} // namespace SupportApp
} // namespace QtAws
