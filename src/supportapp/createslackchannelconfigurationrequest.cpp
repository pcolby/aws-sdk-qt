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

#include "createslackchannelconfigurationrequest.h"
#include "createslackchannelconfigurationrequest_p.h"
#include "createslackchannelconfigurationresponse.h"
#include "supportapprequest_p.h"

namespace QtAws {
namespace SupportApp {

/*!
 * \class QtAws::SupportApp::CreateSlackChannelConfigurationRequest
 * \brief The CreateSlackChannelConfigurationRequest class provides an interface for SupportApp CreateSlackChannelConfiguration requests.
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
 * \sa SupportAppClient::createSlackChannelConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSlackChannelConfigurationRequest::CreateSlackChannelConfigurationRequest(const CreateSlackChannelConfigurationRequest &other)
    : SupportAppRequest(new CreateSlackChannelConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSlackChannelConfigurationRequest object.
 */
CreateSlackChannelConfigurationRequest::CreateSlackChannelConfigurationRequest()
    : SupportAppRequest(new CreateSlackChannelConfigurationRequestPrivate(SupportAppRequest::CreateSlackChannelConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSlackChannelConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSlackChannelConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSlackChannelConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSlackChannelConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SupportApp::CreateSlackChannelConfigurationRequestPrivate
 * \brief The CreateSlackChannelConfigurationRequestPrivate class provides private implementation for CreateSlackChannelConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSupportApp
 */

/*!
 * Constructs a CreateSlackChannelConfigurationRequestPrivate object for SupportApp \a action,
 * with public implementation \a q.
 */
CreateSlackChannelConfigurationRequestPrivate::CreateSlackChannelConfigurationRequestPrivate(
    const SupportAppRequest::Action action, CreateSlackChannelConfigurationRequest * const q)
    : SupportAppRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSlackChannelConfigurationRequest
 * class' copy constructor.
 */
CreateSlackChannelConfigurationRequestPrivate::CreateSlackChannelConfigurationRequestPrivate(
    const CreateSlackChannelConfigurationRequestPrivate &other, CreateSlackChannelConfigurationRequest * const q)
    : SupportAppRequestPrivate(other, q)
{

}

} // namespace SupportApp
} // namespace QtAws
