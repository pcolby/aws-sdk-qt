// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listslackchannelconfigurationsrequest.h"
#include "listslackchannelconfigurationsrequest_p.h"
#include "listslackchannelconfigurationsresponse.h"
#include "supportapprequest_p.h"

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::ListSlackChannelConfigurationsRequest
 * \brief The ListSlackChannelConfigurationsRequest class provides an interface for SupportApp ListSlackChannelConfigurations requests.
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
 * \sa SupportAppClient::listSlackChannelConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListSlackChannelConfigurationsRequest::ListSlackChannelConfigurationsRequest(const ListSlackChannelConfigurationsRequest &other)
    : SupportAppRequest(new ListSlackChannelConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSlackChannelConfigurationsRequest object.
 */
ListSlackChannelConfigurationsRequest::ListSlackChannelConfigurationsRequest()
    : SupportAppRequest(new ListSlackChannelConfigurationsRequestPrivate(SupportAppRequest::ListSlackChannelConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSlackChannelConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSlackChannelConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSlackChannelConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSlackChannelConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::SupportApp::ListSlackChannelConfigurationsRequestPrivate
 * \brief The ListSlackChannelConfigurationsRequestPrivate class provides private implementation for ListSlackChannelConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a ListSlackChannelConfigurationsRequestPrivate object for SupportApp \a action,
 * with public implementation \a q.
 */
ListSlackChannelConfigurationsRequestPrivate::ListSlackChannelConfigurationsRequestPrivate(
    const SupportAppRequest::Action action, ListSlackChannelConfigurationsRequest * const q)
    : SupportAppRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSlackChannelConfigurationsRequest
 * class' copy constructor.
 */
ListSlackChannelConfigurationsRequestPrivate::ListSlackChannelConfigurationsRequestPrivate(
    const ListSlackChannelConfigurationsRequestPrivate &other, ListSlackChannelConfigurationsRequest * const q)
    : SupportAppRequestPrivate(other, q)
{

}

} // namespace SupportApp
} // namespace QtAws
